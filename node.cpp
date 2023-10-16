#include <iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
	Node()
	{
		data = 0;
		next = NULL; 
	}
};
int main()
{
	Node *newnode1 = new Node;
	newnode1 -> data = 10;
	Node *newnode2 = new Node;
	newnode2 -> data = 20;
	Node *newnode3 = new Node;
	newnode3 -> data = 30;
	
	newnode1 -> next = newnode2;
	newnode2 -> next = newnode3;
	cout << "Data =" <<newnode1 -> data << " Self Address =" << newnode1 << " Next Address =" << newnode1 -> next << endl;
	cout << "Data =" <<newnode2 -> data << " Self Address =" << newnode2 << " Next Address =" << newnode2 -> next << endl;
	cout << "Data =" <<newnode3 -> data << " Self Address =" << newnode3 << " Next Address =" << newnode3 -> next << endl;
	return 0;
}