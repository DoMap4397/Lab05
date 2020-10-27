#include <stdio.h>

int main() {
    int x, y, z;
    printf("NHập giá trị số x=");
    scanf("%d", &x);
    printf("NHập giá trị số y=");
    scanf("%d", &y);
    printf("NHập giá trị số z=");
    scanf("%d", &z);
    if( x>y && x> z){
        printf("Giá trị lớn nhất là:%d\n", x);
    } else
        if(y>x && y>z){
            printf("Giá trị lớn nhất là:%d\n", y);
        } else
            if(z>x && z>y)
                printf("Giá trị lớn nhất là:%d\n3", z);
}
