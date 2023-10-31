#include<iostream>
#include<iomanip>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
}

int Find(int* a, const int size, int i, int smallestOdd, int smallestOddIndex)
{
	
	for (int i = 0; i < size; i++) 
	{
		if (a[i] % 2 != 0) {
			if (smallestOdd == -1 || a[i] < smallestOdd) {
				smallestOdd = a[i];
				smallestOddIndex = i;
			}
		}
	}
	return smallestOddIndex;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];
	int Low = 1;
	int High = 31;
	Create(a, n, Low, High);
	cout << "mas = ["; Print(a, n); cout << "  ]" << endl;
	cout << "Index of the smallest odd: [" << Find(a, n, 0, -1, -1) << "]" << endl;
	return 0;
}
