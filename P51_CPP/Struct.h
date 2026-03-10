#pragma once

struct Point
{
	char name;
	int x;
	int y;
};

void printPoint(Point p)
{
	cout << p.name << "(" << p.x << ", " << p.y << ")" << endl;
}

double getLength(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


struct Date
{
	int day, month, year;
};

void printDate(Date p)
{
	if (p.day < 10)
		cout << "0";
	cout << p.day << ".";
	if (p.month < 10)
		cout << "0";
	cout << p.month << "." << p.year << endl;
}


struct Student
{
	char* name;
	Date birthDay;

	int* marks = nullptr;
	size_t size = 0;
};

void inputStudent(Student& s)
{
	cout << "Enter name: ";
	s.name = getString();
	cout << "Enter BD (dd mm year) : ";
	cin >> s.birthDay.day >> s.birthDay.month >> s.birthDay.year;

}

void printStudent(Student s)
{
	cout << "Name : " << s.name << endl;
	cout << "BD   : "; printDate(s.birthDay);
	cout << "Marks: "; printArray(s.marks, s.size);
}

void addMarkStudent(Student& s)
{
	cout << "Mark : ";
	int m;
	cin >> m;
	append(s.marks, s.size, m);
}