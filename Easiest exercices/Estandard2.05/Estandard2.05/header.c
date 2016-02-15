#include "header.h"

int multiplo(int a, int b){

	int res;

	if ((b%a) == 0)
		res = 1;
	else
		res = 0;

	return res;

}