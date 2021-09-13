#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {
	int a, b, brain, suma, i, N, s;
	suma = 0;
	a = 0;
	b = 1;
	brain = 0;
	s = 0;
	printf("Programa vivoda summi 4isel fibona4i\n");
	printf("Vvedite summy skolki 4isel fibbona4i neobxodimo pos4itat (do 45 vklu4itel'no) \n");
	scanf("%d", &N);
	for (i = 0; i < N; i = i + 1) {
		s += 1;
		suma += a;
		brain = a + b;
		a = b;
		b = brain;
	}
	printf("%s %d %s", "Summa", N, "podrad idyshix 4isel fibona4i = ");
	printf("%d", suma);
	return 0;
}