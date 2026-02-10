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


int sum(int a = 0, int b = 10)
{
	return a + b;
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
void printArray(T arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


template<class T>
void setArray(T arr[], int size)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = T();
	}
}


void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}


template<class T>
T maxValueArray(T arr[], int size)
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
void sortArray(T arr[], int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
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

