/**
* Name: Neil Kumaran & Ryan Khieu
* Program Name: IKEA Program
* Date: 9/30/2024
* Extra: Switch cases instead of if statements and for loop for curtain length
*/

#include <iostream>
#include <cstdio>
using namespace std;
int itemsOrdered = 0;
int itemChoice = 0;
int deskChoice = 0;
double deskTotalPrice = 0;
int curtainChoice = 0;
double curtainTotalPrice = 0;
int tableChoice = 0;
double tableTotalPrice = 0;
int legChoice = 0;
double legTotalPrice = 0;
bool running = true;

int main() {
    cout << "Hello, Welcome to IKEA Denville (Store No. 3008)!" << endl; // Welcome message
    while (running) {
        cout << "What would you like to buy today? Enter the number of your selection. To stop shopping, enter 0." << endl; // Menu
        cout << "1. Standing desks" << endl;
        cout << "2. Blackout Curtains" << endl;
        cout << "3. Tabletops" << endl;
        cout << "4. Table legs" << endl;
        cin >> itemChoice;
        switch (itemChoice) { // Switch case for menu
        case 0: { // Ending the shopping
            running = false;
            break; 
          }
            case 1: // Standing desks
                cout << "What size do you want your desk to be?" << endl;
                cout << "1. Small, $309.99" << endl;
                cout << "2. Medium, $339.99" << endl;
                cout << "3. Large, $369.99" << endl;
                cin >> deskChoice;
                switch (deskChoice) { // Switch case for desk size
                    case 1:
                        deskTotalPrice += 309.99;
                        itemsOrdered++;
                        break;
                    case 2:
                        deskTotalPrice += 339.99;
                        itemsOrdered++;
                        break;
                    case 3:
                        deskTotalPrice += 369.99;
                        itemsOrdered++;
                        break;
                    default:
                        cout << "Invalid selection. Please try again." << endl;
                        break;
                }
                break;
            case 2: // Blackout curtains
                cout << "What length do you want your curtains to be?" << endl;
                for (int i = 1; i <= 10; i++) { // For loop for curtain length
                    cout << i << ". " << (44 + i) << "\", $" << (18.99 + i) << endl;
                }
                cin >> curtainChoice;
                if (curtainChoice >= 1 && curtainChoice <= 10) {
                    curtainTotalPrice += 18.99 + curtainChoice; // The price starts from 19.99 (18.99 + 1)
                    itemsOrdered++;
                } else {
                    cout << "Invalid selection. Please try again." << endl;
                }

                break;
            case 3: // Tabletops
                cout << "What tabletop do you want?" << endl;
                cout << "1. Wooden, $29.99" << endl;
                cout << "2. Marble, $79.99" << endl;
                cout << "3. Granite, $99.99" << endl;
                cin >> tableChoice;
                switch (tableChoice) { // Switch case for tabletop
                    case 1:
                        tableTotalPrice += 29.99;
                        itemsOrdered++;
                        break;
                    case 2:
                        tableTotalPrice += 79.99;
                        itemsOrdered++;
                        break;
                    case 3:
                        tableTotalPrice += 99.99;
                        itemsOrdered++;
                        break;
                    default:    
                        cout << "Invalid selection. Please try again." << endl;
                        break;
                }
                break;
            case 4: // Table legs
                cout << "What color table leg do you want?" << endl;
                cout << "1. Black, $29.99" << endl;
                cout << "2. White, $29.99" << endl;
                cout << "3. Silver, $29.99" << endl;
                cin >> legChoice;
                switch (legChoice) { // Switch case for table leg color
                    case 1:
                        legTotalPrice += 29.99;
                        itemsOrdered++;
                        break;
                    case 2:
                        legTotalPrice += 29.99;
                        itemsOrdered++;
                        break;
                    case 3:
                        legTotalPrice += 29.99;
                        itemsOrdered++;
                        break;
                    default:
                        cout << "Invalid selection. Please try again." << endl;
                        break;
                }
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
                break;
            
        }
    }
    double subtotal = deskTotalPrice + curtainTotalPrice + tableTotalPrice + legTotalPrice;
    double tax = subtotal * 0.06625;
    double total = subtotal * 1.06625;
    cout << "Thank you for shopping at IKEA Denville! You ordered " << itemsOrdered << " items for a subtotal of $" << subtotal << endl;
    printf("NJ Sales Tax (6.625%%): $%.2f\n", tax);
    printf("Total: $%.2f\n", total);
    cout << "Have a great day!" << endl;
    system("pause");
}