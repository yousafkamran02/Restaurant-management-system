#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct node
{
	int de_num, ph_no;
	double tar;
	string name;
	node* next;
};
node* head = NULL, * newnode, * tep;
int len_count = 0;
void add_cus()
{
		newnode = new node;
		cout << "Enter Deal#:";
		cin >> newnode->de_num;
		system("CLS");
		cout << "Enter Deal#:"<< newnode->de_num;
		cout << "\n--------------------" << endl;
		cout << "Enter Customer Name:";
		cin >> newnode->name;
		cout << "\n--------------------" << endl;
		cout << "Enter Customer Phone Number:";
		cin >> newnode->ph_no;
		cout << "\n--------------------" << endl;
		cout << "Tracking Number is:";
		newnode->tar = rand()%100;
		cout<<newnode->tar;
		cout << "\n--------------------" << endl;
		system("pause");
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
			tep = newnode;
		}
		else
		{
			tep->next = newnode;
			tep = newnode;
		}
}
void dis_al_or()
{
	if (head == NULL)
	{
		cout << "------------------------------" << endl;
		cout << "||\tNo Orders\t    ||" << endl;
		cout << "------------------------------" << endl;
	}
	else
	{
		node* trv = head;
		int counter = 0;
		while (trv != NULL)
		{
			for (int i = 0; i < 34; i++)
			{
				cout << "-";
			}
			cout << endl;
			cout << "Name:" << trv->name <<endl;
			cout << "Phone Number:" << trv->ph_no <<endl;
			cout << "Deal  Number:" << trv->de_num <<endl;
			cout << "Tracking  Number:" << trv->tar <<endl;
			cout << "Index:" << counter + 1 <<endl;
			for (int i = 0; i < 34; i++)
			{
				cout << "-";
			}
			cout << endl;
			counter++;
			trv = trv->next;
			len_count++;

		}
		for (int i = 0; i < 34; i++)
		{
			cout << "-";
		}
		cout << endl;
		cout << "Total Orders in the Pending = " << counter << endl;
		for (int i = 0; i < 34; i++)
		{
			cout << "-";
		}
		cout << endl;
	}
	system("pause");
}
void ser_or()
{
	node* search_node = head;
	int srch;
	int count = 1;
	cout << "Enter Tracking number: ";
	cin >> srch;
	bool found = false;
	if (head == NULL)
	{
		cout << "\nNo Orders Pending " << endl;
	}
	else
	{
		while (search_node != NULL)
		{
			if (srch == search_node->tar || srch == search_node->ph_no)
			{
				cout << "\n\t\tFull name: " << search_node->name << endl;
				cout << "\t\tPhone number: " << search_node->ph_no << endl;
				cout << "\t\tOrder number: " << search_node->ph_no << endl;
				found = true;
				break;
			}
			search_node = search_node->next;
			count++;
		}
	}
	if (found == true)
	{

		cout << "\t\tIndex of the Order = " << count << endl;
	}
	else
	{
		cout << "Order cannot be found " << endl;
	}
	system("pause");
}
void des_or()
{
	int pos;
	node* next_node;
	tep = head;
	cout << "Enter your Index number of Order to despatch:";
	cin >> pos;
	cout << endl;
	if (head == NULL)
	{
		system("CLS");
		cout << "List is Empty " << endl;
	}
	else if (pos > len_count)
	{
		system("CLS");
		cout << "Invalid Order Position " << endl;
	}
	else if (pos == 1)
	{
		tep = head;
		head = head->next;
		delete tep;
		system("CLS");
		cout << "Order has been dispatched " << endl;
	}
	else
	{
		for (int i = 2; i < pos; i++)
		{
			tep = tep->next;
		}
		next_node = tep->next;
		tep->next = next_node->next;
		delete next_node;
		cout << "Order has been dispatched" << endl;
	}
}
void del_al_or()
{
	if (head == NULL)
	{
		cout << " No order Received" << endl;
	}
	else
	{
		tep = 0;
		tep = head;
		while (head != NULL)
		{
			head = head->next;
			delete tep;
		}
		cout << "\t_________________________________________________" << endl;
		cout << "\t|\tALL Pending Orders has been deleted\t|" << endl;
		cout << "\t_________________________________________________" << endl;
	}
}
void menu()
{
	cout << "\t\t\tMenu" << endl;
	for (int i = 0; i <= 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "\t1.Add Order" << endl;
	cout << "\t2.Display all Orders" << endl;
	cout << "\t3.Search a order" << endl;
	cout << "\t4.Dispatch a order" << endl;
	cout << "\t5.Clear All orders" << endl;
	cout << "\t6.Exit" << endl;
	for (int i = 0; i <= 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "\t\t\t\tCreated By:\n\t\t\t\t\tYousafKamran" << endl;
	cout << "Enter Choice:";

}
void fo_menu()
{
	cout << "Deal#1" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "      Name" << "\t\t\tQty" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Grill Burger" << "\t\t\t1" << "\nCoke\t\t\t\t500ml"<<endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Deal#2" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "      Name" << "\t\t\tQty" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Beef Burger" << "\t\t\t1" << "\nCoke\t\t\t\t500ml" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Deal#3" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "      Name" << "\t\t\tQty" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Zinger Burger" << "\t\t\t1" << "\nSprite\t\t\t\t500ml" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Deal#4" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "      Name" << "\t\t\tQty" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;
	cout << "Chicken Wrap" << "\t\t\t1" << "\nSprite\t\t\t\t500ml" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << "=";
	}cout << endl;

}
int main()
{
	int op;
	char opt = 1;;
	do
	{

		menu();
		cin >> op;
		cout << endl;
		system("CLS");
		if (op == 1)
		{
			cout << "******************Add Order******************" << endl;
			fo_menu();
			add_cus();
		}
		else if (op == 2)
		{
			len_count = 0;
			cout << "******************All Order******************" << endl;
			dis_al_or();
		}
		else if (op == 3)
		{
			cout << "******************Search Order******************" << endl;
			ser_or();
		}
		else if (op == 4)
		{
			cout << "******************Dispatch Order******************" << endl;
			dis_al_or();
			des_or();
		}
		else if (op == 5)
		{
			cout << "******************Delete All Order******************" << endl;
			del_al_or();
		}
		else if (op == 6)
		{
			cout << "Goodbye" << endl;
			exit(0);
		}
		else
		{
			cout << "Invalid Option " << endl;
		}
		cout << "Do you want to continue(Y/N):";
		cin >> opt;
		cout << endl;
		if (opt == 'n' || opt == 'N')
		{
			cout << "Goodbye" << endl;
		}
		system("CLS");
	} while (opt == 'y' || opt == 'Y');
}