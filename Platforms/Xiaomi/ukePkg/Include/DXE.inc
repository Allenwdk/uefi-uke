  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
!endif

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/uke/QcomPkg/Drivers/TzDxe/ScmDxeCompat.inf
  INF Binaries/uke/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
!endif

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/uke/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
!endif

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF ukePkg/Drivers/UkeBootMemoryDxe/UkeBootMemoryDxe.inf
  # The XNU loader is part of the firmware: a driver loaded from a volume is
  # refused by the image verification of this build.
  INF DarwinBootPkg/Driver/DarwinBoot.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
!endif
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/RscDxe/RscDxe.inf
!endif

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf

  # Headless until stock uke framebuffer data is available.
!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

  # USE_CUSTOM_DISPLAY_DRIVER = 1: stock uke display chain (board DEPEX glue,
  # unchanged vendor DisplayDxe with the N81A panel data from RAW.inc).
  # Otherwise SimpleFbDxe publishes a GOP on the frame buffer the previous
  # stage left scanning out.
!endif

  # Headless until stock uke framebuffer data is available.

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/uke/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
!endif

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
!endif
