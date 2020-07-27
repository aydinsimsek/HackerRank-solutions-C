#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return (strcmp(a, b) > 0);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return (strcmp(a, b) < 0);
}

#define MAX_CHAR 26
int distinct(const char* a){
    int count = 0;
    int letter[MAX_CHAR] = {0};
    for(int i = 0; a[i] != '\0'; i++){
        letter[a[i] - 'a']++;
    }
    for (int i = 0; i < MAX_CHAR; i++)
        if (letter[i])
            count++;

    return count;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int dist = distinct(a) - distinct(b);
    if (dist > 0) {return 1;}
    else if (dist < 0) {return 0;}
    else {return lexicographic_sort(a ,b);}
}

int sort_by_length(const char* a, const char* b) {
    if (strlen(a) > strlen(b)) {return 1;}
    else if (strlen(a) < strlen(b)) {return 0;}
    else {return lexicographic_sort(a, b);}
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++){
            if (cmp_func(arr[i], arr[j])){
            char *temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
