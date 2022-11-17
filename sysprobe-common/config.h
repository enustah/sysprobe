// SPDX-License-Identifier: Apache-2.0
#ifndef SYSPROBE_COMMON_CONFIG_H
#define SYSPROBE_COMMON_CONFIG_H

#ifndef CONFIG_RINGBUF_SIZE_MAX
#define CONFIG_RINGBUF_SIZE_MAX (262144) // 256 * 1024
#endif

#ifndef CONFIG_LOG_LEN_MAX
#define CONFIG_LOG_LEN_MAX (1024)
#endif

#ifndef CONFIG_PROCESS_NUMBER_MAX
#define CONFIG_PROCESS_NUMBER_MAX (10240)
#endif

#ifndef CONFIG_CTL_SOCKET_PATH
#define CONFIG_CTL_SOCKET_PATH "/var/run/sysprobectl.sock"
#endif

#endif
