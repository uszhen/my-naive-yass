// SPDX-License-Identifier: GPL-2.0
/* Copyright (c) 2023-2024 Chilledheart  */

#include "ios/utils.h"

#include <arpa/inet.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <netdb.h>
#include <sys/socket.h>

#include <json/json.h>

std::string serializeTelemetryJson(uint64_t total_rx_bytes, uint64_t total_tx_bytes) {
  Json::Value j = Json::objectValue;
  j["total_rx_bytes"] = total_rx_bytes;
  j["total_tx_bytes"] = total_tx_bytes;
  Json::StreamWriterBuilder builder;
  builder["commentStyle"] = "None";
  builder["indentation"] = "    ";
  return Json::writeString(builder, j);
}

bool parseTelemetryJson(std::string_view resp, uint64_t* total_rx_bytes, uint64_t* total_tx_bytes) {
  Json::Value root;
  Json::CharReaderBuilder builder;
  builder["collectComments"] = false;
  Json::String err;
  const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
  if (!reader->parse(resp.data(), resp.data() + resp.size(), &root, &err)) {
    return false;
  }
  if (!root.isObject()) {
    return false;
  }
  *total_rx_bytes = 0;
  if (root.isMember("total_rx_bytes") && root["total_rx_bytes"].isUInt64()) {
    *total_rx_bytes = root["total_rx_bytes"].asUInt64();
  }
  *total_tx_bytes = 0;
  if (root.isMember("total_tx_bytes") && root["total_tx_bytes"].isUInt64()) {
    *total_tx_bytes = root["total_tx_bytes"].asUInt64();
  }
  return true;
}
