#include "factorial.c"
#include "unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}
void test_fact(void) {
	int res;
	res = fact(0);
	TEST_ASSERT(res == 1);
	res = fact(1);
	TEST_ASSERT(res == 1);
	res = fact(2);
	TEST_ASSERT(res == 2);
	res = fact(3);
	TEST_ASSERT(res == 6);
	res = fact(4);
	TEST_ASSERT(res == 24);
}

void test_factImp(void) {
	int res;
	res = factImp(0, 1);
	TEST_ASSERT(res == 1);
	res = factImp(1, 1);
	TEST_ASSERT(res == 1);
	res = factImp(2, 1);
	TEST_ASSERT(res == 2);
	res = factImp(3, 1);
	TEST_ASSERT(res == 6);
	res = factImp(4, 1);
	TEST_ASSERT(res == 24);
}