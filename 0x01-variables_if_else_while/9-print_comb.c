#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;


	while(x <= 9) {
		putchar( x + '0');
		if(x != 9)
		    putchar(',');

		    x = x + 1;
	        
		
	}
	return (0);

}
