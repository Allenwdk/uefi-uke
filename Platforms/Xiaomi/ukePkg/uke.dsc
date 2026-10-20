##
#
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = uke
  PLATFORM_GUID                  = 7E3A5B2C-4D6F-4A8B-9C1D-2E3F4A5B6C7D
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/ukePkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = RELEASE|DEBUG
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = ukePkg/uke.fdf
  USE_CUSTOM_DISPLAY_DRIVER      = 0
  UKE_VENDOR_HW                  = 0

  #
  # 0 = SM8635
  # 1 = SM7675
  #
  SOC_TYPE                       = 1 

!include PalawanPkg/PalawanPkg.dsc.inc

[PcdsFixedAtBuild]
  #
  # DDR Memory
  #
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000

  #
  # UEFI Stack
  #
  gArmPlatformTokenSpaceGuid.PcdCPUCoresStackBase|0xA760D000
  gArmPlatformTokenSpaceGuid.PcdCPUCorePrimaryStackSize|0x40000

  #
  # SMBIOS
  #
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemManufacturer|"Xiaomi"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Pad 7"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"uke"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Pad_7_uke"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosSystemBoardModel|"Pad 7"

  #
  # Simple Frame Buffer
  #
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferWidth|3200
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferHeight|2136
  gSiliciumPkgTokenSpaceGuid.PcdFrameBufferColorDepth|32

  #
  # Platform PEI
  #
  gQcomPkgTokenSpaceGuid.PcdPlatformType|"LA"

[LibraryClasses]
  #
  # Memory Libraries
  #
  MemoryMapLib|ukePkg/Library/MemoryMapLib/MemoryMapLib.inf

  #
  # QCOM Libraries
  #
  ConfigurationMapLib|ukePkg/Library/ConfigurationMapLib/ConfigurationMapLib.inf
  FdtLib|MdePkg/Library/BaseFdtLib/BaseFdtLib.inf
  UniXNULib|UniXNUPkg/Library/UniXNULib/UniXNULib.inf

[Components]
  #
  # ACPI Tables
  #
  #uke/AcpiTables.inf
  UniXNUPkg/Application/UniXNU/UniXNU.inf
  UniXNUPkg/Driver/UniXNUDxe/UniXNUDxe.inf
  ukePkg/Drivers/UkeBootMemoryDxe/UkeBootMemoryDxe.inf
  DarwinBootPkg/Driver/DarwinBoot.inf
