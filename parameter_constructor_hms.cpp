#include <iostream>
using namespace std;

class Person {
public:
	Person(string gname) {
		cout << "Grand Father name : "<< gname<<endl;
	}
};

class Emplyee : Person{
public:
	Emplyee(string fname, string gname) :Person(gname) {
		cout << "Father name : " << fname << endl;
	};
};

class Doctor : Emplyee {
public:
	Doctor(string name, string fname, string gname):Emplyee(fname,gname) {
		cout << "Your name : " << name << endl;
	};
};

int main() {
	Doctor("ALi", "Spaqoo", "Dada");
}
