#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    do {
        printf("\n--------------- SMART HOSPITAL SYSTEM --------------\n");
        printf("   1. Register New Patient\n");
        printf("   2. Display Bed Occupancy\n");
        printf("   3. Display Patients by Priority (Triage)\n");
        printf("   4. Generate Summary Report\n");
        printf("   5. Save & Exit\n");
        printf("------------------------------------------------------\n");
        printf("  Enter your choice: ");
        printf("\n------------------------------------------------------\n");
        scanf("%d", &choice);
    }
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                registerPatient();
                break;
            case 2:
                printf("Display bed occupancy pending implementation.\n");
                break;
            case 3:
                printf("Triage display pending implementation.\n");
                break;
            case 4:
                printf("Summary report pending implementation.\n");
                break;
            case 5:
                printf("Saving state and exiting system...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    while (choice != 5);
    return 0;
}
