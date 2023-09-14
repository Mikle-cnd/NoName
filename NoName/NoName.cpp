#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Point {
	string firstName;
	string lastName;
	int age;
	int phoneNumber;
};
int main() {
	setlocale(LC_ALL, "");
	Point user;
	cout << "Введите имя: " << endl;
	cin >> user.firstName;
	cout << "Введите фамилию: " << endl;
	cin >> user.lastName;
	cout << "Введите возраст: " << endl;
	cin >> user.age;
	cout << "Введите номер: " << endl;
	cin >> user.phoneNumber;
}

