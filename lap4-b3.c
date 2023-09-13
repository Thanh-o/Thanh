#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap ba so : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c){
		printf("display max = a");
	}
	else if(b>c && b>a){
		printf("display max = b");
	}
	else{
		printf("display max = c");
	}
	return 0;	
}
