#include "Person1.h"

void Person::print() {
    cout << "Person(" << name << ", " << surname << ", " << year << ")\n";
}

Person& Person::operator=(const string &a) {
    name = a.substr(0, a.find(' '));
    surname = a.substr(a.find(' ')+1, a.length());
    return *this;
}

Person& Person::operator= (const int &n) {
    year = n;
    return *this;
}

bool Person::operator==(const Person &p) {
        return (name == p.name &&
            surname == p.surname &&
            year == p.year);
}

bool Person::operator!=(const Person &p) {
        return !(*this == p);
}

bool Person::operator<(const Person &p) {
        return (year < p.year);
}

bool Person::operator>(const Person &p) {
        return (year > p.year);
}

bool Person::operator>=(const Person &p) {
        return (year >= p.year);
}

bool Person::operator<=(const Person &p) {
        return (year <= p.year);
}

ostream& operator<< (ostream& os, const Person &p)
{
    os << "Person(" << p.name << ", " << p.surname << ", " << p.year << ")";
    return os;
}

istream& operator>> (istream& in, Person &p)
{
    in >> p.name;
    in >> p.surname;
    in >> p.year;
    return in;
}

