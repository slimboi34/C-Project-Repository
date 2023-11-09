#include <iostream>
#include <queue>
using namespace std;

class Concert {
private:
    queue<int> studentQueue;
    int maxSeats;
    int remainingSeats;

public:
    Concert(int maxSeats) : maxSeats(maxSeats), remainingSeats(maxSeats) {}

    void addStudent(int studentID) {
        if (isTheaterFull()) {
            cout << "The theater is full. Cannot add more students.\n";
            return;
        }
        studentQueue.push(studentID);
        remainingSeats--;
        cout << "Student " << studentID << " has been added to the queue.\n";
    }

    void removeStudent() {
        if (studentQueue.empty()) {
            cout << "The theater is empty. No students to remove.\n";
            return;
        }
        int removedStudent = studentQueue.front();
        studentQueue.pop();
        remainingSeats++;
        cout << "Student " << removedStudent << " has been removed from the queue.\n";
    }

    int getRemainingSeats() {
        return remainingSeats;
    }

    bool isTheaterFull() {
        return remainingSeats == 0;
    }
};

int main() {
    Concert concert(5); // Theater with 5 seats

    // Adding students
    concert.addStudent(101);
    concert.addStudent(102);
    concert.addStudent(103);

    // Checking remaining seats
    cout << "Remaining seats: " << concert.getRemainingSeats() << endl;

    // Removing a student
    concert.removeStudent();

    // Checking if the theater is full
    cout << "Is theater full? " << (concert.isTheaterFull() ? "Yes" : "No") << endl;

    return 0;
}

