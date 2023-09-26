// -------------------------------------------------------------
// Naomi Nash - Saint Leo University - September 26, 2021
// Homework 2 - Modifying a queue
// -------------------------------------------------------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Counts the elements within the queue
int count(queue<int>q)
{
	queue<int>temp = q;
	int cnt = 0;

	// Keeps counting until the queue becomes empty
	while (!temp.empty())
	{
		cnt++;
		temp.pop();
	}

	// Returns the count
	return cnt;
}

// Prints the elements within the queue
void show(queue<int>q)
{
	queue<int>temp = q;

	// Keeps printing the elements until the queue is empty
	while (!temp.empty())
	{

		// Prints the element
		cout << temp.front() << " ";

		// Pops the element from the queue
		temp.pop();

	}
	cout << endl;
}

// The main function
int main()
{
	queue<int>q;

	// Enqueues the first element
	q.push(4);

	// Shows the queue after enqueue
	cout << "The queue after an enqueue of 4 is: ";
	show(q);

	// Enqueues the next element
	q.push(5);

	// Shows the queue after next enqueue
	cout << "The queue after an enqueue of 5 is: ";
	show(q);

	// Enqueues the next elements
	q.push(6);

	// Shows the queue after next enqueue
	cout << "The queue after an enqueue of 6 is: ";
	show(q);

	// Enqueues the last element
	q.push(10);

	// Shows the queue after the last enqueue
	cout << "The queue after an enqueue of 10 is: ";
	show(q);

	// Displays the number of elements in the queue
	cout << "There are " << count(q) << " elements counted in the queue." << endl;

	// Displays the first element in the queue
	cout << "The front element is: " << q.front() << endl;

	// Displays the last element in the queue
	cout << "The back element is: " << q.back() << endl;

	// Dequeues the first element
	q.pop();

	// Shows the queue after the first dequeue
	cout << "The queue after a dequeue is: ";
	show(q);

	// Dequeues the next element
	q.pop();

	// Shows the queue after the next dequeue
	cout << "The queue after another dequeue is: ";
	show(q);

	// Prints how many elements are in the queue
	cout << "There are " << count(q) << " elements counted in the queue." << endl;

	return 0;
}
