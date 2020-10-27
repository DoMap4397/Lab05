#include <stdio.h>

int main() {
    int point;
    printf(" Bảng xếp loại học sinh\n Điểm của học sinh đó=");
    scanf("%d", &point);
    if(point>=75){
        printf("\n Học sinh loại A.\n");
    } else
        if(point>=60 && point<75){
            printf("\n Học sinh loại B,\n");
        } else
            if(point<60 && point>=45){
                printf("\n Học sinh loại C.\n");
            } else
                printf("\n Học sinh loại D.\n");
}
