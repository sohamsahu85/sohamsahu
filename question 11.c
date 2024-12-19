#include <stdio.h>
#include <string.h>

// Define the product structure
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;
    float totalValue = 0;

    // Get the number of products
    printf("Enter the number of products: ");
    scanf("%d", &n);

    // Declare an array of products
    struct Product products[n];

    // Variables to track highest quantity and highest price
    int maxQuantityIndex = 0, maxPriceIndex = 0;

    // Input product details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].id);
        printf("Product Name: ");
        scanf(" %[^\n]", products[i].name);  // To handle spaces in the name
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        printf("Price: ");
        scanf("%f", &products[i].price);

        // Update total inventory value
        totalValue += products[i].quantity * products[i].price;

        // Check for highest quantity
        if (products[i].quantity > products[maxQuantityIndex].quantity) {
            maxQuantityIndex = i;
        }

        // Check for highest price
        if (products[i].price > products[maxPriceIndex].price) {
            maxPriceIndex = i;
        }
    }

    // Display total inventory value
    printf("\nTotal Inventory Value: %.2f\n", totalValue);

    // Display product with highest quantity
    printf("\nProduct with the highest quantity:\n");
    printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
           products[maxQuantityIndex].id, products[maxQuantityIndex].name,
           products[maxQuantityIndex].quantity, products[maxQuantityIndex].price);

    // Display product with the highest price
    printf("\nProduct with the highest price:\n");
    printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
           products[maxPriceIndex].id, products[maxPriceIndex].name,
           products[maxPriceIndex].quantity, products[maxPriceIndex].price);

    return 0;
}
