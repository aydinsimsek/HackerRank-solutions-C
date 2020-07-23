#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = (n/10000) % 10;
    int second = (n/1000) % 10;
    int third = (n/100) % 10;
    int fourth = (n/10) % 10;
    int last = n % 10;
    printf("%d", first+second+third+fourth+last);
    return 0;
}
