#include <iostream>
using namespace std;

int main() {
    int choice;
    float total = 0;
    do {
        cout << "University Canteen Menu\n";
        cout << "1. Tea = $1\n";
        cout << "2. Coffee = $2.00\n";
        cout << "3. Sandwich = $3.00\n";
        cout << "4. Pizza = $5.00\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (choice == 1) {
            total += 1;
            cout << "You chose Tea. Added $1 to your  bill.\n";
        } 
        else if (choice == 2) {
            total += 2;
            cout << "You chose Coffee. Added $2 to your  bill.\n";
        } 
        else if (choice == 3) {
            total += 3;
            cout << "You chose Sandwich. Added $3 to your  bill.\n";
        } 
        else if (choice == 4) {
            total += 5;
            cout << "You chose Pizza. Added $5 to your  bill.\n";
        } 
        else if (choice == 5) {
            cout << "no other order\n";
        } 
        else {
            cout << "Invalid choice. Please choose between 1 and 5.\n";
        }
    } while (choice != 5);
    cout << "Your total amount is = $" << total << "\n";
    cout << "Thank you for visiting \n";
    return 0;
}