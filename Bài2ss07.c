#include <stdio.h>

int main() {
    int a, b;
    printf("NHập giá trị số a=");
    scanf("%d", &a);
    printf("NHập giá trị số b=");
    scanf("%d", &b);
    if(a*b>1000){
        printf("Tích của hai số a và b =%d\n", a*b);
    }
    else{
        if(a*b==1000){
            printf("Tích của hai số a và b =1000\n");
        }
        else;
    }
}
