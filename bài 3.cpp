#include<stdio.h>

int main(){
	int a,sum=0;
	printf("moi nhap a: ");
	scanf("%d",&a);
	for(int i;i<=a;i++){
		sum+=i;
	}
	printf("tong: %d\n",sum);
	return 0;
}
