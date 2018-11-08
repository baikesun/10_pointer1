#include <stdio.h>

int main(void)
{
	int grade[5] = {10, 20, 30, 40, 50};
	int average;
	int *ptr;
	
	int i;
	
	ptr = grade;
	
	for(i=0; i<5; i++)
	{
		average += *(ptr+i);   //ptr[i]
	}
	
	printf("average : %d\n", average/5);
	
	return 0;
}
