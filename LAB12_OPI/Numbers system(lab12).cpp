#include <iostream>
#include <string>

using namespace std;

int bin_to_dec(char* binary, int &flag) {
	{
		setlocale(LC_ALL, "Rus");
		int digit = 0;
		int count = 1;


		for (int i = strlen(binary); i > 0; i--, count *= 2)//цикл который считает длину числа и умнажает счетчик на два
		{
			if ((binary[i - 1] != '0') && (binary[i - 1] != '1')) //проверка на наличие других цифр, запись i - 1 нужна потому что в функции strlen отсчет идет от 1
			{
				cout << "Ошибка ввода числа, не правильный формат" << endl;
				flag = 0; //флаг, который не позволяет проводить дальше вычисления в главной функции
				break;
			}
			if (binary[i - 1] == '1') // при условии что в числе есть 1, значение счетчика суммируется, запись i - 1 нужна потому что в функции strlen отсчет идет от 1
			{
				digit += count;
			}
		}
		return digit;
	}
}


int main()
{

	setlocale(LC_ALL, "Rus");
	int numSys, decimal, number, flag = 1;
	char binary[50], tmp[33];
	cout << "В какой системе счисления вы хотите ввести число?\n(1 - двоичная, 2 - восьмеричная, 3 - десятичная, 4 - шестнадцатиричная)\n";

	cin >> numSys;
	switch (numSys)
	{
	case 1:
		cout << "Введите число " << endl;
		cin >> binary;
		decimal = bin_to_dec(binary, flag);//функция которая переводит в десятичную систему счисления,
		if (flag) {
			cout << binary << " в восьмеричной:   " << oct << decimal << '\n'; //перевод в восьмеричную систему счисления с помощью оператора dec
			cout << binary << " в десятичной: " << dec << decimal << '\n'; //перевод в десятичную систему счисления с помощью оператора dec
			cout << binary << " в шестнацатиричной: " << hex << decimal << '\n'; //перевод в шестнадцатиричную систему счисления с помощью оператора hex
		}
		break;
	case 2:

		cout << "Введите число\n";
		cin >> oct >> number; 
			
		_itoa_s(number, tmp, 2);//перевод в двоичную систему счисления с помощью функции _itoa_s, первый параметр число которое ввели,  
		//второй параметр символьный массив, третий параметр система счисления
		cout << oct << number << " в двоичной:  " << tmp << '\n';
		cout << oct << number << " в десятичной: " << dec << number << '\n'; 
		cout << oct << number << " в шестнацатиричной: " << hex << number << '\n';
		break;
	case 3:

		cout << "Введите число\n";
		cin >> number; 

		_itoa_s(number, tmp, 2);
		cout << dec << number << " в двоичной:  " << tmp << '\n';
		cout << dec << number << " в восьмеричной:   " << oct << number << '\n'; 
		cout << oct << number << " в шестнацатиричной: " << hex << number << '\n';
		break;
	case 4:
		cout << "Введите число\n";
		cin >> hex >> number;  

		_itoa_s(number, tmp, 2);
		cout << hex << number << " в двоичной:  " << tmp << '\n';
		cout << hex << number << " в восьмеричной:   " << oct << number << '\n'; 
		cout << hex << number << " в десятичной: " << dec << number << '\n';  
		break;
	default:
		cout << "Вы должны ввести числа от 1 до 4\n";
		break;
	}
}

