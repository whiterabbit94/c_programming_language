// Example from K&R: counts new lines, symbols and words. Modified: does not count \n as character 
// NOTE: had problems. On line 20 if c == ' ' is replaced with c == " " words had been counted incorrectly.  
#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside of word

int main(void) {

	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c != '\n') 
		++nc; 
		if (c == '\n') {
			++nl;
			state = OUT;
		}
		if (c == ' '  || c == '\t' || c == '\n') {
			state = OUT;
			
		}
		else if (state == OUT ) {
			state = IN;
			++nw;
		}
	}
	printf ("Number of characters: %d\nNumber of new lines: %d\nNumber of words: %d\n", nc, nl, nw);
}
