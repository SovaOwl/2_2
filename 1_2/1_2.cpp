#include <iostream>
#include <string>

using namespace std;

struct account
{
	int account_number = -999;
	string account_holder_name;
	int balance = -999;
	int new_balance = -999;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	account ac;

	cout << "Введите номер счёта: ";
	cin >> ac.account_number;

	cout << "Введите имя владельца: ";
	cin >> ac.account_holder_name;

	cout << "Введите баланс: ";
	cin >> ac.balance;

	cout << "Введите новый баланс: ";
	cin >> ac.new_balance;

	cout << "Ваш счёт: " << ac.account_number << ", " << ac.account_holder_name << ", " << ac.new_balance;
}