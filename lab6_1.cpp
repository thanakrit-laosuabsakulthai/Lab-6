#include <iostream>
using namespace std;

int main()
{
	int input_integer;
	int even_number_count = 0;
	int odd_number_count = 0;
	
	cout << "Enter an integer: ";
	cin >> input_integer;
	
	while (input_integer != 0)
	{
		// Process the input_integer to count even and odd numbers
		if (input_integer % 2 == 0)
		{
			even_number_count++;
		}
		else
		{
			odd_number_count++;
		}

		cout << "Enter an integer: ";
		cin >> input_integer;
	}
	cout << "#Even numbers = " << even_number_count << endl;
	cout << "#Odd numbers = " << odd_number_count << endl;
	return 0;
}
