#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[100];
    float cgpa;
};

int main() {
    struct student s1;
    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter full name: ");
    getchar();
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("Roll number: %d\n", s1.roll_no);
    printf("Name: %s", s1.name);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
