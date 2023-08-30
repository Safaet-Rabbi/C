#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    // Initialize a 2D array to store the marks of each student
    int marks[n][m];

    // Read the marks of each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d:\n", i+1);
        for (int j = 0; j < m; j++) {
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Compute the total marks obtained by each student
    int total_marks[n];
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += marks[i][j];
        }
        total_marks[i] = total;
    }

    // Print the total marks obtained by each student
    for (int i = 0; i < n; i++) {
        printf("Total marks obtained by student %d: %d\n", i+1, total_marks[i]);
    }

    return 0;
}
