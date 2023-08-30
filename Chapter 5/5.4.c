#include <stdio.h>
int main() {
    int i;
    int marks[10]={95,85,20,65,32,40,55, 60, 89, 55};
    int marks_above_80 =0;
    int marks_above_60 =0;
    int marks_above_40 =0;
    int marks_40_or_below =0;
    int marks_81_to_100 =0;
    int marks_61_to_80 =0;
    int marks_41_to_60 =0;
    int marks_0_to_40 =0;

    for (i = 0;i<10;i++) {
        int mark = marks[i];
        marks_above_80 += (mark > 80);
        marks_above_60 += (mark > 60);
        marks_above_40 += (mark > 40);
        marks_40_or_below += (mark <= 40);
        marks_81_to_100 += (mark > 80 && mark <= 100);
        marks_61_to_80 += (mark > 60 && mark <= 80);
        marks_41_to_60 += (mark > 40 && mark <= 60);
        marks_0_to_40 += (mark >= 0 && mark <= 40);
    }

    printf("Number of students with marks above 80: %d\n",marks_above_80);
    printf("Number of students with marks above 60: %d\n",marks_above_60);
    printf("Number of students with marks above 40: %d\n",marks_above_40);
    printf("Number of students with marks 40 or below: %d\n",marks_40_or_below);
    printf("Number of students with marks in the range 81 to 100: %d\n",marks_81_to_100);
    printf("Number of students with marks in the range 61 to 80: %d\n",marks_61_to_80);
    printf("Number of students with marks in the range 41 to 60: %d\n",marks_41_to_60);
    printf("Number of students with marks in the range 0 to 40: %d\n",marks_0_to_40);


}



/*
#include <stdio.h>
int main() {
    int i;
    int marks[] = {55, 89, 78, 42, 95, 60, 32, 75, 85, 25};
    int marks_above_80 = 0;
    int marks_above_60 = 0;
    int marks_above_40 = 0;
    int marks_40_or_below = 0;
    int marks_81_to_100 = 0;
    int marks_61_to_80 = 0;
    int marks_41_to_60 = 0;
    int marks_0_to_40 = 0;

    for (i = 0;i < 10; i++) {
        int mark = marks[i];
        marks_above_80 += (mark > 80);
        marks_above_60 += (mark > 60);
        marks_above_40 += (mark > 40);
        marks_40_or_below += (mark <= 40);
        marks_81_to_100 += (mark > 80 && mark <= 100);
        marks_61_to_80 += (mark > 60 && mark <= 80);
        marks_41_to_60 += (mark > 40 && mark <= 60);
        marks_0_to_40 += (mark >= 0 && mark <= 40);
    }

    printf("Number of students with marks above 80: %d\n", marks_above_80);
    printf("Number of students with marks above 60: %d\n", marks_above_60);
    printf("Number of students with marks above 40: %d\n", marks_above_40);
    printf("Number of students with marks 40 or below: %d\n", marks_40_or_below);
    printf("Number of students with marks in the range 81 to 100: %d\n", marks_81_to_100);
    printf("Number of students with marks in the range 61 to 80: %d\n", marks_61_to_80);
    printf("Number of students with marks in the range 41 to 60: %d\n", marks_41_to_60);
    printf("Number of students with marks in the range 0 to 40: %d\n", marks_0_to_40);

    return 0;
}

*/
