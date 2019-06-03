#include <iostream>
using namespace std;


void movem(int start, int end, int storage, int N)
{
	if (N == 1)
	{
		cout << "Move disc from peg " << start << " to peg " << end << endl;

	}
	else 
	{
		movem(start, storage, end, N - 1);
		cout << "Move a disc from peg " << start << " to peg " << end << endl;
		movem(storage, end, start, N - 1);
	}
}


int main()
{
	int N;
	cout << "Hope many discs do you have? " << endl;
	cin >> N;
	movem(1, 3, 2, N);

	return 0;
}




