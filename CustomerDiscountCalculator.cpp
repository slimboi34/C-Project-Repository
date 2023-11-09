#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Define variables
    double base_charge, item_charge, discount_rate, purchase_amount, charge;
    int items;

    // Prompt user for input for customer 1
    cout << "Enter base charge for customer 1: $";
    cin >> base_charge;
    cout << "Enter item charge for customer 1: $";
    cin >> item_charge;
    cout << "Enter discount rate for customer 1: ";
    cin >> discount_rate;
    cout << "Enter number of items purchased for customer 1: ";
    cin >> items;
    cout << "Enter total purchase amount for customer 1: $";
    cin >> purchase_amount;

    // Calculate charge for customer 1
    charge = base_charge + items * item_charge;
    if (purchase_amount >= 500 && purchase_amount < 1000) {
        charge *= (1 - discount_rate);
    } else if (purchase_amount >= 1000) {
        charge *= (1 - 2 * discount_rate);
    }

    // Display result for customer 1
    cout << fixed << setprecision(2);
    cout << "Customer 1 charges: $" << charge << endl;

    // Prompt user for input for customer 2
    cout << "Enter base charge for customer 2: $";
    cin >> base_charge;
    cout << "Enter item charge for customer 2: $";
    cin >> item_charge;
    cout << "Enter discount rate for customer 2: ";
    cin >> discount_rate;
    cout << "Enter number of items purchased for customer 2: ";
    cin >> items;
    cout << "Enter total purchase amount for customer 2: $";
    cin >> purchase_amount;

    // Calculate charge for customer 2
    charge = base_charge + items * item_charge;
    if (purchase_amount >= 500 && purchase_amount < 1000) {
        charge *= (1 - discount_rate);
    } else if (purchase_amount >= 1000) {
        charge *= (1 - 2 * discount_rate);
    }

    // Display result for customer 2
    cout << fixed << setprecision(2);
    cout << "Customer 2 charges: $" << charge << endl;

    // Prompt user for input for customer 3
    cout << "Enter base charge for customer 3: $";
    cin >> base_charge;
    cout << "Enter item charge for customer 3: $";
    cin >> item_charge;
    cout << "Enter discount rate for customer 3: ";
    cin >> discount_rate;
    cout << "Enter number of items purchased for customer 3: ";
    cin >> items;
    cout << "Enter total purchase amount for customer 3: $";
    cin >> purchase_amount;

    // Calculate charge for customer 3
    charge = base_charge + items * item_charge;
    if (purchase_amount >= 500 && purchase_amount < 1000) {
        charge *= (1 - discount_rate);
    } else if (purchase_amount >= 1000) {
        charge *= (1 - 2 * discount_rate);
    }

    // Display result for customer 3
    cout << fixed << setprecision(2);
    cout << "Customer 3 charges: $" << charge << endl;

    return 0;
}
