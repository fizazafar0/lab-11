#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item warehouse[5];
    float totalValue = 0;

    
    for (int i = 0; i < 5; i++) {
        printf("Enter ID, Name, Quantity, UnitPrice for Item %d: ", i + 1);
        scanf("%d %s %d %f", &warehouse[i].id, warehouse[i].name, &warehouse[i].quantity, &warehouse[i].unitPrice);
        totalValue = totalValue + (warehouse[i].quantity * warehouse[i].unitPrice);
    }

    printf("\nTotal Inventory Value: %.2f\n", totalValue);

    
    int searchID, found = 0;
    printf("Enter Item ID to Search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 5; i++) {
        if (warehouse[i].id == searchID) {
            printf("Found: %s | Qty: %d | Price: %.2f\n", warehouse[i].name, warehouse[i].quantity, warehouse[i].unitPrice);
            found = 1;
            break;
        }
    }
    if (!found) printf("Item Not Found!\n");
    return 0;
}