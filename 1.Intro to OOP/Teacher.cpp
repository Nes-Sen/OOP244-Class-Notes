#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Teacher {
    char m_subject[7]{};
    char m_name[41]{};
    int m_rating{};
    int m_grading{};

    void set(const char* subject, const char* name, int rating, int grading) {
        strcpy(m_subject, subject);
        strcpy(m_name, name);
        m_rating = rating;
        m_grading = grading;
    }

    void print() {
        cout << m_name << ": subject (" << m_subject << ")" << endl
            << "Rating: " << m_rating << endl
            << "Grading: " << m_grading << endl;
    }
};


int main() {
    cout << "Welcome the Object-Oriented Programming Course" << endl;
    Teacher T, U;
    T.set("OOP244", "Hingu", 6, 9);
    T.print();
    U.set("IPC144", "John Blue", 10, 6);
    U.print();
    return 0;
}