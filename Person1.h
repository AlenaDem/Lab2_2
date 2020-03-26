#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    string surname;
    int year;

public:
    Person() : name("UnknownName"), surname("UnknownSurname"), year(0) {}
    void print();
    Person& operator= (const string &a);
    Person& operator= (const int &n);
    bool operator==(const Person &p);
    bool operator<(const Person &p);
    bool operator> (const Person &p);
    bool operator>=(const Person &p);
    bool operator<=(const Person &p);
    bool operator!=(const Person &p);
    friend ostream& operator<< (ostream& os, const Person &p);
    friend istream& operator>> (istream& in, Person &p);

};


#endif // PERSON_H_INCLUDED
