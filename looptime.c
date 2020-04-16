#include<stdio.h>
int main()
{
	char a[100];
	int i,n;
	printf("How many times you want to print your name");
	scanf("%d",&n);
	printf("Enter your name");
	scanf("%s",&a);
	for(i=0;i<n;i++)
	printf("%s \n",a);
	
	getch(); 
}
