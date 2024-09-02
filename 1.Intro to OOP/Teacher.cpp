// Not object oriented teacher
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Teacher {
    char m_subject[7]{};
    char m_name[41]{};
    int m_rating{};
    int m_grading{};
};

//In setTeacher function, the -> operator is used to set the values of the Teacher struct that the pointer T references.
void setTeacher(Teacher* T, const char* subject, const char* name, int rating, int grading) {

    strcpy(T->m_subject, subject);
    strcpy(T->m_name, name);
    T->m_rating = rating;
    T->m_grading = grading;
}

// In this example, setTeacher takes a reference to a Teacher object (Teacher& T) instead of a pointer. This allows you to directly access the members of T using the dot operator (.) inside the function.
// Inside the setTeacher function, you can now access the structure members directly using T.m_subject, T.m_name, etc., because T is an actual object, not a pointer.

//void setTeacher(Teacher& T, const char* subject, const char* name, int rating, int grading){
//    strcpy(T.m_subject, subject);
//    strcpy(T.m_name, name);
//    T.m_rating = rating;
//    T.m_grading = grading;
//}

void printTeacher(const Teacher* T) {
    cout << T->m_name << ": subject (" << T->m_subject << ")" << endl
        << "Rating: " << T->m_rating << endl
        << "Grading: " << T->m_grading << endl;
}


int main() {

    cout << "Welcome the Object-Oriented Programming Course" << endl;
    Teacher T;
    setTeacher(&T, "OOP244", "Hingu", 6, 9);
    printTeacher(&T);
    return 0;
}