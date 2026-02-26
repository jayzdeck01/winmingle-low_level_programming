#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char x = 'a';
	
	while (x <= 'd') {
		putchar(x);
		x++;
	}
	printf("e\n");
	
	x = 'f';

	while (x <= 'p') {
		putchar(x);
		x++;
	}
	printf("q\n");
	
        x = 'r';

	while (x <= 'z') {
		putchar(x);

		x++;
	}
     
	putchar('\n');
	return (0);

}
