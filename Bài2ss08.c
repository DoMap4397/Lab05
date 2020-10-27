#include <stdio.h>

int main() {
    char character;
    scanf("%c",&character);
    switch (character) {
        case 'A':  case 'a':
            printf("Ada\n");
            break;
        case 'B':  case 'b':
            printf("Basic\n");
            break;
        case 'C':  case 'c':
            printf("COBOL\n");
            break;
        case 'D':  case 'd':
            printf("dBASEIII\n");
            break;
        case 'F':  case 'f':
            printf("Fortran\n");
            break;
        case 'P':  case 'p':
            printf("Pascal\n");
            break;
        case 'V':  case 'v':
            printf("VisualC++\n");
        default:
            break;
    }
}
