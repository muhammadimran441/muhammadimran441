#include <iostream> 

using namespace std;

struct node

{

	double data;

	node*www;

};

class list

{

private:

	node*head, *tail;

public:

	list();

	void createnode(double value);

	void display();

	void insert_start(double value);

	void insert_position(int pos, double value);

	void delete_first();

	void delete_last();

	void delete_position(int pos);

};

list::list()

{

	head = NULL;

	tail = NULL;

}

void list::createnode(double value)

{

	node*stars = new node;

	stars->data = value;

	stars->www = NULL;

	if (head == NULL)

	{

		head = stars;

		tail = stars;

		stars = NULL;

	}

	else

	{

		tail->www = stars;

		tail = stars;

	}

}

void list::display()

{

	node*stars;

	stars = head;

	while (stars != NULL)

	{

		cout << stars->data << "\t";

		stars = stars->www;

	}

}

void list::insert_start(double value)

{

	node*stars = new node;

	stars->data = value;

	stars->www = head;

	head = stars;

}



void list::insert_position(int pos, double value)

{

	node*pre = new node;

	node*cur = new node;

	node*stars = new node;

	cur = head;

	for (int i = 1; i < pos; i++)

	{

		pre = cur;

		cur = cur->www;

	}

	stars->data = value;

	pre->www = stars;

	stars->www = cur;

}



void list::delete_first()

{

	node*stars = new node;

	stars = head;

	head = head->www;

	delete stars;

}



void list::delete_last()

{



	node * stars;

	stars = head;

	while (stars->www != tail)

	{

		stars = stars->www;

	}

	tail = stars;

	delete stars->www;

	tail->www = NULL;

}



void list::delete_position(int pos)

{

	node * stars = new node;

	node * xyz = new node;

	xyz = head;

	for (int i = 1; i < pos; i++)

	{

		stars = xyz;

		xyz = xyz->www;

	}

	stars->www = xyz->www;

	delete xyz;

}
