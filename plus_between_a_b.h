#pragma once
#include <stdio.h>
int plus_of_all_between(int a, int b) {
	int sum=0;

	for (int i = a + 1; i < b; i++) {
		sum += i;
	}


	return sum;
}
