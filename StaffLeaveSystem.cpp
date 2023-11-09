#include <iostream>
#include <list>
using namespace std;

struct Leave {
    int day;
    Leave* next;
};

void displayMenu() {
    cout << "Staff Leave System for Richfield\n";
    cout << "1. Select a single day leave\n";
    cout << "2. Select multiple day leaves\n";
    cout << "3. Quit\n";
    cout << "Enter your choice: ";
}

void displayLeaves(Leave* head) {
    Leave* temp = head;
    cout << "Selected leave days: ";
    while (temp != nullptr) {
        cout << temp->day << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Leave* head = nullptr;
    Leave* tail = nullptr;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            int day;
            cout << "Enter the day for leave: ";
            cin >> day;

            Leave* newLeave = new Leave();
            newLeave->day = day;
            newLeave->next = nullptr;

            if (head == nullptr) {
                head = newLeave;
                tail = newLeave;
            } else {
                tail->next = newLeave;
                tail = newLeave;
            }

            displayLeaves(head);
        } else if (choice == 2) {
            int startDay, endDay;
            cout << "Enter the start day: ";
            cin >> startDay;
            cout << "Enter the end day: ";
            cin >> endDay;

            for (int i = startDay; i <= endDay; ++i) {
                Leave* newLeave = new Leave();
                newLeave->day = i;
                newLeave->next = nullptr;

                if (head == nullptr) {
                    head = newLeave;
                    tail = newLeave;
                } else {
                    tail->next = newLeave;
                    tail = newLeave;
                }
            }

            displayLeaves(head);
        } else if (choice == 3) {
            cout << "Exiting the program.\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    // Free the allocated memory
    while (head != nullptr) {
        Leave* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

