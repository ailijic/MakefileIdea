#ifndef TEST_REAL_GENERIC_H
#define TEST_REAL_GENERIC_H

#define add(x, ...) \
	_Generic((x),     \
	Real: Real_add    \
	)(x, __VA_ARGS__)

#endif	