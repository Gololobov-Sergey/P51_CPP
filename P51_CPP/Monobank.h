#pragma once

#include"Menu.h"

struct Account
{
	char kodNBU[4];
	char iban[30];
	int balance;


	void print()
	{

	}

	void addSum()
	{

	}

	void withDraw()
	{

	}

	void menu()
	{

	}
};


struct Client
{
	char* name;
	Account* accounts = nullptr;
	size_t size = 0;

	void print()
	{

	}

	void addAccount()
	{

	}

	void closeAccount()
	{

	}

	void workWithAccount()
	{

	}

	void menu()
	{

	}

};


struct Bank
{
	char* name;
	Client* clients = nullptr;
	size_t size = 0;


	void init(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	void addClient()
	{

	}

	void removeClient()
	{

	}

	void workWithClients()
	{

	}

	void print()
	{

	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << name << endl;
			cout << "---------------" << endl;
			//cout << "1. Add client\n2. Remove client\n3. Print all clients\n4. Work with clients\n5. Exit\n";
			int c = Menu::select_vertical({ "Add client", "Remove client", "Print all clients", "Work with clients", "Exit" }, HorizontalAlignment::Left, 3);
			//cin >> c;
			//cin.ignore();
			switch (c)
			{
			case 0:
				addClient();
				break;
			case 1:
				removeClient();
				break;
			case 2:
				print();
				break;
			case 3:
				workWithClients();
				break;
			case 4:
				//save();
				exit(0);
			default:
				break;
			}
		}
	}

};

