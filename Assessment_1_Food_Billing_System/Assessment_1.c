// Food Billing System

#include <stdio.h>

int main () {

    int food_choice, food_quantity, amount, total_amount = 0;
    char choice[2];

    do {

        // Available Food Items
        printf("\n* * * * * Available Food Items * * * * *\n");
        printf("* * 1. Pizza ====> Price = 180rs/pcs * * *\n");
        printf("* * 2. Burger ===> Price = 100rs/pcs * * *\n");
        printf("* * 3. Dosa =====> Price = 120rs/pcs * * *\n");
        printf("* * 4. Idli =====> Price =  50rs/pcs * * *\n");

        printf("\nPlease Enter your choice of food: ");
        scanf("%d", &food_choice);

        switch (food_choice) {
            case 1:
                printf("\nYou have selected Pizza...");
                printf("\n\nEnter Quantity of Pizza: ");
                scanf("%d", &food_quantity);
                amount = food_quantity * 180;
                printf("Amount : %d", amount);
                total_amount += amount;
                printf("\nTotal Amount : %d", total_amount);
                break;
            case 2:
                printf("\nYou have selected Burger...");
                printf("\n\nEnter Quantity of Burger: ");
                scanf("%d", &food_quantity);
                amount = food_quantity * 100;
                printf("Amount : %d", amount);
                total_amount += amount;
                printf("\nTotal Amount : %d", total_amount);
                break;
            case 3:
                printf("\nYou have selected Dosa...");
                printf("\n\nEnter Quantity of Dosa: ");
                scanf("%d", &food_quantity);
                amount = food_quantity * 120;
                printf("Amount : %d", amount);
                total_amount += amount;
                printf("\nTotal Amount : %d", total_amount);
                break;
            case 4:
                printf("\nYou have selected Idli...");
                printf("\n\nEnter Quantity of Idli: ");
                scanf("%d", &food_quantity);
                amount = food_quantity * 50;
                printf("Amount : %d", amount);
                total_amount += amount;
                printf("\nTotal Amount : %d", total_amount);
                break;
            default:
                printf("\nEnter valid food choice...!");
        }

        printf("\nDo you want to place more items ...? Yes (y) / No (n) ... : ");
        scanf(" %c", choice);
    } while(choice[0] == 'y');

    return 0;
}
