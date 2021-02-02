/*
 * generic_error.c
 *
 *  Created on: 26.10.2020
 *      Author: thomas
 */

#include "ux.h"
#include "glyphs.h"

// gcc doesn't know this and ledger's SDK cannot be compiled with Werror!
//#pragma GCC diagnostic error "-Werror"
#pragma GCC diagnostic error "-Wpedantic"
#pragma GCC diagnostic error "-Wall"
#pragma GCC diagnostic error "-Wextra"


UX_STEP_NOCB(
	ux_generating_addresses,
	pbb,
	{
		&C_x_icon_load,
		"Generating",
		"Addresses ..."
	}
);

UX_FLOW(
	ux_flow_generating_addresses,
	&ux_generating_addresses,
	FLOW_END_STEP

);

void flow_generating_addresses() {
	ux_flow_init(0, ux_flow_generating_addresses, NULL);
}

