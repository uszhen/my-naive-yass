# 服务器代理服务 Server Proxy Service

如果你觉得本项目对你有用,而且你也恰巧有这方面的需求,你也可以选择通过我的购买链接赞助我  
- [搬瓦工GIA服务器](https://bandwagonhost.com/aff.php?aff=41846)  - - - 仅推荐购买GIA套餐 - - -   

如果你希望购买一些现成的代理服务,可选择下述代理服务
- [搬瓦工官方机场](https://justmysocks.net/members/aff.php?aff=16884)  

# Yet Another Shadow Socket

yass is an efficient forward proxy client supporting http/socks4/socks4a/socks5/socks5h protocol running on PC and mobile devices.

## Releases

[![GitHub release (latest SemVer)](https://img.shields.io/github/v/release/Chilledheart/yass)](https://github.com/Chilledheart/yass/releases)
[![Language: C++](https://img.shields.io/github/languages/top/Chilledheart/yass.svg)](https://github.com/Chilledheart/yass/search?l=cpp)
[![GitHub release (latest by SemVer)](https://img.shields.io/github/downloads/Chilledheart/yass/latest/total)](https://github.com/Chilledheart/yass/releases/latest)

Because we are reusing chromium's network stack directly,
we are following [chromium's release schedule](https://chromiumdash.appspot.com/schedule) and delivering new versions based on its beta branch.

- [Latest M130's Release (1.14.x)](https://github.com/Chilledheart/yass/releases/tag/1.14.0) will become Stable Release since _Oct 15, 2024_ (Extended Support).
- [Latest M129's Release (1.13.x)](https://github.com/Chilledheart/yass/releases/tag/1.13.2) has become Stable Release since _Sep 17, 2024_.
- [Latest M128's Release (1.12.x)](https://github.com/Chilledheart/yass/releases/tag/1.12.5) has become Stable Release since _Aug 20, 2024_ (Extended Support).
- [Latest M127's Release (1.11.x)](https://github.com/Chilledheart/yass/releases/tag/1.11.5) has become Stable Release since _Jul 23, 2024_
- [Latest M126's Release (1.10.x)](https://github.com/Chilledheart/yass/releases/tag/1.10.7) has become Stable Release since _Jun 11, 2024_ (Extended Support)
- [Latest M125's Release (1.9.x)](https://github.com/Chilledheart/yass/releases/tag/1.9.7) has become Stable Release since _May 14, 2024_
- [Latest M124's Release (1.8.x)](https://github.com/Chilledheart/yass/releases/tag/1.8.7) has become Stable Release since _Apr 16, 2024_ (Extended Support)
- [Latest M123's Release (1.7.x)](https://github.com/Chilledheart/yass/releases/tag/1.7.7) has become Stable Release since _Mar 19, 2024_
- [Latest M122's Release (1.6.x)](https://github.com/Chilledheart/yass/releases/tag/1.6.5) has become Stable Release since _Feb 20, 2024_ (Extended Support)
- [Latest M121's Release (1.5.x)](https://github.com/Chilledheart/yass/releases/tag/1.5.24) has become Stable Release since _Jan 23, 2024_

### Prebuilt binaries (Linux)
- GTK3 [download rpm][gtk3_rpm_url] or [download deb][gtk3_deb_url] (minimum requirement: _CentOS 8_ or _Ubuntu 16.04_)
- Qt5 [download rpm][qt5_rpm_url] or [download deb][qt5_deb_url] (minimum requirement: _CentOS 8_ or _Ubuntu 16.04_)
- GTK4 [download rpm][gtk4_rpm_url] or [download deb][gtk4_deb_url] (minimum requirement: _openSUSE Leap 15.5_, _CentOS 9_ or _Ubuntu 22.04_)
- Qt6 [download rpm][qt6_rpm_url] or [download deb][qt6_deb_url] (minimum requirement: _openSUSE Leap 15.5_, _CentOS 9_ with epel or _Ubuntu 22.04_)

[![aur yass-proxy-gtk3](https://img.shields.io/aur/version/yass-proxy-gtk3)](https://aur.archlinux.org/packages/yass-proxy-gtk3)
[![aur yass-proxy-qt5](https://img.shields.io/aur/version/yass-proxy-qt5)](https://aur.archlinux.org/packages/yass-proxy-qt5)
[![aur yass-proxy](https://img.shields.io/aur/version/yass-proxy)](https://aur.archlinux.org/packages/yass-proxy)
[![aur yass-proxy-qt6](https://img.shields.io/aur/version/yass-proxy-qt6)](https://aur.archlinux.org/packages/yass-proxy-qt6)

See [Status of Package Store](https://github.com/Chilledheart/yass/wiki/Status-of-Package-Store) for more.

- CLI [download tgz for amd64][cli_tgz_amd64_url] or [download tgz for i386][cli_tgz_i386_url] or [download tgz for arm64][cli_tgz_arm64_url] (require glibc >= 2.25)
- CLI [download tgz for loongarch64][cli_tgz_loongarch64_url] (require glibc >= 2.38, _new world_)
- CLI [download tgz for riscv64][cli_tgz_riscv64_url] or [download tgz for riscv32][cli_tgz_riscv32_url] (require glibc >= 2.36)
- CLI(openwrt) [download tgz for amd64][cli_openwrt_amd64_url] or [download tgz for i486][cli_openwrt_i486_url] or [download tgz for aarch64 generic][cli_openwrt_aarch64_url] (require openwrt >= 23.05.3)
- CLI(musl) [download tgz for amd64][cli_musl_amd64_url] or [download tgz for i386][cli_musl_i386_url] (static build)

[![aur yass-proxy-cli](https://img.shields.io/aur/version/yass-proxy-cli)](https://aur.archlinux.org/packages/yass-proxy-cli)

### Prebuilt binaries (Other platforms)
- Android [download 64-bit apk][android_64_apk_url] or [download 32-bit apk][android_32_apk_url] (require _Android 7.0_ or above)
- iOS [Continue to accept TestFlight invitation][ios_testflight_invitation] (require [TestFlight][ios_testflight_appstore_url] from _AppStore_, and _iOS 13.0_ or above)
- Windows [download 64-bit installer][windows_64_installer_url] (require [KB2999226] on _windows 7/8/8.1_) or [download 32-bit installer][windows_32_installer_url] (require [vc 2010 runtime][vs2010_x86] on _windows xp sp3_) or [download arm64 installer][windows_arm64_installer_url] (require _windows 10/11_)
- macOS [download intel dmg][macos_intel_dmg_url] or [download apple silicon dmg][macos_arm_dmg_url] (require _macOS 10.14_ or above)

- Flatpak for Linux (Qt5) [download flatpak][qt5_flatpak_x86_64_url] (unsandboxed edition) for _x86_64_ machine only.

> via [Flathub][flathub_url]: `flatpak install --user io.github.chilledheart.yass` (recommended, signed and sandboxed) for both of _x86_64_ and _aarch64_ machines

[![Flathub Version](https://img.shields.io/flathub/v/io.github.chilledheart.yass)][flathub_url]
[![Flathub Downloads](https://img.shields.io/flathub/downloads/io.github.chilledheart.yass)][flathub_url]

See [Supporteded Operating System](https://github.com/Chilledheart/yass/wiki/Supported-Operating-System) for more.

### Contribute your translation (i18n)

Please submit translations via Transifex: https://app.transifex.com/yetanothershadowsocket/yetanothershadowsocket

Steps:

1. Create a free account on Transifex (https://www.transifex.com/).
2. Send a request to join the language translation.
3. After accepted by the project maintainer, then you can translate online.

### Build from Source
Take a look at [build instructions](BUILDING.md) and [packaging instructions](PACKAGING.md).

## Highlight Features

### Post Quantum Kyber Support
Post Quantum Kyber Support (not enabled by default) is added on all of supported Platforms.

See [Protecting Chrome Traffic with Hybrid Kyber KEM](https://blog.chromium.org/2023/08/protecting-chrome-traffic-with-hybrid.html) for more.

### NaïveProxy-Compatible Protocol Support
Cipher http2 and https are NaïveProxy-compatible.

See [NaïveProxy](https://github.com/klzgrad/naiveproxy)'s project homepage for support.

### Android/iOS/macOS (M1/M2/M3/M4 only) comes with VPN Service support
Mobile users including macOS (M1/M2/M3/M4) machines can use yass as VPN Service more than pure Global Proxy Client.

TBD: Spliting Tunnel Support (#954)

### More Usages
Visit wiki's [Usages](https://github.com/Chilledheart/yass/wiki/Usage).

## Server side support (outside this project)

See [Setup forwardproxy caddy service](https://github.com/Chilledheart/yass/wiki/Usage:-server-setup#setup-forwardproxy-caddy-service) for more.

See [Window sizes for large bandwidth](https://github.com/Chilledheart/yass/wiki/Usage:-server-setup#window-sizes-for-large-bandwidth) for more.

See [Use BBR Congestion Control](https://github.com/Chilledheart/yass/wiki/Usage:-server-setup#use-bbr-congestion-control) for more.

See [ChatGPT capable caddy Server](https://github.com/Chilledheart/yass/wiki/Usage:-server-setup#chatgpt-capable-caddy-server) for more.

## Extra Features (Command Line only)

### Use custom CA certificate file
Pass `--certificate_chain_file file` to command line.
Use custom certificate chain provided by _file_ to verify server's certificate.

## Build Status

[![Compiler Compatibility](https://github.com/Chilledheart/yass/actions/workflows/compiler.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/compiler.yml)
[![CircleCI](https://img.shields.io/circleci/build/github/Chilledheart/yass/develop?logo=circleci&&label=Sanitizers%20and%20Ubuntu%20arm)](https://circleci.com/gh/Chilledheart/yass/?branch=develop)
[![Cirrus CI](https://img.shields.io/cirrus/github/Chilledheart/yass/develop?logo=cirrusci&&label=FreeBSD%20and%20macOS)](https://cirrus-ci.com/github/Chilledheart/yass/develop)

[![MinGW Build](https://github.com/Chilledheart/yass/actions/workflows/releases-mingw-new.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-mingw-new.yml)
[![Linux Build](https://github.com/Chilledheart/yass/actions/workflows/releases-linux-binary.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-linux-binary.yml)
[![macOS Build](https://github.com/Chilledheart/yass/actions/workflows/releases-macos.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-macos.yml)

[![Android Build](https://github.com/Chilledheart/yass/actions/workflows/releases-android-binary.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-android-binary.yml)
[![iOS Build](https://github.com/Chilledheart/yass/actions/workflows/releases-ios.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-ios.yml)

[![OpenWRT Build](https://github.com/Chilledheart/yass/actions/workflows/releases-openwrt-binary.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-openwrt-binary.yml)
[![FreeBSD Build](https://github.com/Chilledheart/yass/actions/workflows/releases-freebsd-binary.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-freebsd-binary.yml)
[![RPM Build](https://github.com/Chilledheart/yass/actions/workflows/releases-rpm.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-rpm.yml)
[![DEB Build](https://github.com/Chilledheart/yass/actions/workflows/releases-deb.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-deb.yml)
[![Flatpak Build](https://github.com/Chilledheart/yass/actions/workflows/releases-flatpak.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-flatpak.yml)

[![MSVC Build](https://github.com/Chilledheart/yass/actions/workflows/releases-windows.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-windows.yml)
[![Old MinGW Build](https://github.com/Chilledheart/yass/actions/workflows/releases-mingw.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/releases-mingw.yml)
[![Clang Tidy](https://github.com/Chilledheart/yass/actions/workflows/clang-tidy.yml/badge.svg)](https://github.com/Chilledheart/yass/actions/workflows/clang-tidy.yml)

[flathub_url]: https://flathub.org/apps/io.github.chilledheart.yass
[ios_testflight_invitation]: https://testflight.apple.com/join/6AkiEq09
[ios_testflight_appstore_url]: https://apps.apple.com/us/app/testflight/id899247664
[KB2999226]: https://support.microsoft.com/en-us/topic/update-for-universal-c-runtime-in-windows-c0514201-7fe6-95a3-b0a5-287930f3560c
[vs2010_x86]: https://download.microsoft.com/download/1/6/5/165255E7-1014-4D0A-B094-B6A430A6BFFC/vcredist_x86.exe

[gtk3_rpm_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-gtk3.el8.x86_64.1.14.0.rpm
[gtk3_deb_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-gtk3-ubuntu-16.04-xenial_amd64.1.14.0.deb
[qt5_rpm_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-qt5.el8.x86_64.1.14.0.rpm
[qt5_deb_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-qt5-ubuntu-16.04-xenial_amd64.1.14.0.deb
[gtk4_rpm_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-gtk4.lp155.x86_64.1.14.0.rpm
[gtk4_deb_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-gtk4-ubuntu-22.04-jammy_amd64.1.14.0.deb
[qt6_rpm_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-qt6.lp155.x86_64.1.14.0.rpm
[qt6_deb_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-qt6-ubuntu-22.04-jammy_amd64.1.14.0.deb

[qt5_flatpak_x86_64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-x86_64-1.14.0.flatpak

[cli_tgz_amd64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-amd64-1.14.0.tgz
[cli_tgz_i386_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-amd64-1.14.0.tgz
[cli_tgz_arm64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-arm64-1.14.0.tgz
[cli_tgz_loongarch64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-loongarch64-1.14.0.tgz
[cli_tgz_riscv64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-riscv64-1.14.0.tgz
[cli_tgz_riscv32_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-release-riscv32-1.14.0.tgz

[cli_openwrt_amd64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-openwrt-release-x86_64-1.14.0.tgz
[cli_openwrt_i486_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-openwrt-release-i486-1.14.0.tgz
[cli_openwrt_aarch64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-openwrt-release-aarch64-1.14.0.tgz

[cli_musl_amd64_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-musl-release-amd64-1.14.0.tgz
[cli_musl_i386_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass_cli-linux-musl-release-i386-1.14.0.tgz

[android_64_apk_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-android-release-arm64-1.14.0.apk
[android_32_apk_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-android-release-arm-1.14.0.apk

[windows_64_installer_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-mingw-win7-release-x86_64-1.14.0-system-installer.exe
[windows_32_installer_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-mingw-winxp-release-i686-1.14.0-system-installer.exe

[windows_arm64_installer_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-mingw-release-aarch64-1.14.0-system-installer.exe
[macos_intel_dmg_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-macos-release-x64-1.14.0.dmg
[macos_arm_dmg_url]: https://github.com/Chilledheart/yass/releases/download/1.14.0/yass-macos-release-arm64-1.14.0.dmg
