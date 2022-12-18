#include <iostream>
#include <stdio.h>
#include <sstream>
#include<typeinfo>
using namespace std;

int main() {
	int i;
	float number_1, number_2; 
	float total{};
	string end;
	char operation;
	setlocale(LC_CTYPE, "rus");
	cout << "Введите целое число: ";
	cin >> number_1;
	
	
	
	cout << endl;
	for (i = 0; i < 1000; i++) {
		cout << "Выберите операцию, которую хотите провести с числом." << endl;
		cout << "+\n-\n*\n/\n^\n%" << endl;
		cout << endl;
		cin >> operation;
		if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '^' && operation != '%') 
		{
			cout << "Некоректная операция." << endl;
			return(0);
		}
		else
		cout << endl;
		switch (operation)// поменять условие для символов, которые не являются операциями
		{
		case '+': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = number_1 + number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Сумма чисел равна: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if(end=="next") 
			{
				break;
			}
			else 
			{
				cout << "Некорректный ввод."<<endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'-': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = number_1 - number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Разность чисел равна: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else {
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
			break;
		}
		case'*': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = number_1 * number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Произведение чисел равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next") 
			{
				break;
			}
			else 
			{
				cout << "Деление на ноль недопустимо." << endl;
				return(0);
			}
		}
		case'/': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			if (number_2 == 0)
			{
				cout << "На ноль делить нельзя";
				return(0);
			}
			total = number_1 / number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Частное чисел равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next") 
			{
				break;
			}

			else {
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'^': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = pow(number_1, number_2);
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << "Результат возведения в степень: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next")
			{
				break;
			}
			else
			{
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		case'%': {
			if (i >= 1)
			{
				number_1 = total;
			}
			cout << "Введите второе число: ";
			cin >> number_2;
			total = (number_1 / 100) * number_2;
			if (total >= pow(3.4, 38) || total <= pow(-3.4, 37))
			{
				cout << "Число не поддерживается" << endl;
				return(0);
			}
			cout << number_2 << "% от " << number_1 << " равно: " << total << endl;
			cout << "чтобы закончить вычисления введите end, иначе введите next. " << endl;
			cin >> end;
			if (end == "end")
			{
				return (0);
			}
			else if (end == "next") 
			{
				break;
			}
			else 
			{
				cout << "Некорректный ввод." << endl;
				cout << "Калькулятор не прощает ошибок." << endl;
				return(0);
			}
		}
		}
		}
	}

