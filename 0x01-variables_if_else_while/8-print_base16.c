#include <stdio.h>

int main(void) {
	int i;

	for (i = 0; i < 16; i++) {
		char hex_char = (i < 10) ? ('0' + i) : ('a' + i - 10);
		putchar(hex_char);
	}

	putchar('\n');

	return (0);
}
