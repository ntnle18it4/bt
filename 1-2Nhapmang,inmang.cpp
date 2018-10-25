#include<stdio.h>
#include<conio.h>
#include<math.h>
void NhapMang(int a[],int n) {
        int i;
         for(i=0; i<n; i++) {
            printf("Nhap a[%d]: ",i);
                scanf("%d",&a[i]);
            }
}

 

void XuatMang(int a[],int n) {
    printf("Cac phan tu co trong mang la:\n");
        int i;
            for(i=0; i<n; i++) {
            printf("a[%d] = %d\n",i,a[i]);
            }
}

int main() {
   int n;
    int a[n];
        do {
           printf("Nhap n: ");
            scanf("%d",&n);
            } while(n<2 || n>99);
            NhapMang(a, n);
            XuatMang(a, n);

}
