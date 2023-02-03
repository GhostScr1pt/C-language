#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void) {
    int num_subjects, grade, num_90_and_up = 0, num_80_to_89 = 0, num_75_to_79 = 0, num_failing = 0;
    float total_grade = 0;
   float avg_grade=0;
   system("cls");
    // Accept the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);
     printf("\n===============================\n");
    printf("        STUDENT GRADES\n");
    printf("===============================\n");
    // Accept the grades of each subject
    for (int i = 1; i <=num_subjects; i++) { 
        printf("Grade for subject #%d: ", i);
        scanf("%d", &grade);
 
        // Update the total grade and count variables based on the grade
        total_grade += grade;
        if (grade >= 90) {
            num_90_and_up++;
        } else if (grade >= 80) {
            num_80_to_89++;
        } else if (grade >= 75) {
            num_75_to_79++;
        } else {
            num_failing++;
        }
    }

    // Calculate and display the average grade
    avg_grade = total_grade / num_subjects;
     printf("\n===============================\n");
    printf("Average grade: %.2f\n", avg_grade);
    printf("===============================\n");
    
    // Display the number of subjects in each grade range
    printf("\n===============================\n");
     printf("   NUMBER OF GRADE LOOPS\n");
     printf("===============================\n");
    printf("\nNumber of subjects with grade 90 and up : %d\n", num_90_and_up);
    printf("Number of subjects with grade 80 to 89  : %d\n", num_80_to_89);
    printf("Number of subjects with grade 75 to 79  : %d\n", num_75_to_79);
    printf("Number of failing subjects              : %d\n", num_failing);
    return 0;
}
