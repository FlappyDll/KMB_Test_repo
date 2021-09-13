#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, b, c;
	printf("Programa vivoda proizvedenia dvyx 4isel \n");
	printf("Vvedite 3 celix 4isla \n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Proizvede pervogo i tret'ego 4isla = ");
	printf("%d", (a * c));
	return 0;
}