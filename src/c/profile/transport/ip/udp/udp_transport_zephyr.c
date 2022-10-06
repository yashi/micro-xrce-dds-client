#include <uxr/client/profile/transport/ip/udp/udp_transport_zephyr.h>
#include "udp_transport_internal.h"

bool uxr_init_udp_platform(
        uxrUDPPlatform* platform,
        uxrIpProtocol ip_protocol,
        const char* ip,
        const char* port)
{
	return false;
}

bool uxr_close_udp_platform(
        uxrUDPPlatform* platform)
{
	return true;
}

size_t uxr_write_udp_data_platform(
        uxrUDPPlatform* platform,
        const uint8_t* buf,
        size_t len,
        uint8_t* errcode)
{
	return 0;
}

size_t uxr_read_udp_data_platform(
        uxrUDPPlatform* platform,
        uint8_t* buf,
        size_t len,
        int timeout,
        uint8_t* errcode)
{
	return 0;
}
