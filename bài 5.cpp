#include<stdio.h>

int main(){
	int bang_cuu_chuong;
	for(int j=1;j<=9;j++){
		printf("bang cuu chuong: %d\n",j);
		for(int i=1;i<=10;i++){
		bang_cuu_chuong = j * i;
		printf("%d * %d = %d\n",j,i,bang_cuu_chuong);}
		}
	return 0;
}
