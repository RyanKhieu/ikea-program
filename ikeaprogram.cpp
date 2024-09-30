#include <iostream>
using namespace std;
int itemChoice = 0;
int deskChoice = 0;
double deskTotalPrice = 0;
int curtainChoice = 0;
double curtainTotalPrice = 0;
int tableChoice = 0;
double tableTotalPrice = 0;

int main() {
    cout << "Hello, Welcome to IKEA Denville (Store No. 3008)!" << endl;
    while (true) {
        cout << "What would you like to buy today? Enter the number of your selection. To stop shopping, enter 0." << endl;
        cout << "1. Standing desks" << endl;
        cout << "2. Black Curtains" << endl;
        cout << "3. Tabletops" << endl;
        cout << "4. Table legs" << endl;
        cin >> itemChoice;
        switch (itemChoice) {
            case 0:
                cout << "Thank you for shopping at IKEA Denville! Your total is $" << deskTotalPrice + curtainTotalPrice + tableTotalPrice << endl;
                return 0; // Exit the program
            case 1:
                cout << "What size do you want your desk to be?" << endl;
                cout << "1. Small, $309.99" << endl;
                cout << "2. Medium, $339.99" << endl;
                cout << "3. Large, $369.99" << endl;
                cin >> deskChoice;
                switch (deskChoice) {
                    case 1:
                        deskTotalPrice += 309.99;
                        break;
                    case 2:
                        deskTotalPrice += 339.99;
                        break;
                    case 3:
                        deskTotalPrice += 369.99;
                        break;
                    default:
                        cout << "Invalid selection. Please try again." << endl;
                        break;
                }

2
                break;
            case 2:
                cout << "What length do you want your curtains to be?" << endl;
                for (int i = 1; i <= 9; i++) {
                cout << i << ". " << (44 + i) << "\", $" << (18.99 + i) << endl;
                }
                cout << "What length do you want your curtains to be?" << endl;
                cin >> curtainChoice;
                switch (curtainChoice) {
                    case 1:
                        curtainTotalPrice += 19.99;
                        break;
                    case 2:
                        curtainTotalPrice += 20.99;
                        break;
                    case 3:
                        curtainTotalPrice += 21.99;
                        break;
                    case 4:
                        curtainTotalPrice += 22.99;
                        break;
                    case 5:
                        curtainTotalPrice += 23.99;
                        break;
                    case 6:
                        curtainTotalPrice += 24.99;
                        break;
                    case 7:
                        curtainTotalPrice += 25.99;
                        break;
                    case 8:
                        curtainTotalPrice += 26.99;
                        break;
                    case 9:
                        curtainTotalPrice += 27.99;
                        break;
                    case 10:
                        curtainTotalPrice += 28.99;
                        break;
                    default:
                        cout << "Invalid selection. Please try again." << endl;
                        break;
                }

                break;
            case 3:
                cout << "What tabletop do you want?" << endl;
                cout << "1. Wooden" << endl;
                cout << "2. Marble" << endl;
                cout << "3. Granite" << endl;
                switch (tableChoice) {
                    case 1:
                        curtainTotalPrice += 29.99;
                        break;
                    case 2:
                        cur

                }
                break;
            case 4:
                cout << "Table legs are on sale for $30!" << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
                break;
        }
    }
}