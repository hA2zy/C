#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
    int i, j, num, array[10][10] = { 0 };

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 0; j <= i; j++) {
            if (i == 0 || j == 0) {
                array[i][j] = 1;
            }
            else {
                array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
            }
        }
    }

    if (i == j || j == 0) {
        array[i][j] = 1;
    }
    else {
        array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
    }

    for (i = num - 1; i >= 0; i--) {
        for (j = 0; j < num; j++) {
            if (array[i][j] != 0) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}