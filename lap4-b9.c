#include<stdio.h>
int main(){
	int i,j,temp,a[3];
	printf("Nhap vao 3 so : ");
	for(i=0;i<3;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<3-1;i++){
		for(j=0;j<3-i-1; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
}
}
}
printf("\nThu tu tang dan: ");
for(i=0; i<3; i++){
		printf("\n%d",a[i]);
}
return 0;
}
