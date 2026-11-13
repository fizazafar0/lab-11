#include <stdio.h>

struct HospitalRecord {
    int recordID;
    
    struct PatientInfo {
        char name[50];
        int age;
        char disease[50];
    } patient;
    int roomNo;
};

int main() {
    struct HospitalRecord rec = {1, {"Ahmed", 25, "Fever"}, 204};
    struct HospitalRecord *ptr = &rec; // Pointer

    // Arrow + Dot dono ka use
    printf("Record ID: %d\n", ptr->recordID);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Age: %d\n", ptr->patient.age);
    printf("Disease: %s\n", ptr->patient.disease);
    printf("Room No: %d\n", ptr->roomNo);
    return 0;
}