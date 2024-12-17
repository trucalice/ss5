#include <stdio.h>

int main() {
    int i = 23; 
    int a;           
    printf("nhap so nguyen (nhap 23 de ket thuc): ");
    scanf("%d",&a);
    do {
        printf("hay nhap lai: ");
        scanf("%d", &a);
    } while (a != i); 
    printf("Chuc mung! Ban da nhap dung so %d. Ket thuc chuong trinh.\n", i);
   return 0;
}
