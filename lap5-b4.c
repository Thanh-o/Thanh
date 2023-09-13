#include<stdio.h>
int main(){
	char kyTu;
	int i;
	printf("Nhap ky tu: ");
	for(i=0;i<=126;i++){
	scanf("%c",&kyTu);
	if((kyTu>=0)&&(kyTu<=31)){
		break;
	}
	else if(((kyTu>='A')&&(kyTu<='Z'))||((kyTu>='a')&&(kyTu<='z'))){
		printf("ky tu vua nhap la chu cai");continue;
	}
	else if((kyTu>='0')&&(kyTu<='9')){
		printf("Ky tu vua nhap la chu so");continue;
	}
	
	else{
		printf("Ky tu vua nhap la ky tu dac biet");continue;
	}
}
return 0;
}
