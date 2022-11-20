// SPDX-License-Identifier: Apache-2.0
#ifndef SYSPROBE_COMMON_CONFIG_H
#define SYSPROBE_COMMON_CONFIG_H

#ifndef CONFIG_RINGBUF_SIZE_MAX
#define CONFIG_RINGBUF_SIZE_MAX (262144)
#endif

#ifndef CONFIG_LOG_LEN_MAX
#define CONFIG_LOG_LEN_MAX (1024)
#endif

#ifndef CONFIG_PROCESS_NUMBER_MAX
#define CONFIG_PROCESS_NUMBER_MAX (10240)
#endif

#ifndef CONFIG_CTL_SOCKET_PATH
#define CONFIG_CTL_SOCKET_PATH "/var/run/sysprobe-ctl.sock"
#endif

#ifndef CONFIG_DATA_SOCKET_PATH
#define CONFIG_DATA_SOCKET_PATH "/var/run/sysprobe-data.sock"
#endif

#ifndef CONFIG_CTL_BUFFER_SIZE_MAX
#define CONFIG_CTL_BUFFER_SIZE_MAX (1024)
#endif

#endif
