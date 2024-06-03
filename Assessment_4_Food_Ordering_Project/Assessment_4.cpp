// Simple Food Ordering System

#include<iostream>
using namespace std;

class Customer {
    public:
        string customer_name;
    public:
        int get_customer() {
            cout << "Please Enter Customer Name: ";
            getline(cin, customer_name);
        }

        int display_customer() {
            cout << "\nHello, " << customer_name << ". Welcome to Tops Tech. Fast Food..!" << endl;
        }
};

class Order : public Customer {
    public:
    int menu_index;
    public:
    int customer_details() {
        get_customer();
        display_customer();
    }

    int get_order(){
        int choice, quantity, amount = 0, total_bill = 0;
        char order_choice[2];

        char pizzas[3][50] = { "Margherita Pizza", "Pepperoni Pizza", "BBQ Chicken Pizza" };
        int pizza_prize[3] = { 699, 849, 899 };

        char burgers[3][50] = { "Classic Cheese Burger", "Bacon Avocado Burger", "Mushroom Swiss Burger" };
        int burger_prize[3] = { 499, 649, 599 };

        char sandwiches[3][50] = { "Club Sandwich", "Grilled Cheese Sandwich", "BLT (Bacon, Lettuce, Tomato) Sandwich" };
        int sandwich_prize[3] = { 449, 399, 549 };

        char rolls[3][50] = { "Chicken Shawarma Roll", "Veggie Paneer Roll", "Egg Roll" };
        int roll_prize[3] = { 299, 249, 199 };

        char biryanis[3][50] = { "Chicken Biryani", "Vegetable Biryani", "Hyderabadi Dum Biryani" };
        int biryani_prize[3] = { 849, 699, 949 };

        do {

        cout << "\nWhat would you like to order..?" << endl;
        cout << "\n======================================== Menu ========================================" << endl;
        cout << "1) Pizzas" <<endl;
        cout << "2) Burgers" <<endl;
        cout << "3) Sandwiches" <<endl;
        cout << "4) Rolls" <<endl;
        cout << "5) Biryanis" <<endl;

        cout << "\nWhat would you like to order: ";
        cin >> menu_index;

        switch(menu_index) {
            case 1:

                cout << "\nYou selected Pizzas from Menu.\n" << endl;

                cout << "1. Margherita Pizza   - Rs. 699" << endl;
                cout << "2. Pepperoni Pizza    - Rs. 849" << endl;
                cout << "3. BBQ Chicken Pizza  - Rs. 899" << endl;

                cout << "\nPlease enter which Pizza you would like to have: ";
                cin >> choice;

                cout << "\nYou selected " << pizzas[choice - 1] << " from Pizzas." << endl;

                cout << "\nEnter Quantity: ";
                cin >> quantity;

                cout << "\n===================================== Your Order =====================================" << endl;
                cout << "\nYou selected " << quantity << " "<< pizzas[choice - 1] << "." << endl;

                amount = quantity * pizza_prize[choice - 1];

                total_bill += amount;
                
                cout << "\nYour total bill is " << total_bill << "."  << endl;
                break;

            case 2:

                cout << "\nYou selected Burgers from Menu.\n" << endl; 

                cout << "1. Classic Cheese Burger   - Rs. 499" << endl;
                cout << "2. Bacon Avocado Burger    - Rs. 649" << endl;
                cout << "3. Mushroom Swiss Burger   - Rs. 599" << endl;

                cout << "\nPlease enter which Burger you would like to have: ";
                cin >> choice;

                cout << "\nYou selected " << burgers[choice - 1] << " from Burgers." << endl;

                cout << "\nEnter Quantity: ";
                cin >> quantity;

                cout << "\n===================================== Your Order =====================================" << endl;
                cout << "\nYou selected " << quantity << " "<< burgers[choice - 1] << "."  << endl;

                amount = quantity * burger_prize[choice - 1];

                total_bill += amount;
                
                cout << "\nYour total bill is " << total_bill << "."  << endl;
                break;

            case 3:

                cout << "\nYou selected Sandwiches from Menu.\n" << endl; 

                cout << "1. Club Sandwich                          - Rs. 449" << endl;
                cout << "2. Grilled Cheese Sandwich                - Rs. 399" << endl;
                cout << "3. BLT (Bacon, Lettuce, Tomato) Sandwich  - Rs. 549" << endl;

                cout << "\nPlease enter which Sandwich you would like to have: ";
                cin >> choice;

                cout << "\nYou selected " << sandwiches[choice - 1] << " from Sandwiches." << endl;

                cout << "\nEnter Quantity: ";
                cin >> quantity;

                cout << "\n===================================== Your Order =====================================" << endl;
                cout << "\nYou selected " << quantity << " "<< sandwiches[choice - 1] << "."  << endl;

                amount = quantity * sandwich_prize[choice - 1];

                total_bill += amount;
                
                cout << "\nYour total bill is " << total_bill << "."  << endl;
                break;

            case 4:

                cout << "\nYou selected Rolls from Menu.\n" << endl; 

                cout << "1. Chicken Shawarma Roll   - Rs. 299" << endl;
                cout << "2. Veggie Paneer Roll      - Rs. 249" << endl;
                cout << "3. Egg Roll                - Rs. 199" << endl;

                cout << "\nPlease enter which Roll you would like to have: ";
                cin >> choice;

                cout << "\nYou selected " << rolls[choice - 1] << " from Rolls." << endl;

                cout << "\nEnter Quantity: ";
                cin >> quantity;

                cout << "\n===================================== Your Order =====================================" << endl;
                cout << "\nYou selected " << quantity << " "<< rolls[choice - 1] << "."  << endl;

                amount = quantity * roll_prize[choice - 1];

                total_bill += amount;
                
                cout << "\nYour total bill is " << total_bill << "."  << endl;
                break;

            case 5:

                cout << "\nYou selected Biryanis from Menu.\n" << endl;

                cout << "1. Chicken Biryani          - Rs. 849" << endl;
                cout << "2. Vegetable Biryani        - Rs. 699" << endl;
                cout << "3. Hyderabadi Dum Biryani   - Rs. 949" << endl;

                cout << "\nPlease enter which Biryani you would like to have: ";
                cin >> choice;

                cout << "\nYou selected " << biryanis[choice - 1] << " from Biryanis." << endl;

                cout << "\nEnter Quantity: ";
                cin >> quantity;

                cout << "\n===================================== Your Order =====================================" << endl;
                cout << "\nYou selected " << quantity << " "<< biryanis[choice - 1] << "."  << endl;

                amount = quantity * biryani_prize[choice - 1];

                total_bill += amount;
                
                cout << "\nYour total bill is " << total_bill << "."  << endl;
                break;

            default:
                cout << "Please enter a valid choice" << endl;
                break;
        }
        cout << "\nWould you like to order anything else ...? Yes (y) / No (n) ... : ";
        cin >> order_choice;

        } while(order_choice[0] == 'y');

        cout << "\nThank you " << customer_name << " for ordering food from Tops Tech. Fast Food..!" << endl;
        cout << "\nYour order will be delivered in 40 minutes" << endl;
    }
};

int main()
{
    cout << "\n============================ Simple Food Ordering System =============================" << endl;
    cout << "\n================================ Tops Tech. Fast Food ================================" << endl;

    Order order;
    order.customer_details();
    order.get_order();
    return 0;
}