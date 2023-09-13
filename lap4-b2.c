#include<stdio.h>
int main(){
	char kyTu;
	printf("Nhap vao mot ky tu: ");
	scanf("%c",&kyTu);
	if(kyTu >= 'a' && kyTu <= 'z') {
		printf("Ky tu %c la chu thuong!",kyTu);
	}
	else if(kyTu >= 'A' && kyTu <= 'Z'){
		printf("Ky tu %c la chu hoa!",kyTu);
	}
	else if(kyTu >= '1' && kyTu <= '9'){
		printf("Ky tu %c la chu so!",kyTu);
	}
	else{
		printf("Ky tu %c khong nam trong bang Alphabet(A-Z, a-z) va khong phai chu so(0-9)",kyTu);
	}
	return 0;
}
	
