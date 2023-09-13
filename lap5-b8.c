#include<stdio.h>
int main(){
	int N,i,a[10],max,min;
	printf("So luong nhap vao: ");
	scanf("%d",&N);
	printf("Nhap: ");
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<N;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("max: %d\n",max);
	printf("min: %d",min);
	return 0;
}

