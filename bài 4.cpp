#include<stdio.h>

int main(){
	int a,bang_cuu_chuong;
	printf("bang cuu chuong a: ");
	scanf("%d",&a);
	for(int i=1;i<=10;i++){
		bang_cuu_chuong=i*a;
		printf("%d * %d = %d\n",a,i,bang_cuu_chuong);
	}
	return 0;
}
