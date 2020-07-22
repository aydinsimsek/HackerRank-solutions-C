#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
  int i, total=0;
  for (i=0; (2*i)<number_of_students; i++){
  if (gender == 'g' && number_of_students > 1){
      total += *(marks + (2*i) + 1);}
  else if (gender == 'b'){
      total += *(marks + (2*i));}
  }
  return total;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
