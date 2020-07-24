#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float area(triangle t){
    float p = (float) (t.a + t.b + t.c) / (float) 2;
    return (sqrt(p * (p - t.a) * (p - t.b) * (p - t.c)));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for (int j = 0; j < n - 1; j++){
        for (int w = j + 1; w < n; w++){
            if (area(tr[j]) > area(tr[w])){
                triangle a = tr[j];
                tr[j] = tr[w];
                tr[w] = a;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
