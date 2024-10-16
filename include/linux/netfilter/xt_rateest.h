#ifndef _XT_RATEEST_TARGET_H
#define _XT_RATEEST_TARGET_H

#include <linux/types.h>

struct xt_rateest_target_info {
	char			name[IFNAMSIZ];
	__s8			interval;
	__u8		ewma_log;

	/* Used internally by the kernel */
	struct xt_rateest	*est1 __attribute__((aligned(8)));
	struct xt_rateest	*est2 __attribute__((aligned(8)));
};

#endif /* _XT_RATEEST_MATCH_H */
