//Косвенная рекурсия
#include<iostream>
using namespace std;
void f();
int main() {
	cout << "Hello world!" << endl;
	f();
}
void f() {
	main();
} 
