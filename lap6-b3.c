#include<stdio.h>
int main(){
	int a[10],min,max,i,dem1=0,dem2=0,tong=0;
	printf("Mang intArr: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max){max=a[i];
		}
		if(a[i]<min){min=a[i];
		}
		}
		for(i=0;i<10;i++){
			if(a[i]==max){dem1++;
			}
			if(a[i]==min){dem2++;
			}
		}
			printf("Max la %d,xuat hien %d lan",max,dem1);
		printf("\nMin la %d,xuat hien %d lan",min,dem2);
		for(i=0;i<10;i++){
			tong+=a[i];	
		}
		printf("\nTong = %d",tong);
		printf("\nTrung binh cong= %.2f",(float)tong/10);
}
