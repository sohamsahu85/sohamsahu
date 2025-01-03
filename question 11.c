#include <stdio.h>
#include <string.h>


struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;
    float totalValue = 0;

   
    printf("Enter the number of products: ");
    scanf("%d", &n);


    struct Product products[n];

    
    int maxQuantityIndex = 0, maxPriceIndex = 0;

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].id);
        printf("Product Name: ");
        scanf(" %[^\n]", products[i].name);  
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        printf("Price: ");
        scanf("%f", &products[i].price);

      
        totalValue += products[i].quantity * products[i].price;

       
        if (products[i].quantity > products[maxQuantityIndex].quantity) {
            maxQuantityIndex = i;
        }

        
        if (products[i].price > products[maxPriceIndex].price) {
            maxPriceIndex = i;
        }
    }

 
    printf("\nTotal Inventory Value: %.2f\n", totalValue);

    
    printf("\nProduct with the highest quantity:\n");
    printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
           products[maxQuantityIndex].id, products[maxQuantityIndex].name,
           products[maxQuantityIndex].quantity, products[maxQuantityIndex].price);

  
    printf("\nProduct with the highest price:\n");
    printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
           products[maxPriceIndex].id, products[maxPriceIndex].name,
           products[maxPriceIndex].quantity, products[maxPriceIndex].price);

    return 0;
}
