#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char stroka[150], a;
	int i, k;
	cout << "Введите строку: ";
	cin.getline(stroka, 150);
	cout << "Введите шаг: ";
	cin >> k;
	for (i = 0; stroka[i] != '\0'; i++) {
		if (stroka[i] != ' ' and stroka[i] != ',' and stroka[i] != '.' and stroka[i] != '!' and stroka[i] != '?' and stroka[i] != '1' and stroka[i] != '2' and stroka[i] != '3' and stroka[i] != '4' and stroka[i] != '5' and stroka[i] != '6' and stroka[i] != '7' and stroka[i] != '8' and stroka[i] != '9' and stroka[i] != '<' and stroka[i] != '>') {
			a = stroka[i];
			if (a >= 'a' or a <= 'z') {
				a += k;
				if (a > 'z') {
					a = a - 'z' + 'a' - 1;
				}
				if (a < 'a') {
					a = a + 'a' + 1;
				}
				stroka[i] = a;
			}
			else if (a >= 'A' or a <= 'Z') {
				a += k;
				if (a > 'Z') {
					a = a - 'Z' + 'A' - 1;
				}
				if (a < 'A') {
					a = a + 'A' + 1;
				}
				stroka[i] = a;
			}
		}
		else
			a = stroka[i];
		}
	
	cout << "Расшифрованная строка: " << stroka;
}
