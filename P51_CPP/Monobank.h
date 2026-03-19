#pragma once

#include"Menu.h"

struct Currency
{
	char kodNBU[4];
	float rate;
};


Currency currency[3] = { {"USD", 45.22}, {"EUR", 52.65}, {"UAH", 1}};

struct Account
{
	Currency* curr; // = &currency[1];
	
	char iban[30] = "UA326762";
	int balance = 0;


	void print()
	{
		cout << curr->kodNBU << " " << iban << " " << balance << endl;
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
		for (size_t i = 0; i < size; i++)
		{
			accounts[i].print();
		}
		system("pause");
	}

	void addAccount()
	{
		system("cls");
		cout << "Client: " << name << endl;
		cout << "Add account" << endl;
		cout << "-----------------" << endl;
		Account a;
		vector<string> itemCurr;
		for (size_t i = 0; i < 3; i++)
		{
			itemCurr.push_back(currency[i].kodNBU);
		}
		cout << "Select currency: ";
		int i = Menu::select_vertical(itemCurr, HorizontalAlignment::Left, 5);
		a.curr = &currency[i];
		for (size_t i = 8; i < 29; i++)
		{
			a.iban[i] = rand() % 10 + '0';
		}
		a.iban[29] = '\0';
		append(accounts, size, a);
		
	}

	void closeAccount()
	{

	}

	void workWithAccount()
	{

	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << "Client: " << name << endl;
			cout << "---------------" << endl;
			int c = Menu::select_vertical({ "Add account", "Remove account", "Print all accounts", "Work with account", "Return to bank" }, HorizontalAlignment::Left, 3);
			//cin >> c;
			//cin.ignore();
			switch (c)
			{
			case 0:
				addAccount();
				break;
			case 1:
				closeAccount();
				break;
			case 2:
				print();
				break;
			case 3:
				workWithAccount();
				break;
			case 4:
				//save();
				return;
			default:
				break;
			}
		}
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
		system("cls");
		cout << "Add client" << endl;
		cout << "-----------------" << endl;
		Client c;
		cout << "Enter name : ";
		c.name = getString();
		append(clients, size, c);
		cout << "Client added" << endl;
		system("pause");
	}

	void removeClient()
	{

	}

	void workWithClients()
	{
		system("cls");
		cout << "Choice client" << endl;
		cout << "-----------------" << endl;

		vector<string> menuItem;
		for (size_t i = 0; i < size; i++)
		{
			menuItem.push_back(clients[i].name);
		}

		int c = Menu::select_vertical(menuItem, HorizontalAlignment::Left, 3);;

		clients[c].menu();

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

