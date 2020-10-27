#include <stdio.h>

int main() {
    int x, y;
    printf("NHập giá trị số x=");
    scanf("%d", &x);
    printf("NHập giá trị số y=");
    scanf("%d", &y);
    if( x<2000 && x>3000){
        printf("x=%d\n", x);
    }
    if(y<=500 && y>=100){
        printf("y=%d\n", y);
    }
}
