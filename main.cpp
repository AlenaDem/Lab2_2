#include "Person1.h"

int main() {
    Person human;
    Person men;
    cout << "Default constructor:\n";
    human.print();

    cout << "\nOperator overloading human==men:\n" << (human == men);
    cout << "\nOperator overloading human!=men:\n" << (human != men) << "\n\nAfter change object men:\n";

    men = "Menname Mensurname";
    men = 90;
    cout << "men: ";
    men.print();
    cout << "\nOperator overloading human==men:\n" << (human == men);
    cout << "\nOperator overloading human!=men:\n" << (human != men) << endl;

    cout << "\nOperator overloading =:\nhuman: ";
    human = "Name Surname";
    human = 77;
    human.print();

    cout << "\nOperator overloading human<men (for year):\n" << (human < men) << endl;
    cout << "\nOperator overloading human>men (for year):\n" << (human > men) << endl;
    cout << "\nOperator overloading human<=men (for year):\n" << (human <= men) << endl;
    cout << "\nOperator overloading human>=men (for year):\n" << (human >= men) << endl;

    cout << "\nOperator overloading <<:\n" << human << endl;
    cout << "\nOperator overloading >>(input name, surname, year):" << endl;
    cin >> human;
    cout << human;
    return 0;
}
