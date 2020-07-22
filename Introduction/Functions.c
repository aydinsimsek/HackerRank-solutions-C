#include <stdio.h>

int max_of_four(int x, int y, int z, int w);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

int max_of_four(int x, int y, int z, int w){
    int greatest;
    if (x >= y && x >= z && x >= w) {greatest = x;}
    else if (x < y && y >= z && y >= w) {greatest = y;}
    else if (x < y && y < z && z >= w) {greatest = z;}
    else if (x < y && y < z && z < w) {greatest = w;}
    return greatest;
}
