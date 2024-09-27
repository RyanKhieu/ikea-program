#include <iostream>
using namespace std;
int itemChoice = 0;
int deskChoice = 0;
double deskTotalPrice = 0;
int curtainChoice = 0;
double curtainTotalPrice = 0;
bool run = true;

int main() {
    cout << "Hello, Welcome to IKEA Denville (Store No. 3008)!" << endl;
    while (run) {
        cout << "What would you like to buy today? Enter the number of your selection. To stop shopping, enter 0." << endl;
        cout << "1. Standing desks" << endl;
        cout << "2. Black Curtains" << endl;
        cout << "3. Tabletops" << endl;
        cout << "4. Table legs" << endl;
        cin >> itemChoice;
        switch (itemChoice) {
            case 0:
                run = false;
                break;
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

                break;
            case 2:
                cout << "What length do you want your curtains to be?" << endl;
                cout << "1. 45\", $19.99" << endl;
                cout << "2. 46\", $20.99" << endl;
                cout << "3. 47\", $21.99" << endl;
                cout << "4. 48\", $22.99" << endl;
                cout << "5. 49\", $23.99" << endl;
                cout << "6. 50\", $24.99" << endl;
                cout << "7. 51\", $25.99" << endl;
                cout << "8. 52\", $26.99" << endl;
                cout << "9. 53\", $27.99" << endl;
                cout << "10. 54\", $28.99" << endl;
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
                cout << "Tabletops are on sale for $50!" << endl;
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