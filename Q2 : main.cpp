#include <iostream>
#include "student.h"

int main() {
    int choice;
    do {
        std::cout << "\n1. Add | 2. Display | 3. Search | 4. Update | 5. Delete | 0. Exit\nChoice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
        }
    } while (choice != 0);
    return 0;
}
