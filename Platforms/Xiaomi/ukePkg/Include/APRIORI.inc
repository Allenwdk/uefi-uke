APRIORI DXE {
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
!endif

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/uke/QcomPkg/Drivers/TzDxe/ScmDxeCompat.inf
  INF Binaries/uke/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
!endif

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
!endif

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
!endif

  INF FatPkg/EnhancedFatDxe/Fat.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
!endif

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
!endif
!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
!endif

  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/uke/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
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
  INF Binaries/uke/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

  # Headless until stock uke framebuffer data is available.

  INF Binaries/uke/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  # Headless until stock uke framebuffer data is available.
  INF Binaries/uke/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/uke/QcomPkg/Drivers/RNGDxe/RngDxe.inf
!endif

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(UKE_VENDOR_HW) == 1
  INF Binaries/uke/QcomPkg/Drivers/RscDxe/RscDxe.inf
!endif
}
