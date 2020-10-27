#include <stdio.h>

int main() {
    int mucluong;
    char loại;
    printf("Bảng đánh giá xếp loại nhân viên tương ứng với mức trợ cấp của công ty Montek:\n A. Loại A: Trợ cấp 300.\n B. Loại B: Trợ cấp 250.\n C. Các loại khác: Trợ cấp 100.\n");
    printf("Nhập mức lương của nhân viên:");
    scanf("%d", &mucluong);
    scanf("%c", &loại);
    switch (loại) {
        case 'A':
            printf("Tổng lương cuối tháng của nhân viên đó là:%d\n", mucluong+300);
        break;
        case 'B':
            printf("Tổng lương cuối tháng của nhân viên đó là:%d\n", mucluong+250);
            break;
        case 'C':
            printf("Tổng lương cuối tháng của nhân viên đó là:%d\n", mucluong+100);
            break;
        default:
            break;
    }
}
