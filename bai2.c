#include <stdio.h>
//int bai2()
int main()
{
    int so[10];

    printf("Nhap vao 10 so:\n");
    printf("==============\n");
    for (int i = 0; i < 10; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &so[i]);
    }

    printf("Output: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d", so[i]);
        if (i != 0) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}