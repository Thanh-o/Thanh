#include<stdio.h>

int main(){
	int a=11,b=4,c=15;
	printf("a > b : %d\n",a>b);
	printf("b < c : %d\n",b<c);
	printf("a + b >= c : %d\n",a+b>=c);
	printf("a – b <= b – c : %d\n",a-b<=b-c);
	printf("b – a == b – c : %d\n",b-a==b-c);
	printf("a * b != c * c : %d\n",a*b!=c*c);
	printf("a > 10 && b < 5 : %d\n",a>10&&b<5);
	printf("a * b > 25 || a * c > 10 : %d",a*b>25||a*c>10);
		
	return 0;
}
