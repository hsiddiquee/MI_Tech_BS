set(spm_KERNEL_HEX_NAME zephyr.hex)
set(spm_ZEPHYR_BINARY_DIR C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/zephyr)
set(spm_KERNEL_ELF_NAME zephyr.elf)
list(APPEND spm_BUILD_BYPRODUCTS C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/zephyr/zephyr.hex)
list(APPEND spm_BUILD_BYPRODUCTS C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/zephyr/zephyr.elf)
list(APPEND spm_BUILD_BYPRODUCTS
    C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/libspmsecureentries.a)
list(APPEND spm_PM_YML_DEP_FILES C:/nordicsemi/v1.6.1/nrf/samples/spm/pm.yml)
list(APPEND spm_PM_YML_FILES C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/zephyr/include/generated/pm.yml)
list(APPEND spm_PM_YML_DEP_FILES C:/nordicsemi/v1.6.1/nrf/subsys/partition_manager/pm.yml.trustzone)
list(APPEND spm_PM_YML_FILES C:/nordicsemi/MI_Tech_BS/MI_Tech_BS/build_2/spm/modules/nrf/subsys/partition_manager/pm.yml.trustzone)