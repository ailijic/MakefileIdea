#include "factorial.h"

static int factImp(int a_val, int a_total) {
	if (a_val <= 1) {
		return a_total;
	}
	return factImp(a_val - 1, a_total * a_val);
}

int fact(int a_val) {
	return factImp(a_val, 1);
}