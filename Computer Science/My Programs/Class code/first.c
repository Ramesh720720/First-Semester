#include<stdio.h>
int main() {
	int age;
	printf("Enter your age ");
	scanf("%d",&age);
	printf("Hello %d !\n",age);
	printf("Address %p !\n",&age);
	float size=sizeof("%d",age);
	printf("Size %f \n",size);
	int size2=sizeof("%d",age);
	printf("Size %d \n",size2);
	return 0;
}


