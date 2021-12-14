/* File generated by C:/nordicsemi/v1.6.1/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM__SPM_ADDRESS 0x0
#define PM__SPM_END_ADDRESS 0x10000
#define PM__SPM_SIZE 0x10000
#define PM__SPM_NAME spm
#define PM__SPM_ID 0
#define PM__spm_ID PM_SPM_ID
#define PM__spm_IS_ENABLED 1
#define PM_0_LABEL _SPM
#define PM__SPM_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM__APP_ADDRESS 0x10000
#define PM__APP_END_ADDRESS 0xfe000
#define PM__APP_SIZE 0xee000
#define PM__APP_NAME app
#define PM__APP_ID 1
#define PM__app_ID PM_APP_ID
#define PM__app_IS_ENABLED 1
#define PM_1_LABEL _APP
#define PM__APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM__SETTINGS_STORAGE_ADDRESS 0xfe000
#define PM__SETTINGS_STORAGE_END_ADDRESS 0x100000
#define PM__SETTINGS_STORAGE_SIZE 0x2000
#define PM__SETTINGS_STORAGE_NAME settings_storage
#define PM__SETTINGS_STORAGE_ID 2
#define PM__settings_storage_ID PM_SETTINGS_STORAGE_ID
#define PM__settings_storage_IS_ENABLED 1
#define PM_2_LABEL _SETTINGS_STORAGE
#define PM__SETTINGS_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM__OTP_ADDRESS 0xff8100
#define PM__OTP_END_ADDRESS 0xff83fc
#define PM__OTP_SIZE 0x2fc
#define PM__OTP_NAME otp
#define PM__SPM_SRAM_ADDRESS 0x20000000
#define PM__SPM_SRAM_END_ADDRESS 0x20008000
#define PM__SPM_SRAM_SIZE 0x8000
#define PM__SPM_SRAM_NAME spm_sram
#define PM__SRAM_SECURE_ADDRESS 0x20000000
#define PM__SRAM_SECURE_END_ADDRESS 0x20008000
#define PM__SRAM_SECURE_SIZE 0x8000
#define PM__SRAM_SECURE_NAME sram_secure
#define PM__SRAM_NONSECURE_ADDRESS 0x20008000
#define PM__SRAM_NONSECURE_END_ADDRESS 0x20070000
#define PM__SRAM_NONSECURE_SIZE 0x68000
#define PM__SRAM_NONSECURE_NAME sram_nonsecure
#define PM__SRAM_PRIMARY_ADDRESS 0x20008000
#define PM__SRAM_PRIMARY_END_ADDRESS 0x20070000
#define PM__SRAM_PRIMARY_SIZE 0x68000
#define PM__SRAM_PRIMARY_NAME sram_primary
#define PM__RPMSG_NRF53_SRAM_ADDRESS 0x20070000
#define PM__RPMSG_NRF53_SRAM_END_ADDRESS 0x20080000
#define PM__RPMSG_NRF53_SRAM_SIZE 0x10000
#define PM__RPMSG_NRF53_SRAM_NAME rpmsg_nrf53_sram
#define PM__NUM 3
#define PM__ALL_BY_SIZE "otp settings_storage spm_sram sram_secure rpmsg_nrf53_sram spm sram_primary sram_nonsecure app"
#define PM_APP_ADDRESS 0x1000000
#define PM_APP_END_ADDRESS 0x1040000
#define PM_APP_SIZE 0x40000
#define PM_APP_NAME app
#define PM_APP_ID 3
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_3_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_HCI_RPMSG_ADDRESS 0x1000000
#define PM_HCI_RPMSG_END_ADDRESS 0x1040000
#define PM_HCI_RPMSG_SIZE 0x40000
#define PM_HCI_RPMSG_NAME hci_rpmsg
#define PM_HCI_RPMSG_ID 4
#define PM_hci_rpmsg_ID PM_HCI_RPMSG_ID
#define PM_hci_rpmsg_IS_ENABLED 1
#define PM_4_LABEL HCI_RPMSG
#define PM_HCI_RPMSG_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_SRAM_PRIMARY_ADDRESS 0x21000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x21010000
#define PM_SRAM_PRIMARY_SIZE 0x10000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 5
#define PM_ALL_BY_SIZE "sram_primary hci_rpmsg app"
#define PM_ADDRESS 0x1000000
#define PM_SIZE 0x40000
#define PM_SRAM_ADDRESS 0x21000000
#define PM_SRAM_SIZE 0x10000
#endif /* PM_CONFIG_H__ */