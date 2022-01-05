#include "src/factorial.c"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void) {



}



void tearDown(void) {



}

void test_fact(void) {

 int res;

 res = fact(0);

 do {if ((res == 1)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(14)));}} while(0);

 res = fact(1);

 do {if ((res == 1)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(16)));}} while(0);

 res = fact(2);

 do {if ((res == 2)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(18)));}} while(0);

 res = fact(3);

 do {if ((res == 6)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(20)));}} while(0);

 res = fact(4);

 do {if ((res == 24)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(22)));}} while(0);

}



void test_factImp(void) {

 int res;

 res = factImp(0, 1);

 do {if ((res == 1)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(28)));}} while(0);

 res = factImp(1, 1);

 do {if ((res == 1)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(30)));}} while(0);

 res = factImp(2, 1);

 do {if ((res == 2)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(32)));}} while(0);

 res = factImp(3, 1);

 do {if ((res == 6)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(34)));}} while(0);

 res = factImp(4, 1);

 do {if ((res == 24)) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(36)));}} while(0);

}
