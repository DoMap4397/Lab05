#include <stdio.h>

int main() {
    int a, b;
    printf("NHập giá trị số a=");
    scanf("%d", &a);
    printf("NHập giá trị số b=");
    scanf("%d", &b);
    if( a-b==a || a-b==b ){
        if(a-b==a){
            printf("Hiệu bằng giá trị %d\n", a);
        }else
            printf("Hiệu bằng giá trị %d\n", b);
    }
    else
        printf("Hiệu không bằng bất kì giá trị nào đã được nhập.\n");
}
