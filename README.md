# Project Silicium UEFI for ARM64-Based Devices

<!-- ![Banner](https://github.com/Project-Silicium/Mu-Silicium/blob/main/Resources/Pictures/Banner.png) -->

## Description

This Project focuses on Making ARM-Based Devices Boot Operating Systems like Windows or Linux using Custom UEFI Firmware.

## Resources

- [Status](Status.md)
- [Building](Building.md)
- [Guides](https://github.com/Project-Silicium/Guides/blob/main/README.md)
- [Discord Server](https://discord.gg/Dx2QgMx7Sv)

## Frequently asked Questions

### **Is my Device Supported in this Project?**
- To Check if your Device is Supported, Take a Look at the Status Page Referenced in the Section Above.

### **What do I do if my Device isn't Supported in this Project?**
- We made some Guides that Explain How to Port your Device that are Referenced in the Section Above.

## Credits

[Microsoft](https://github.com/microsoft/) for their [Project Mu](https://microsoft.github.io/mu/) which Powers this Project. <br>
[WOA-Project](https://github.com/WOA-Project/) for their [mu_andromeda_platforms](https://github.com/WOA-Project/mu_andromeda_platforms/) which is used as Base for this Project. <br>
[Project Aloha](https://github.com/Project-Aloha/) for their [mu_aloha_platforms](https://github.com/Project-Aloha/mu_aloha_platforms/) which is used as Reference for some SoCs. <br>
[Open Surface RT](https://openrt.gitbook.io/open-surfacert/) for their Help on Tegra Related Stuff.

[sonic011gamer](https://github.com/sonic011gamer/) and [halal-beef](https://github.com/halal-beef/) for their Amazing Work on Exynos Related Stuff.

## License

All code except drivers in `GPLDrivers` & `GPLApplications` & `GPLLibrary` directories are licensed under BSD-2-Clause. <br />
GPL Drivers are licensed under `GPLv2` or later license.


## Uke UniXNU compressed GPU payload (2026-11-03)

The uke platform accepts standard UEFI-compressed FAT payloads and retains raw FAT support. It decompresses into the reserved `0xA8000000–0xB2000000` window after checking runtime FDT/input overlap, then publishes the existing BlockIO path. This transports the complete 160MiB FAT in a vendor_boot smaller than96MiB. Use paired boot/vendor_boot images.

The user-accepted uke iPadOS27 GPU baseline has boot SHA256 `2e46cba11922b6f2ea4018cdf5b75a564d8215fc75a8e17547bd90a5763c1328`, vendor_boot SHA256 `cd41b67e983f2d7032d78831a1efb929931f417a1b598346101625e6ed37e2b6` and kernel CRC `90B6BC701210D9DB`. This acceptance covers the reported boot/UI symptoms; it is not a general firmware qualification for other devices.
