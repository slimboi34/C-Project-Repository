#include <iostream>
using namespace std;

struct Student {
    string qualification;
    int frequency;
    Student* next;
};

class Stack {
private:
    Student* top;
    int count;

public:
    Stack() : top(nullptr), count(0) {}

    void push(string qualification, int frequency) {
        Student* newStudent = new Student();
        newStudent->qualification = qualification;
        newStudent->frequency = frequency;
        newStudent->next = top;
        top = newStudent;
        count++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Student* temp = top;
        top = top->next;
        delete temp;
        count--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top of stack: " << top->qualification << ", " << top->frequency << endl;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int size() {
        return count;
    }
};

int main() {
    Stack attendanceStack;

    // Adding students
    attendanceStack.push("Engineering", 100);
    attendanceStack.push("Computer Science", 120);
    attendanceStack.push("Business", 90);

    // Displaying the top of the stack
    attendanceStack.peek();

    // Removing a student (dropout)
    attendanceStack.pop();

    // Displaying the new top of the stack
    attendanceStack.peek();

    // Checking if the stack is empty
    cout << "Is stack empty? " << (attendanceStack.isEmpty() ? "Yes" : "No") << endl;

    // Checking the size of the stack
    cout << "Size of stack: " << attendanceStack.size() << endl;

    return 0;
}

