// Copies input to output and replaces all consequent spaces with one space
// Haven't managed to solve this task, this is code from TuxonSch from cyberforum
// www.cyberforum.ru/c-beginners/thread1297310.html

#include <stdio.h>

int main(void) {
	int c, spacebar = 0;
    while ( ( c = getchar ( ) ) != EOF ) {
        if ( c != ' ' )
            spacebar = 0;
        if ( c == ' ' )
            ++spacebar;
        if ( spacebar <= 1 )
            putchar ( c );
    }
}
