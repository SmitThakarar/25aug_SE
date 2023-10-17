#include <stdio.h>

int main() 
{
    // Initialize prices
    int pizzaPrice = 180;
    int burgerPrice = 100;
    int dosaPrice = 120;
    int idliPrice = 50;

    int totalAmount = 0;

    char choice;
    do {
        printf("Menu:\n");
        printf("1. Pizza - Price: %drs/pcs\n", pizzaPrice);
        printf("2. Burger - Price: %drs/pcs\n", burgerPrice);
        printf("3. Dosa - Price: %drs/pcs\n", dosaPrice);
        printf("4. Idli - Price: %drs/pcs\n", idliPrice);

        int itemChoice, quantity;
        printf("Please Enter your choice: ");
        scanf("%d", &itemChoice);

        if (itemChoice == 1) {
            printf("You have selected Pizza.\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            totalAmount += (pizzaPrice * quantity);
        } else if (itemChoice == 2) {
            printf("You have selected Burger.\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            totalAmount += (burgerPrice * quantity);
        } else if (itemChoice == 3) {
            printf("You have selected Dosa.\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            totalAmount += (dosaPrice * quantity);
        } else if (itemChoice == 4) {
            printf("You have selected Idli.\n");
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            totalAmount += (idliPrice * quantity);
        } else {
            printf("Invalid choice.\n");
        }

        printf("Amount: %d\n", totalAmount);
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &choice);  // Note the space before %c to consume the newline character
    } while (choice == 'y' || choice == 'Y');

    printf("Total Amount is = %d\n", totalAmount);
    printf("Thank you for your order!\n");

    return 0;
}
