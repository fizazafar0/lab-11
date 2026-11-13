#include <stdio.h>


struct Address {
    char city[30];
    int zipCode;
    char state[30];
};


struct Student {
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAddress;
};

int main() {
    struct Student student1 = {48, "Fiza Zafar", 3.8, {"Karachi", 74800, "Sindh"}};

    printf("Roll No: %d\nName: %s\nCGPA: %.2f\n", student1.rollNo, student1.name, student1.cgpa);
    
    printf("City: %s\nZip: %d\nState: %s\n", student1.studentAddress.city, student1.studentAddress.zipCode, student1.studentAddress.state);
    return 0;
}