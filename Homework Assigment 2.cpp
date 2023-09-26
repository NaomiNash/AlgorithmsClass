
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(queue<int>q)

{

	queue<int>temp = q;

	int cnt = 0;

	//the loop will go on until the queue temp becomes empty

	while (!temp.empty())

	{

		cnt++;

		temp.pop();

	}

	//returning cnt

	return cnt;

}

//show function will print the queue

void show(queue<int>q)

{

	//putting the value of q into temp

	queue<int>temp = q;

	//the loop will go on until the queue temp becomes empty

	while (!temp.empty())

	{

		//printing the value from front of the queue

		cout << temp.front() << " ";

		//deleting that value

		temp.pop();

	}

	cout << endl;

}

int main() {

	queue<int>q;

	q.push(4);

	cout << "The queue after the changes is: ";

	show(q);

	q.push(5);

	cout << "The queue after the changes is: ";

	show(q);

	q.push(6);

	cout << "The queue after the changes is: ";

	show(q);

	q.push(10);

	cout << "The queue after the changes is: ";

	show(q);

	cout << "The number of elements present in the queue are: " << count(q) << endl;

	cout << "The first element from front is: " << q.front() << endl;

	cout << "The first element from back is: " << q.back() << endl;

	q.pop();

	cout << "The queue after the changes is: ";

	show(q);

	q.pop();

	cout << "The queue after the changes is: ";

	show(q);

	cout << "The number of elements present in the queue are: " << count(q);

	return 0;

}