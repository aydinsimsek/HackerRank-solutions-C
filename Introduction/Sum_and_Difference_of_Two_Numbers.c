#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float c, d;
    int sum_i, difference_i;
    float sum_f, difference_f;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum_i = a+b;
    difference_i = a-b;
    sum_f = c+d;
    difference_f = c-d;
    printf ("%d %d \n", sum_i, difference_i);
    printf("%.1f %.1f", sum_f, difference_f);
    return 0;
}
