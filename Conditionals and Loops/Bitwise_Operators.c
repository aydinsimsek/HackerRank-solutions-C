#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int S[n-1], and_result, or_result, xor_result;
    int max_and = 0, max_or = 0, max_xor = 0;
    for (int w = 0; w < n; w++){
        S[w] = w+1;
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            and_result = S[i] & S[j];
            or_result = S[i] | S[j];
            xor_result = S[i] ^ S[j];
            if (and_result > max_and && and_result < k){
                max_and = and_result;}
            if (or_result > max_or && or_result < k){
                max_or = or_result;}
            if (xor_result > max_xor && xor_result < k){
                max_xor = xor_result;}
        }
    }
    printf("%d \n", max_and);
    printf("%d \n", max_or);
    printf("%d", max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
