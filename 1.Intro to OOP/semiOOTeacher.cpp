#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Teacher {
private:
    char m_subject[7]{};
    char m_name[41]{};
    int m_rating{};
    int m_grading{};

public:
    void set(const char* subject, const char* name, int rating, int grading) {
        strcpy(m_subject, subject);
        strcpy(m_name, name);
        m_rating = rating;
        m_grading = grading;
    }

    void set(const char* subject) {
        strcpy(m_subject, subject);
    }

    void set() {
        char name[41]{}, sub[7]{};
        int rating{}, grading{};
        cout << "Name:\n> ";
        cin >> name;
        cout << "Subject:\n> ";
        cin >> sub;
        cout << "Rating:\n> ";
        cin >> rating;
        cout << "Grading:\n> ";
        cin >> grading;
        set(sub, name, rating, grading);
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
    U.set("IPC144", "John Blue", 10, 6);
    T.print();
    U.print();
    T.set("OOP324");
    T.print();
    U.set();
    U.print();
    return 0;
}