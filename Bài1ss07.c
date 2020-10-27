#include <stdio.h>

int main() {
    int a, b;
    printf("NHập giá trị số a=");
    scanf("%d", &a);
    printf("NHập giá trị số b=");
    scanf("%d", &b);
    if( a%b==0){
        printf("a là số chia hết cho b và cho kết qủa=%d\n", a%b);
    } else
        printf("a không phải số chia hết cho b\n");
}
