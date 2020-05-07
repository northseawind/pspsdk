/*
 * PSP Software Development Kit - https://github.com/pspdev
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPSDK root for details.
 *
 * Copyright (c) 2005 Jesper Svennevid
 */

#include "guInternal.h"

void sceGuClearDepth(unsigned int depth)
{
	GuContext* context = &gu_contexts[gu_curr_context];
	context->clear_depth = depth;
}
