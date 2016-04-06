#include <iostream>
#include <stdlib.h>

// This program illustrates our conventions for implementing basic array sorts
// The main program function is a driver that initializes an array of integer
//   (either with random values or from standard input), calls a sort function to
//   sort that array, then prints out the ordered result.

//   Templates allow the implementation to be used to sort items of data type for 
//   which comparison and assignment are defined.

//   The sort function here is a version of insertion sort. It uses a template 
//   function that compares 2 items and exchanges them if necessary to make the 
//   second not less ( < ) than the first.

//   we can change the driver to sort any type of data for which operator "<" is
//   defined without modifying sort at all.    

using namespace std;

template <class Item>


void exch(Item &A, Item &B) 
{
	Item t = A;
	A = B;
	B = t;
}

template <class Item>
void compexch(Item &A, Item &B)
{
	if ( B < A )
		exch(A, B);
}

template <class Item>
void sort(Item a[], int l, int r)
{
	for (int i=l+1; i <= r; i++) 
		for (int j=i; j > l; j--)
			compexch(a[j-1], a[j]);
	
}

// Main program 
int main(int argc, char *argv[])
{
	int i, N = atoi(argv[1]);
	int sw = atoi(argv[2]);

	int *a = new int[N];
	if (sw) 
	    for (i = 0; i < N; i++)
		a[i] = 1000*(1.0*rand()/RAND_MAX);
	else
	{
	   N = 0;
	   while ( cin >> a[N] )  N++;
	}
	sort(a, 0, N-1);
	for ( i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
}

 					
	   		

		 



