#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x = 'z';
	
	while( x >= 'a') {
		putchar(x);
		x--;
	}
	return(0);

}
