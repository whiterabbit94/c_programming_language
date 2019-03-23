// Counts number of new line, tabs and spaces

#include <stdio.h>

int main(void) {
	int ns, nt, nl;
	ns = nt = nl = 0;
	int c = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') ++nl;
		else if (c == '\t') ++nt;
		else if (c == ' ') ++ns;
		}
	printf("Number of new lines: %d\nNumber of tabulations: %d\nNumber of spaces: %d\n", nl, nt, ns);
	}
