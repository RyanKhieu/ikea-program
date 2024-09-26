#include <iostream>
using namespace std;
int itemChoice = 0;
bool run = true;

int main() {
    cout << "Hello, Welcome to IKEA Denville!" << endl;
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

                break;
            case 2:
                cout << "Black curtains are on sale for $20!" << endl;
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