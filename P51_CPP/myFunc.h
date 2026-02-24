#pragma once
#include<iostream>

using namespace std;

// type name(param)
// {
//   body;
// }


void starLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

bool isEven(int a)
{
	return a % 2 == 0;
}

float avg(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}


template<class T>
void printArray(const T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


template<class T>
void setArray(T* arr, int size)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = T();
	}
}


void setArray(int* arr, int size, int minValue = 0, int maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}


template<class T>
T maxValueArray(const T* arr, int size)
{
	int iMax = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > arr[iMax])
		{
			iMax = i;
		}
	}
	return arr[iMax];
}

template<class T>
int findIndexArray(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
void reverseArray(T arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}


template<class T>
int countValueArray(T arr[], int size, T value) 
{
	int count = 0;
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] == value) 
		{
			count++;
		}
	}
	return count;
}

template<class T>
bool asc(T a, T b)
{
	return a > b;
}

template<class T>
bool desc(T a, T b)
{
	return a < b;
}

bool evenFirst(int a, int b)
{
	if (a % 2 == 1 && b % 2 == 0)
		return true;
	if (a % 2 == 0 && b % 2 == 1)
		return false;
	return asc(a, b);
}


template<class T>
void sortArray(T* arr, int size, bool(*method)(T, T))
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


template<class T>
double avgArray(T arr[], int size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return (double)sum / size;
}


template<class T1, class T2, class T3>
auto sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}


template<class T>
void setMatrix(T matrix[10][10], int rows, int cols, T minValue = 0, T maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
}



template<class T>
void printMatrix(T matrix[10][10], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}


template<class T>
T maxValueMatrix(T matrix[10][10], int rows, int cols)
{
	int iMax = 0, jMax = 0;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[i][j] > matrix[iMax][jMax])
			{
				iMax = i;
				jMax = j;
			}
		}
	}
	return matrix[iMax][jMax];
}

template<class T>
void append(T*& arr, size_t& size, T value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete arr;
	size++;
	arr = temp;
}

template<class T>
void pop(T*& arr, size_t& size)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete arr;
	size--;
	arr = temp;
}



template<class T>
void insert(T*& arr, size_t& size, size_t index, T value)
{
	if (index < 0 || index > size) return; // Проверка на корректность индекса
	
	T* temp = new T[size + 1];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	temp[index] = value;
	for (size_t i = index; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;
	size++;
	arr = temp;
}

template<class T>
void pop(T*& arr, size_t& size, size_t index)
{

}

template<class T>
void insert(T*& arr, size_t& size, T* b, size_t sizeB, size_t index)
{
	if (index < 0 || index > size) return; // Проверка на корректность индекса

	T* temp = new T[size + sizeB];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (size_t i = 0; i < sizeB; i++)
	{
		temp[index + i] = b[i];
	}
	for (size_t i = index; i < size; i++)
	{
		temp[sizeB + i] = arr[i];
	}

	delete[] arr;
	size += sizeB;
	arr = temp;

}

void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
	cout << "In func: " << a << " " << b << endl;
}

void ffff(const int* a)
{
	//*a = 100;
}

void rozpodil(int* arr, size_t size, int*& positiv, size_t& sizePositiv, int*& negativ, size_t& sizeNegativ, int*& zero, size_t& sizeZero)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			append(positiv, sizePositiv, arr[i]);
		}
		else
		{
			if (arr[i] < 0)
			{
				append(negativ, sizeNegativ, arr[i]);
			}
			else
			{
				append(zero, sizeZero, arr[i]);
			}
		}
		
	}
}

// Створити функцію, що дозволяє видаляти блок елементів, 
// починаючи з довільного індексу масиву.


//Написати функцію, яка отримує покажчик на динамічний 
// масив і його розмір.Функція повинна видалити з масиву 
// всі від'ємні числа і повернути покажчик на новий динамічний масив.


void hello()
{
	cout << "Hello, world!" << endl;
}

void goodbye()
{
	cout << "Goodbye, world!" << endl;
}

double add(double a, double b)
{
	return a + b;
}

double diff(double a, double b)
{
	return a - b;
}

double mult(double a, double b)
{
	return a * b;
}

double div(double a, double b)
{
	return a / b;
}

double pow1(double a, double b)
{
	return pow(a, b);
}


void (*getFunc())()
{
	return hello;
}


void kopatel()
{
	cout << "Копає один робітник з лопатою" << endl;
}

void kopatel3()
{
	cout << "Копають три робітники з лопатами і одиз з кіркою" << endl;
}

void exkavator()
{
	cout << "Працює екскаватор, робітники курять в сторонці" << endl;
}

void(*prorab(int len))()
{
	if (len < 100)
		return kopatel;
	if (len < 500)
		return kopatel3;
	return exkavator;
}

template<class T>
void createArray2D(T**& p, int row, int col)
{
	p = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		p[i] = new int[col];
	}
}


template<class T>
void deleteArray2D(T**& p, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] p[i];
	}
	delete[] p;
	p = nullptr;
}


template<class T>
void setArray2D(T** p, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			p[i][j] = rand() % 10;
		}
	}
}

template<class T>
void printArray2D(T** p, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}