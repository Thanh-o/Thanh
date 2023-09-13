#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float f = M_PI;
printf("So pi: %f\n", f);
int h,r;
printf("chieu cao height: ");
scanf("%d",&h);
printf("ban kinh day radius: ");
scanf("%d",&r);
printf("dien tich day aera = %.3f",f*r*r);
printf("\nthe tich hinh tru volume = %.3f",f*r*r*h);

return 0;
}
