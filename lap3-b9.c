#include<stdio.h>
int main(){
	int a,b,c;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	c = a;
    a = b;
    b = c;
    printf("a = %d",a+1);
	printf("\nb = %d",b+1);


return 0;
}
