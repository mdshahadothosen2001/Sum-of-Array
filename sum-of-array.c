
#include<stdio.h>
int main()
{
	int i,sum=0;
	int a[5]={10, 20, 30, 40, 50};
	int *ptr;
	ptr=&a;
		for(i=0; i<5; i++)
		{
		 sum+=*ptr++;
		}
		printf("Sum of all elements = %d\n",sum);
	return 0;
}
