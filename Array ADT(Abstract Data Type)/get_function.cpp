// array::get() function
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// array initialisation
	array<int, 3> arr = { 10, 20, 30 };

	// function call
	cout << "arr[0] = " << get<0>(arr) << "\n";
	cout << "arr[1] = " << get<1>(arr) << "\n";
	cout << "arr[2] = " << get<2>(arr) << "\n";

	return 0;
}
