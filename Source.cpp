#include<iostream>
#include"_linked_list.h"
using namespace std;
int main()
{
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	obj.createnode(55);
	cout << "\n........................\n";
	cout << "\n............1st we are displaying all nodes....................\n";
	cout << "\n..........................\n";
	obj.display();
	cout << "\n.........................\n";
	cout << "\n............now we are inserting an element at End..................\n";
	cout << "\n.......................\n";
	obj.createnode(15);
	obj.display();
	cout << "\n.......................\n";
	cout << "\n..........now we are inserting an element at start......................\n";
	cout << "\n.............................\n";
	obj.insert_start(10);
	obj.display();
	cout << "\n..........................\n";
	cout << "\n.........................now we are inserting an element at particular.................\n";
	cout << "\n......................\n";
	obj.insert_position(5, 60);
	obj.display();
	cout << "\n..........................\n";
	cout << "\n.......now we are deleting an element from Start....................\n";
	cout << "\n........................\n";
	obj.delete_first();
	obj.display();
	cout << "\n.......................\n";
	cout << "\n.......now we are deleting an element from End................\n";
	cout << "\n.......................\n";
	obj.delete_last();
	obj.display();
	cout << "\n.......................\n";
	cout << "\n.........now we are deleting an elementfrom Particular place................\n";
	cout << "\n.......................\n";
	obj.delete_position(4);
	obj.display();
	cout << "\n.......................\n";
	cout << "\n........now we are adding an element  at location 3.................\n";
	cout << "\n.......................\n";
	obj.insert_position(3, 60);
	obj.display();
	cout << "\n........................\n";

	system("pause");
	return 0;
}
