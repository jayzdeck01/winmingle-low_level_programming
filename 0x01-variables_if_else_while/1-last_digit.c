#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
	
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX/ 2;
	last = abs(n % 10);

	if (last > 5)
           printf("last digit of %i is %i and is greater than 5\n", n , last);
	else if (last == 0)
	       printf("last digit of %i is %i and is equal to zero\n", n , last);
	else if (last < 6)
		printf("last digit of %i is %i and is less than six and not zero\n", n , last);

        return (0);

}
      
