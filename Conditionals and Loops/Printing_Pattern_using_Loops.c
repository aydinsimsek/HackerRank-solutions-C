#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int size = (2 * n) - 1;
    int a[size][size];
    int begin = 0, end = size - 1;
    int i, j;

    while (n >= 1 && n <= 1000) {
        for (i = begin; i <= end; i++){
            for (j = begin; j <= end; j++){
                if (i == begin || i == end || j == begin || j == end){
                    a[i][j] = n;
                    }
            }
        }
        begin++;
        end--;
        n--;
    }
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            printf("%d ", a[i][j]);
            }
        printf("\n");
    }
    return 0;
}
