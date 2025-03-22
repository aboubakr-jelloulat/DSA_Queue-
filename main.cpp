#include "includes/clsMyQueue.h"


// g++ -std=c++11

int main(void)
{
	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);


	cout << "\nQueue : " << endl;
	MyQueue.Print();

	cout << "\nQueue Size : " << MyQueue.Size();
	cout << "\nQueue Front : " << MyQueue.front();
	cout << "\nQueue Back : " << MyQueue.back();

	MyQueue.pop();

	cout << "\n\nQueue after pop() : \n";
	MyQueue.Print();

	// Extenstion #1

	cout << endl << endl << "Item (2) : " << MyQueue.GetItem(2);

	// Extenstion #1
	MyQueue.Reverse();
	cout << "\n\nQueue after reverse : " << endl;
	MyQueue.Print();

	// Extention #3
	MyQueue.UpdateItem(2, 600);
	MyQueue.Print();

	// Extention #4

	MyQueue.InsertAfter(2, 800);
	MyQueue.Print();

	// Extention #5

	MyQueue.InsertAtFront(1000);
	MyQueue.Print();

	// Extention #6

	MyQueue.InsertAtBack(2000);
	MyQueue.Print();


	MyQueue.Clear();
	MyQueue.Print();


	

	return 0;
}