#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter a number=");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is even\n",n);
	}else{
		printf("%d is odd\n",n);
	}
	getch();
	return 0;
}
