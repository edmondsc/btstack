
#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

#define EMBEDDED

#define HAVE_INIT_SCRIPT
#define HAVE_BZERO
#define HAVE_TICK

#define HAVE_BLE

#define HCI_ACL_PAYLOAD_SIZE (512 + 64)

// 
#define MAX_SPP_CONNECTIONS 1
#define MAX_NO_HCI_CONNECTIONS MAX_SPP_CONNECTIONS
#define MAX_NO_GATT_CLIENTS 0
#define MAX_NO_GATT_SUBCLIENTS 0
#define MAX_NO_L2CAP_SERVICES  2 // SDP and RFCOMM
#define MAX_NO_L2CAP_CHANNELS  (1 + MAX_SPP_CONNECTIONS)
#define MAX_NO_RFCOMM_MULTIPLEXERS MAX_SPP_CONNECTIONS
#define MAX_NO_RFCOMM_SERVICES 1
#define MAX_NO_RFCOMM_CHANNELS MAX_SPP_CONNECTIONS
#define MAX_NO_DB_MEM_DEVICE_LINK_KEYS  2
#define MAX_NO_DB_MEM_DEVICE_NAMES 0
#define MAX_NO_DB_MEM_SERVICES 1
#define MAX_NO_BNEP_SERVICES 0
#define MAX_NO_BNEP_CHANNELS 0

int XIMPrintf(unsigned int level, const char* format, ...);

#define PRINTF(format, ...) XIMPrintf(0, format, ## __VA_ARGS__);

// #define ENABLE_LOG_DEBUG
// #define ENABLE_LOG_INFO
// #define ENABLE_LOG_ERROR

#endif
