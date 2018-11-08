#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int *ptr;
	
	ptr = &x;
	printf("ptr value : %d\n", *ptr);
	
	ptr = &y;
	printf("ptr value : %d\n", *ptr);
	
	ptr = &x;
	*ptr = 20;
	printf("x value : %d\n", x);
	
	return 0;
}

