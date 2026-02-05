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

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void setArray(int arr[], int size, int minValue = 0, int maxValue = 9)
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

int maxValueArray(int arr[], int size)
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

int findIndexArray(int arr[], int size, int key)
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

void reverseArray(int arr[], int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}