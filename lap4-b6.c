#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao 3 so nguyen a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c){
	printf("3 so '%d,%d,%d' la 3 canh cua 1 tam giac vuong voi '%d' la canh huyen",a,b,c,a);
	}
	else if(b*b==a*a+c*c){
	printf("3 so '%d,%d,%d' la 3 canh cua 1 tam giac vuong voi '%d' la canh huyen",a,b,c,b);
	}
	else if(c*c==a*a+b*b){
	printf("3 so '%d,%d,%d' la 3 canh cua 1 tam giac vuong voi '%d' la canh huyen",a,b,c,c);
	}
	else{
	printf("3 so '%d,%d,%d' khong phai la 3 canh cua 1 tam giac vuong",a,b,c);
	}

      return 0;
}
