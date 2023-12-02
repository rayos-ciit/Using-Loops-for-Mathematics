#include <iostream>
using namespace std;

int main()

{

	system("color 4");
	int optsel, number, num1, num2, num3, i, fn1 = 0, fn2 = 1, fn3, rows, coef = 1, count;


	cout << "-------------------------------------[Welcome to the loophole! press enter to start.]-----------------------------------" << endl;

	cin.ignore();

	cout << "[Please select the assigned number to determine operation: ]\n [1] Prime Numbers\n [2] Fibonacci Sequence\n [3] Pascal's Triangle" << endl;

	bool isoptsel = false;

	do
	{
		cin >> optsel;

		if (optsel < 4)

		{
			isoptsel = true;
		}

		else cout << "[Please select a number from 1 to 3.]\n [1] Prime Numbers\n [2] Fibonacci Sequence\n [3] Pascal's Triangle" << endl;

	} while (!isoptsel);

	switch (optsel)

	{

	case 1:

		cout << "[You have selected 'Prime Numbers' operation] \n [Input a number to find the prime number/s of: ]" << endl;
		cin >> number;

		for (num1 = 1;num1 <= number;num1++) {

			count = 0;

			if (number % num1 == 0)

				for (num2 = 1; num2 <= num1; num2++)

					if (num1 % num2 == 0)

						count++;

			if (count == 2)

				cout << "The prime factor/s of " << number << " is " << num1 << endl;

		}

		break;

	case 2:

		cout << "[Enter the number of elements desired: ]" << endl;

		cin >> number;

		cout << "[Fibonacci sequence until the given number of elements: ]" << endl;
		cout << fn1 << " " << fn2 << " ";

		for (i = 2;i < number;++i) {

			fn3 = fn1 + fn2;

			cout << fn3 << " ";

			fn1 = fn2;

			fn2 = fn3;

		}

		break;

	case 3:
		cout << "[Enter the number of desired rows: ]" << endl;
		cin >> rows;

		for (int i = 0; i < rows; i++) {

			for (int space = 1; space <= rows - i; space++)
				cout << "  ";

			for (int j = 0; j <= i; j++) {

				if (j == 0 || i == 0)
					coef = 1;
				else
					coef = coef * (i - j + 1) / j;

				cout << coef << "   ";
			}
			cout << endl;
		}

	}
	return 0;
}







