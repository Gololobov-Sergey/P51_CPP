#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// 27.01.2026

	//int a = 1;
	//while (a <= 5)
	//{
	//	cout << a << " ";
	//	a++;
	//}

	//do
	//{
	//	//

	//} while (true);


	/*for (int i = 1; i <= 5; i++)
	{
		cout << i << " ";
	}*/

	/*for (int i = 1; i <= 15; i += 2)
	{
		cout << i << " ";
	}*/

	/*for (size_t k = 10; k > 0; k--)
	{
		cout << k << " ";
	}*/


	/*int a, b, c;

	cout << "Input number: " << endl;

	int sum = 0;

	do{
		cin >> a;
		sum += a;
	} while (a != 0);

	cout << sum << endl;*/

	//cout << time(0) << endl;


	/*srand(time(0));
	for (size_t i = 0; i < 20; i++)
	{
		cout << rand() % 500 + 1 << endl;
	}*/
	
	/*int rnd = rand() % 5000 + 1;
	int n, count = 0;
	do
	{
		cin >> n;
		count++;
		if (n < rnd)
		{
			cout << "Bigger!" << endl;
		}
		else if (n > rnd)
		{
			cout << "Smaller!" << endl;
		}
		else
		{
			cout << "You win! Attempts: " << count << endl;
			break;
		}

	} while (true);*/



	/*int clients = 0;
	int totalSum = 0;

	do
	{
		clients++;
		cout << "Processing client #" << clients << endl;

		int minCount = 4;
		int count = minCount;
		int sum = 0;

		for (size_t i = 0; i < minCount; i++)
		{
			int price;
			cout << "Input price: ";
			cin >> price;
			sum += price;
		}

		do
		{
			char ch;
			cout << "Do you want to buy more items? (y/n): ";
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				int price;
				cout << "Input price: ";
				cin >> price;
				sum += price;
				count++;
			}
			else if (ch == 'n' || ch == 'N')
			{
				break;
			}
			else
			{
				cout << "Invalid input. Please enter 'y' or 'n'." << endl;
			}

		} while (true);

		cout << "Client #" << clients << endl;
		cout << "Total items: " << count << endl;
		cout << "Total sum: " << sum << endl;

		totalSum += sum;

		char ch;
		cout << "Do you want to buy more clients? (y/n): ";
		cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			continue;
		}
		else if (ch == 'n' || ch == 'N')
		{
			break;
		}

	} while (true);

	cout << "Total clients: " << clients << endl;
	cout << "Total sum of all clients: " << totalSum << endl;*/



	int a;
	do
	{
		cin >> a;
	} while (a < 1 || a > 10);
	cout << a << endl;
	



	// 22.01.2026

	// !
	// > < >= <= == !=
	// || or +, && and *

	/*int a = 5;
	int b = 4;

	int c = !a > b && (a == 4 || b <= 5);

	if (a == 5)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}*/


	/*int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << "Max: " << a << endl;
	}
	else
	{
		if (b > c)
		{
			cout << "Max: " << b << endl;
		}
		else
		{
			cout << "Max: " << c << endl;
		}
	}*/



	// 3+2
	/*int a, b;
	char op;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;
	case '*': cout << a * b << endl;
		break;
	case '/':
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
		{
			cout << "Error: Division by zero!" << endl;
		}
		break;
	default:
		cout << "Error: Unknown operator!" << endl;
		break;
	}*/


	/*int m;
	cin >> m;

	switch (m)
	{
	case 12: case 1:  case 2:  cout << "winter"; break;
	case 3:  case 4:  case 5:  cout << "Spring"; break;
	case 6:  case 7:  case 8:  cout << "Summer"; break;
	case 9:  case 10: case 11: cout << "Fall";   break;
	default: cout << "Error"; break;
	}*/


	// (condition) ? expr1 : expr2; 

	/*int a, b, c;
	cin >> a >> b >> c;
	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;
	max = (a > b && a > c) ? a : (b > c) ? b : c;*/


	/*Користувач вводить чотиризначне число.Необхідно поміняти в цьому числі 1 і 2 цифри,
	а також 3 і 4 цифри.Якщо користувач вводить не чотиризначне число, вивести повідомлення про помилку.*/

	// 1234  ->  2143
	//int n;
	//cin >> n;
	//if (n >= 1000 && n <= 9999)
	//{
	//	int d1 = n / 1000;        // 1 цифра
	//	int d2 = n / 100 % 10;    // 2 цифра
	//	int d3 = n / 10 % 10;     // 3 цифра
	//	int d4 = n % 10;          // 4 цифра
	//	int new_n = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
	//	cout << new_n << endl;
	//}
	//else
	//{
	//	cout << "Error: Not a four-digit number!" << endl;
	//}


	// 20.01.2026


	/*Користувач вводить із клавіатури грошову суму в гривнях і копійках
	(гривні та копійки вводяться в різні змінні).Сума може бути введена
	як правильно(наприклад 19 грн. 90 коп.), так і неправильно
	(наприклад 22 грн. 978 коп.).Написати програму, яка, використовуючи
	тільки лінійний алгоритм, здійснить коригування введеної грошової
	суми в правильну форму.
	Наприклад, якщо користувач ввів 11 грн. 150 коп., програма повинна
	вивести на екран суму 12 грн. 50 коп.*/


	/*int a, b, c;

	cin >> a >> b;
	a += b / 100.;
	b %= 100;
	cout << a << " грн. " << b << " коп." << endl;*/

	/*Користувач вводить із клавіатури час у секундах, що минув від початку дня.
	Вивести на екран поточний час у годинах, хвилинах і секундах.Порахувати
	скільки годин, хвилин і секунд залишилося до опівночі.*/

	/*int s;
	cin >> s;
	s = 86400 - s;
	cout << s / 3600 << ":" << s / 60 % 60 << ":" << s % 60 << endl;*/


	//Користувач вводить із клавіатури три цілих числа.Порахувати їхню суму, добуток і середнє арифметичне.

	/*int a, b, c;
	cout << "Перше число: ";
	cin >> a;
	cout << "Друге число: ";
	cin >> b;
	cout << "Третє число: ";
	cin >> c;
	cout << endl;
	cout << "Сума чисел: " << a + b + c << endl;
	cout << "Сума чисел: " << a * b * c << endl;
	float d = (a + b + c) / 3.f;
	cout << "Сума чисел: " << d << endl;*/


	//Користувач вводить із клавіатури розмір одного файлу в гігабайтах і 
	// швидкість інтернет - з'єднання в бітах на секунду. Порахувати за скільки 
	// годин, хвилин і секунд завантажиться фільм.



	// - ++ --
	// = + - * / % += -= *= /= %= ()
	/*a++;
	++a;*/

	//a = -a;

	//c = ++a * (a++ + --b/2);
	//cout << a << endl; // 7
	//cout << b << endl; // 3
	//cout << c << endl; // 42

	//cout << a << endl;    // 5
	//cout << a++ << endl;  // 5
	//cout << a << endl;  // 6
	//cout << ++a << endl;  // 7
	//cout << a << endl;    // 7





	/*cout << "Hello C++" << endl;
	cout << 1234 << endl;
	cout << "Мене звати Сергій" << endl;*/

	// type name;

	// bool  - 1b

	// char  - 1b

	// short - 2b
	// int   - 4b
	// long  - 4b
	// long long - 8b

	// float - 4b (7)
	// double - 8b (15)
	// long doble - 10b 

	/*int a;
	int b = 5;
	a = 10;
	cout << &a << endl;*/

	/*int c = 1.99f;
	cout << c << endl;*/

	/*unsigned int a = -1;
	cout << a << endl;

	const int b = 22;*/
	//b = 10;







	system("pause");
}