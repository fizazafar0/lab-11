#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stock;
};
void displayProductDetails(struct Product p) {
    float discount = p.price * 0.05;
    float finalPrice = p.price - discount;
    printf("ID: %d\nName: %s\nCategory: %s\n", p.id, p.name, p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Price after 5%% Discount: %.2f\n", finalPrice);
    printf("Stock: %d\n", p.stock);
}

int main() {
    struct Product p1 = {101, "Laptop", "Electronics", 150000, 10};
    displayProductDetails(p1);
    return 0;
}