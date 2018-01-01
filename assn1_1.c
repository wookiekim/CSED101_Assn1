#include <stdio.h>

int main() {

	char first, middle, last;
	int encryption = -1;

	printf("Input your initial with white space : ");
	scanf("%c %c %c", &first, &middle, &last);

	printf("\nInput encoding number(1~9) : ");
	scanf("%d", &encryption);

	printf("\nASCII code of your input : %d %d %d\n", first, middle, last);

	printf("\nEncoded output : %c %c %c\n", first - encryption, middle - encryption, last - encryption);

	return 0;
}