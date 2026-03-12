#pragma once
#include<iostream>
#include<iomanip>

#include"myFunc.h"

using namespace std;


struct Student
{
	char* name;
	char* surname;

	int* marks = nullptr;
	size_t size = 0;

	void input()
	{
		cout << "Enter surname: ";
		surname = getString();
		cout << "Enter name   : ";
		name = getString();
	}

	void print()
	{
		cout << setw(20) << left << surname << setw(15) << left << name << " ";
		printArray(marks, size);
	}

	void addMark()
	{
		cout << "Mark : ";
		int m;
		cin >> m;
		append(marks, size, m);
	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << "  -= Student MENU - " << surname << " " << name << "= -" << endl;
			cout << "1. Add mark\n2. Return to main menu\n";
			int c;
			cin >> c;
			cin.ignore();
			switch (c)
			{
			case 1:
				addMark();
				break;
			case 2:
				return;

			}
		}
	}
};


struct Group
{
	char* name;
	Student* students = nullptr;
	size_t size = 0;

	void addStudent()
	{
		system("cls");
		cout << "ADD STUDENT" << endl;
		cout << "-----------" << endl;
		Student st;
		st.input();
		append(students, size, st);
		cout << "Student added" << endl << endl;
		system("pause");
	}

	void removeStudent()
	{

	}

	void print()
	{
		system("cls");
		cout << "ALL STUDENT" << endl;
		cout << "-------------------------" << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " "; 
			students[i].print();
		}
		cout << endl;
		system("pause");
	}

	void workWithStudent()
	{
		system("cls");
		cout << "WORK WITH STUDENT" << endl;
		cout << "-------------------------" << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " ";
			students[i].print();
		}
		cout << endl;
		cout << "Enter number student : ";
		int i;
		cin >> i;
		cin.ignore();
		students[i - 1].menu();
	}

	void menu()
	{
		cout << "Enter group name : ";
		name = getString();

		while (true)
		{
			system("cls");
			cout << "  -= MY STAT " << name << "= -" << endl;
			cout << "1. Add student\n2. Remove student\n3. Print group\n4. Work with student\n5. Exit\n";
			int c;
			cin >> c;
			cin.ignore();
			switch (c)
			{
			case 1:
				addStudent();
				break;
			case 2:
				removeStudent();
				break;
			case 3:
				print();
				break;
			case 4:
				workWithStudent();
				break;
			case 5:
				exit(0);
			default:
				break;
			}
		}
	}
};