#include <iostream>
#include <vector>
#include "student.h"

std::vector<Student> database;

void addStudent() {
    Student s;
    std::cout << "Enter ID: "; std::cin >> s.id;
    std::cin.ignore();
    std::cout << "Enter Name: "; std::getline(std::cin, s.name);
    std::cout << "Enter Age: "; std::cin >> s.age;
    std::cout << "Enter Course: "; std::cin >> s.course;
    database.push_back(s);
    std::cout << "Student added successfully!\n";
}

void displayStudents() {
    for (const auto& s : database) {
        std::cout << "ID: " << s.id << " | Name: " << s.name 
                  << " | Age: " << s.age << " | Course: " << s.course << "\n";
    }
}

void searchStudent() {
    int id;
    std::cout << "Enter ID to search: "; std::cin >> id;
    for (const auto& s : database) {
        if (s.id == id) {
            std::cout << "Found: " << s.name << "\n";
            return;
        }
    }
    std::cout << "Student not found.\n";
}

void updateStudent() {
    int id;
    std::cout << "Enter ID to update: "; std::cin >> id;
    for (auto& s : database) {
        if (s.id == id) {
            std::cout << "Enter new Name: "; std::cin >> s.name;
            std::cout << "Updated!\n";
            return;
        }
    }
}

void deleteStudent() {
    int id;
    std::cout << "Enter ID to delete: "; std::cin >> id;
    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->id == id) {
            database.erase(it);
            std::cout << "Deleted!\n";
            return;
        }
    }
}
