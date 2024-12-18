#include <stdio.h>


int main() {
    int n=0,a,b;
	printf("nhap vao 2 so bat ki: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf(" CALCULATOR\n");
	printf("\n");
	printf("1. tong 2 so\n");
	printf("2. hieu 2 so\n");
	printf("3. tich 2 so\n");
	printf("4. thuong 2 so\n");
	printf("5. thoat\n");
	printf("lua chon cua ban: ");
	scanf("%d",&n);
while(n<1 || n>5) {
	printf("moi nhap lai lua chon tu 1 - 5: ");
	scanf("%d",&n);
}

switch (n) {
	case 1: 
			printf("%d + %d = %d",a+b);
		break;
	case 2:
			printf("%d - %d = %d",a-b);
		break;
	case 3:
			printf("%d * %d = %d",a*b);
		break;
	case 4:
			printf("%d / %d = %.2f",(float)a/b);
		break;
	case 5:
		break;
}
	return 0;
}
