#include "test_real.generic.h"
#include "real.h"
#include "unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_add_zero(void) {
	Real res;
	Real lhs = {.t = 0.0f};
	Real rhs = {.t = 2.0f};
	res = Real_add(lhs, rhs);
	TEST_ASSERT_EQUAL_FLOAT (2.0f, res.t);
}

void test_add_comute(void) {
	Real res;
	Real lhs = {.t = -2.0f};
	Real rhs = {.t = 6.0f};
	
	res = Real_add(lhs, rhs);
	TEST_ASSERT_EQUAL_FLOAT (4.0f, res.t);
	
	// Try the opperation in reverse
	res = Real_add(rhs, lhs);
	TEST_ASSERT_EQUAL_FLOAT (4.0f, res.t);
}

void test_generic_add(void) {
	Real res;
	Real lhs = {.t = 4.0f};
	Real rhs = {.t = 2.0f};
	res = add(lhs, rhs);
	TEST_ASSERT_EQUAL_FLOAT (6.0f, res.t);
}