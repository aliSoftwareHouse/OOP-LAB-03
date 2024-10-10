#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int  age;
};

class Employee :public Person {
public:
    string salary;
};

class Doctor : public Employee {
public:
    int fees;
};

class Medicine {
public:
    string name;
    string expiry;
    int price;
};

class Treat_rec {
public:
    string ilness;
    Doctor doc;
    Medicine pres[3];
};

class Patient : public Person {
public:
    Treat_rec diagnosis;
};

class Admin {
public:
    void show_report(Patient pob) {
        cout << pob.name << endl;
        cout << pob.diagnosis.ilness << endl;
        cout << pob.diagnosis.pres[0].name << endl;
    }
};

int main()
{
    Patient pob;
    pob.name = "oop patient";

    Doctor doc;
    doc.name = "Sir Zubair";

    Medicine mob;
    mob.name = "Quiz";

    Treat_rec tob;
    tob.ilness = "Headache";
    tob.doc = doc;
    tob.pres[0] = mob;
    pob.diagnosis = tob;

    Admin admin;
    admin.show_report(pob);
    cout << "the programmiz";
    cout << endl;

}
