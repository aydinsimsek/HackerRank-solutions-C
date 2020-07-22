#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int result;
    int S[20];
    S[0] = a;
    S[1] = b;
    S[2] = c;
    for (int i = 3; i < 20; i++){
        S[i] = S[i-1] + S[i-2] + S[i-3];
    }
    result = S[n-1];
    return result;
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
