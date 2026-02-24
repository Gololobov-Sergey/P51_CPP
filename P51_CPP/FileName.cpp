#include<iostream>
#include<Windows.h>
#include<iomanip>

#include"myFunc.h"

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// 24.02.2026


	//cout << starLine << endl;


	// type (*name) (param)

	/*void (*pFunc)(int, char);

	pFunc = starLine;
	pFunc(20, '$');*/
	

	/*void(*message)();
	message = hello;
	message();
	message = goodbye;
	message();

	void(*arrFunc[])() = {hello, goodbye};
	for (size_t i = 0; i < 2; i++)
	{
		arrFunc[i]();
	}*/

	//===========================================================

	/*double(*operation[])(double, double) = { add, diff, mult, div, pow1 };
	double a, b;
	cin >> a >> b;
	cout << "Operation: 1 +, 2 - , 3 *, 4 /, 5 ^ : ";
	int choice;
	cin >> choice;
	double res = operation[choice - 1](a, b);
	cout << res << endl;*/

	//=============================================================


	size_t size = 20;
	int* a = new int[size];
	setArray(a, size, 0, 1000);
	printArray(a, size);
	sortArray(a, size, evenFirst);
	printArray(a, size);



	// 19.02.2026

	/*int a = 5, b = 4;
	my_swap(a, b);
	cout << a << " " << b << endl;*/


	//int a = 5;
	//int b = 10;
	//
	//const int* p = &a; // покажчик на константное значение
	////*p = 100;        // Error
	//p = &b;            // OK


	//int a = 5;
	//int b = 10;

	//int* const p = &a; // константный покажчик
	//*p = 100;          // OK
	////p = &b;          // Error


	//int a = 5;
	//int b = 10;
	//const int* const p = &a; // константный покажчик на константное значение
	////*p = 100;              // Error
	////p = &b;                // Error


	//int a = 5;
	//int b = 10;

	//const int& r = a; // константная ссылка
	////r = 100;          // Error
	////r = b;            // Error



	//Написати функцію, яка отримує покажчик на статичний масив 
	// і його розмір.Функція розподіляє додатні, від'ємні та 
	// нульові елементи в окремі динамічні масиви.

	/*size_t size = 10;
	int* a = new int[size];
	setArray(a, size, -5, 5);
	printArray(a, size);

	int* positive = nullptr;
	int* negative = nullptr;
	int* zero = nullptr;
	size_t sizePositive = 0;
	size_t sizeNegative = 0;
	size_t sizeZero = 0;
	rozpodil(a, size, positive, sizePositive, negative, sizeNegative, zero, sizeZero);
	printArray(positive, sizePositive);
	printArray(negative, sizeNegative);
	printArray(zero, sizeZero);*/


	// 17.02.2026


	/*int a = 5;        int b = 10;
	int* p = &a;        int& r = b;
	*p = 100;           r = 100;
	p = &b;             r = a;*/





	/*typedef unsigned char UC;
	UC s;*/

	/*size_t size;
	cout << "Input size A: ";
	cin >> size;

	int* a = new int[size];
	setArray(a, size, 20, 80);
	printArray(a, size);*/



	/*int* b = new int[size];
	setArray(b, size);
	printArray(b, size);

	insert(a, size, new int{10}, 1, 3);
	printArray(a, size);*/



	/*int sizeB = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			sizeB++;
	}

	int* b = new int[sizeB];
	sizeB = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			b[sizeB++] = a[i];
	}*/

	/*int* b = nullptr;
	int sizeB = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			b = append(b, &sizeB, a[i]);
		}
	}


	printArray(b, sizeB);*/


	//delete a;





	// 12.02.2026

	/*int a = 5;
	cout << a << endl;
	cout << typeid(a).name() << endl;
	cout << sizeof(a) << endl;
	cout << &a << endl;

	int* p = &a;

	*p = 100;
	cout << p << endl;
	cout << a << endl;

	int b = 4;
	p = &b;
	cout << p << endl;
	*p = 9999;
	cout << b << endl;

	float c = 44.44;
	float* pc = &c;

	int* p1, p2;*/


	//int a = 5;
	//int b = 10;

	//// ++ -- + - += -= 
	//// == != 

	//int* pc = nullptr;
	//int* pa = &a;
	//int* pb = &b;
	//cout << pa << endl;
	//cout << &b << endl;
	//pa = pa + 1; // p = p + n * sizeof(type);
	//cout << pa << endl;
	//cout << *pa << endl;
	//cout << pc << endl;

	//cout << (pa == nullptr) << endl;



	//int arr[] = { 99,2,3,4,5 };

	//*(arr + 2) = 888;
	//*arr = 8;

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << *(arr + i) << " ";  // arr[i] = *(arr + i)
	//}
	//cout << endl;


	//for (int* i = arr; i != &arr[5]; i++)
	//{
	//	cout << *i << " ";
	//}


	//int* p = arr + 1;

	//const int size = 10;
	//int arr[size];
	//setArray(arr, size);
	//printArray(arr, size);

	//int size = 1000000;
	//cout << "Input size: ";
	////cin >> size;

	//int* p;

	//p = new int[size];
	//setArray(p, size);
	//printArray(p, size);

	//delete p;

	/*char a = 5;
	char* p = &a;
	cout << sizeof(p) << endl;*/


	//*p = 1234;

	// 10.02.2026

	/*const int size = 10;
	char arr[size];
	setArray(arr, size);
	printArray(arr, size);*/

	/*cout << sum('A', 4, 2.5) << endl;

	auto t = 0.0;

	int a = 10;
	float b = 3.14f;

	decltype(a + b) c;*/



	/*const int rows = 8;
	const int cols = 4;
	int matrix[10][10];
	setMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);*/


	// 05.02.2026

	//const int size = 10;
	//int arr[size];
	//setArray(arr, size);
	////setArray(arr, size); // 0 - 9
	//printArray(arr, size);
	//int max = maxValueArray(arr, size);
	//cout << "Max element: " << max << endl;
	//cout << "Index of element: " << findIndexArray(arr, size, 99) << endl;




	/*starLine();
	starLine(20);
	starLine(30, '$');


	cout << sum() << endl;*/

	/*int a, b;

	starLine();

	cout << sum(2, 0) << endl;*/


	//cout << avg(3, 4, 6) << endl;


	// 03.02.2026

	// type name[rows][col];

	/*const int rows = 4;
	const int cols = 4;
	int matrix[rows][cols]; */
	/*=
	{
		1,2,3,4,
		5,6,7, 8,
		9,10,11,12
	};*/

	/*srand(time(0));
	int minValue = 0;
	int maxValue = 10;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}*/

	/*int iRowMax = 0;
	int iColMax = 0;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[i][j] > matrix[iRowMax][iColMax])
			{
				iRowMax = i;
				iColMax = j;
			}
		}
	}

	cout << "Max element: " << matrix[iRowMax][iColMax] << " at index [" << iRowMax << "][" << iColMax << "]" << endl;*/

	//=============================================

	/*for (size_t i = 0; i < rows; i++)
	{
		int rowSum = 0;
		for (size_t j = 0; j < cols; j++)
		{
			rowSum += matrix[i][j];
		}
		cout << "Sum of row " << i << ": " << rowSum << endl;
	}
	cout << endl;

	for (size_t j = 0; j < cols; j++)
	{
		int colSum = 0;
		for (size_t i = 0; i < rows; i++)
		{
			colSum += matrix[i][j];
		}
		cout << "Sum of column " << j << ": " << colSum << endl;
	}*/

	/*for (size_t j = 0; j < cols / 2; j++)
	{
		for (size_t i = 0; i < rows; i++)
		{
			swap(matrix[i][j], matrix[i][cols - 1 - j]);
		}
	}*/


	/*for (size_t i = 0; i < rows / 2; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			swap(matrix[i][j], matrix[rows - 1 - i][j]);
		}
	}

	cout << endl;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}*/

	// 29.01.2026

	// type name[size];

	/*int arr[] = { 1 };

	const int size = 10;*/

	//int arr[size], count = 0;

	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}*/

	/*srand(time(0));
	int minValue = 0;
	int maxValue = 9;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}*/

	/*cout << "Array elements: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//=============================================

	/*for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}*/


	//=============================================


	/*cout << endl << "Reversed list: ";
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//=============================================

	/*int iMax = 0;
	int iMin = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > arr[iMax])
		{
			iMax = i;
		}
		if (arr[i] < arr[iMin])
		{
			iMin = i;
		}
	}
	cout << "Max element: " << arr[iMax] << " at index " << iMax << endl;
	cout << "Min element: " << arr[iMin] << " at index " << iMin << endl;*/

	//=============================================

	/*int count0 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count0++;
		}
	}
	cout << "Count of zeros: " << count0 << endl;

	int count01 = 0;
	for (size_t i = 0; arr[i] != 1; i++)
	{
		count01++;
	}
	cout << "Count of elements before first zero: " << count01 << endl;*/

	/*for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	cout << "Count of positive numbers: " << count << endl;*/

	//=============================================

	/*int arrB[size];
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arrB[j++] = arr[i];
		}
	}

	cout << "Array B elements: ";
	for (size_t i = 0; i < j; i++)
	{
		cout << arrB[i] << " ";
	}
	cout << endl;*/

	//=============================================

	//Написати програму, що копіює елементи 2 - х масивів розміром 5 елементів 
	// кожен в один масив розміром 10 елементів таким чином : спочатку копіюються 
	// послідовно всі елементи, більші за 0, потім послідовно всі елементи, 
	// що дорівнюють 0, а потім послідовно всі елементи менші за 0.


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



	/*int a;
	do
	{
		cin >> a;
	} while (a < 1 || a > 10);
	cout << a << endl;*/




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