/* Copyright (c) 2014, Nokia
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef _OFPI_ICMP_H_
#define _OFPI_ICMP_H_

#include "api/ofp_icmp.h"
#include "api/ofp_types.h"

enum ofp_return_code ofp_icmp_input(odp_packet_t *pkt_icmp, int off);
enum ofp_return_code ofp_icmp_error(odp_packet_t pkt_in, int type, int code, uint32_t dest, int mtu);

enum ofp_return_code
_ofp_icmp_input(odp_packet_t pkt_icmp, struct ofp_ip *ip, struct ofp_icmp *icp,
		enum ofp_return_code (*reflect)(odp_packet_t pkt));

#endif
