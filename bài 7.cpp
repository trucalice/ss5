#include<stdio.h>

int main(){
    int a,b,ucln;
    printf("nhap so nguyen 1: \n");
    scanf("%d",&a);
    printf("nhap so nguyen 2: \n");
    scanf("%d",&b);
    for (int i = 1;i <= a && i<=b;i++){
    	if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
	}
		
    if (a <= 0 || b <= 0) {
        printf("vui long nhap lai 2 so nguyen duong !\n");}
    printf("uoc chung lon nhat cua %d và %d là: %d\n", a,b, ucln);
	return 0;
	}

