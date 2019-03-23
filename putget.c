// This is a short program from Kernighan & Ritchie that copies symbols from input stream to output
// P.S.: EOF is Ctrl + D

#include <stdio.h>

int main(void) {
	
	int c;
	while ((c = getchar()) != EOF) {
	putchar(c);
	}
	
}

