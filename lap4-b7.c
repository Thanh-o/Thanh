#include<stdio.h>
int main(){
	int num1,num2;
	printf("num1 , num2: ");
	scanf("%d %d",&num1,&num2);
	if(num1%num2==0){
		printf("num2 la uoc so cua num1");
	}
	else if(num2%num1==0){
		printf("num1 la uoc so cua num2");
	}
	else{
		printf("num1 va num2 khong phai uoc so cua nhau");
	}
	return 0;
}
