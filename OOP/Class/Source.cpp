#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	string name;
	int age;
	Person(string n,int a) {
		name = n; age = a;
	}
	void move() {
		cout << name << " is moving" << endl;
	}
};
int main() {
	Person person = Person("Tom",22);
	person.age = 22;
	cout << "Name: " << person.name << "\tAge:" << person.age << endl;
	person.name = "Bob";
	person.move();
}