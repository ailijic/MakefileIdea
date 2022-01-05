#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "src/i4/real.h"
#include "test/test_real.generic.h"


void setUp(void) {



}



void tearDown(void) {



}



void test_add_zero(void) {

 Real res;

 Real lhs = {.t = 0.0f};

 Real rhs = {.t = 2.0f};

 res = Real_add(lhs, rhs);

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((2.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((2.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((res.t))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(18)));

}



void test_add_comute(void) {

 Real res;

 Real lhs = {.t = -2.0f};

 Real rhs = {.t = 6.0f};



 res = Real_add(lhs, rhs);

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((4.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((4.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((res.t))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(27)));





 res = Real_add(rhs, lhs);

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((4.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((4.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((res.t))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(31)));

}



void test_generic_add(void) {

 Real res;

 Real lhs = {.t = 4.0f};

 Real rhs = {.t = 2.0f};

 res = _Generic((lhs), Real: Real_add )(lhs, rhs);

 UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((6.0f)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((6.0f))), (UNITY_FLOAT)((UNITY_FLOAT)((res.t))), ((

((void *)0)

)), (UNITY_UINT)((UNITY_UINT)(39)));

}
