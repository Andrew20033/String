#include"String.h"


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MyString str("Hello! ");
	MyString str2("Stukan Andrew");

	str.Print();

	MyString resultat = str + str2;

	resultat.Print();

	cout << endl;



	char buff[80];

	cout << "Enter the first string: ";
	cin.getline(buff, 80);
	str = buff;

	cout << "Enter the second string: ";
	cin.getline(buff, 80);
	str2 = buff;
	cout << endl;

	resultat = str + str2;

	resultat.Print();

	system("pause");
}