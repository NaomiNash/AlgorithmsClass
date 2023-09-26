// --------------------------------------------------
//   Naomi Nash - Saint Leo University - 2 Nov 2021
// Builds a heap using an integer value for the 
// size of the heap and other integer values for the
// values within the heap. After the values are 
// inserted, it reorganizes the heap into the
// correct order
// --------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

// Heapify
void heapify(vector<int>& heap, int n)
{
	while (n > 0)
	{
		if (heap[n] < heap[n / 2]) // Checks for parent node
		{
			swap(heap[n], heap[n / 2]); // Swaps values to their correct spots
			n = n / 2;
		}
		else
			return;
	}
}

// Main 
int main() {
	int n, x; // Declares new integers
	cin >> n; // Assigns the size of heap
	vector<int> heap; // Declares a binary heap using vector

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		heap.push_back(x); // Inserts the values that are entered into the heap
		heapify(heap, i); // Positions the inserted values in their new order
	}

	for (int i = 0; i < n; i++)
	{
		cout << heap[i] << " "; // Prints the newly ordered heap
	}
}
