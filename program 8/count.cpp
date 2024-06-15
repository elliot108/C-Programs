#include <iostream>
#include <string>

int main()
{
	using namespace std;
	int number, count = 0;
cout << "Enter a number: ";
cin >> number;
		for (; number != 0; ++count)
		{
			cin >> number;
		};
		cout << "Total of " << count << " inputs.\n";
		system("pause"); // I'm aware that this way is very bad
	return 0;
}