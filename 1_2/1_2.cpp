#include <iostream>
#include <string>

using namespace std;

struct account
{
	int account_number = -999;
	string account_holder_name;
	int balance = -999;
};

void new_balance(account& p, int new_bal)
{
	p.balance = new_bal;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	account ac;
	int new_bal;

	cout << "Введите номер счёта: ";
	cin >> ac.account_number;

	cout << "Введите имя владельца: ";
	cin >> ac.account_holder_name;

	cout << "Введите баланс: ";
	cin >> ac.balance;

	cout << "Введите новый баланс: ";
	cin >> new_bal;

	new_balance(ac, new_bal);

	cout << "Ваш счёт: " << ac.account_number << ", " << ac.account_holder_name << ", " << ac.balance;
}
