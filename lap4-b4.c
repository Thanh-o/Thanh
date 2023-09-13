#include<stdio.h>
int main(){
	char kyTu;
	printf("Nhap vao mot ky tu: ");
	scanf("%c",&kyTu);
	if((kyTu < 'a' && kyTu > 'Z') || kyTu < 'A' || kyTu > 'z') {
		printf("Ky tu khong thuoc bang chu cai Alphabet");
	}
	else
	{
	switch(kyTu){
		case 'a':
		case 'A':
		case 'u':
		case 'U':
		case 'I':
		case 'i':
		case 'o':
		case 'O':
		case 'e':
		case 'E':
		printf("\n'%c'la nguyen am!",kyTu);
		break;
		default:
		printf("\n'%c' la phu am!",kyTu);	
	}
	return 0;}
}

	
