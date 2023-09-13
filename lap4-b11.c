#include<stdio.h>

int main(){
	double num1,num2;
	char c;
	printf("Nhap so thu nhat:");
	scanf("%f",&num1);
    printf("Nhap so thu hai:");
	scanf("%f",&num2);
	printf("       MENU");
	printf("\n==================");
	printf("\n+\n-\nx\n:");
	printf("\n==================");

	printf("\nChon: ");
	
	scanf("%c",&c );

	switch(c)
	{
		case '+':
			printf("\nTong: %f + %f = %f",num1,num2,num1+num2);
			break;
		case '-':
				printf("\nHieu: %f - %f = %f",num1,num2,num1-num2);
				break;
		case 'x':
				printf("\nTich: %f x %f = %f",num1,num2,num1*num2);
			break;
		case ':':
		if(num2 == 0){
            printf("Khong the chia cho 0!");
        }else{
				printf("\nThuong: %f : %f = %f",num1,num2,num1/num2);
	   }
		    break;
	    default:
	        	printf("\nKhong hop le!");
	}
	
}
