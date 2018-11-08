#include <stdio.h>

int main(void)
{
	int i = 365;
	int *ptr = &i;
	
	printf("i address : %d\n", &i);
	printf("i value : %d\n\n", i);
	
	printf("ptr address : %d\n", ptr);
	printf("ptr value : %d\n\n", *ptr);
	
	return 0;
}
