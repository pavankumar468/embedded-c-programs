#include <stdio.h>
#include "ari_dec.h"

int main() {
	int sum = add(4,8);
	int minus = sub(5,2);
	int into = mul(4,9);
	printf("ADD = %d ",sum);
	printf("SUB = %d ",minus);
	printf("MUL = %d ",into);
		

	return 0;
}
