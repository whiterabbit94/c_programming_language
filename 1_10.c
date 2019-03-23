// Copies input to output and replaces tabs with '\t', backspaces with '\b' and backslashes with '\\'
// NOTE: 'backspace' key is not handled by the shell (depends on how the terminal is configured) but logic is the same. Also, Ctrl + H works as backspace on my setup

#include <stdio.h>

int main(void) {
	
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b'){
                        putchar('\\');
                        putchar('b');
                }
		else if (c == '\\'){
                        putchar('\\');
                        putchar('\\');
                }
		else putchar(c);
	}
}



