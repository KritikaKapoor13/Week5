#include<stdio.h>

int main()
{
	int i=1, j;
	printf("Enter number\n");
	scanf("%d",&j);
	while(j!=0){
	i=i*j;
	j--;
	}
	printf("Factorial is %d",i);
	return 0;
}

	
