#include<stdio.h>
int main(){
	int result=0;
	int num;
	for(result=0;result<100;result++){
	printf("Nhap num: ");
	scanf("%d",&num);
	
	if(num>=0&&num<100){
	}
	else{
		printf("result= %d",result);
		break;
	}
}
	return 0;
}
