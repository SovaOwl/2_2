#include <iostream>
#include <string>

using namespace std;

struct address
{
	string city;
	string street;
	int house_number = -999;
	int apartment_number = -999;
	int index = -999;
};

void add(address& p, string new_city, string new_street, int new_house_number, int new_apartment_number, int new_index)
{
	p.city = new_city;
	p.street = new_street;
	p.house_number = new_house_number;
	p.apartment_number = new_apartment_number;
	p.index = new_index;

	cout << "Город: " << p.city << endl << "Улица: " << p.street << endl << "Номер дома: " << p.house_number << endl << "Номер квартиры: " << p.apartment_number << endl << "Индекс: " << p.index << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	address adr;

	string new_city = "Москва";
	string new_street = "Арбат";
	int new_house_number = 12;
	int new_apartment_number = 8;
	int new_index = 123456;

	add(adr, new_city, new_street, new_house_number, new_apartment_number, new_index);
}
