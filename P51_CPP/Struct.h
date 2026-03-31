#pragma once

struct Point
{
	
	double x;
	int y;
	char name;

	void print()
	{
		cout << name << "(" << x << ", " << y << ")" << endl;
	}
};


struct GGG
{

};


double getLength(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


struct Date
{
	int day : 5;
	int month : 4; 
	int year : 12;


	void print()
	{
		if (day < 10)
			cout << "0";
		cout << day << ".";
		if (month < 10)
			cout << "0";
		cout << month << "." << year << endl;
	}
};






struct Engine
{
	int cilindr = 4;

	void start()
	{
		cout << "Engine started" << endl;
	}

	void stop()
	{
		cout << "Engine stoped" << endl;
	}
};


struct Car
{
	Engine engine;

	void move(int l)
	{
		engine.start();
		cout << "Car move " << l << "m" << endl;
		engine.stop();
	}

	void beep()
	{
		cout << "Bepppp Beeeeep" << endl;
	}
};