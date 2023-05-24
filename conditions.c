#include <stdio.h>

int main() {
    // take input
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if((marks > 90) && (marks <= 100)) {
        char name[100];
        printf("The grade is Ex\n");
        printf("What's your name bro: ");
        scanf("%s", name);
        printf("Good Job %s\n", name);
    }
    else if((marks > 80) && (marks <= 90))
        printf("The grade is A\n");
    else if((marks > 70) && (marks <= 80))
        printf("The grade is B\n");
    else if((marks > 60) && (marks <= 70))
        printf("The grade is C\n");
    else if((marks > 50) && (marks <= 60))
        printf("The grade is D\n");
    else if((marks >=0) && (marks <= 50))
        printf("The grade is F\n");
    else printf("Marks entered are not valid\n");
}