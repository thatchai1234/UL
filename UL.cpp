#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch;
	string u, p, u1, p2;
	do {
		cout << "/////////////////MENU///////////////" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit Program" << endl;
		cout << endl;
		cout << "________________________________________" << endl;
		cout << endl;
		cout << "Enter Menu :";
		cin >> ch;

		if (ch == '1')
		{
			cout << "********Register********" << endl;
			cout << "input Username :";
			cin >> u;
			cout << "input Password :";
			cin >> p;
		}
		else if (ch == '2')
		{

			cout << "input Username :";
			cin >> u1;
			cout << "input Password :";
			cin >> p2;
			if (u == u1 && p== p2)
			{
				cout << "Username or password correct" << endl;

			}

			else
			{
				cout << "!!!!!Username or password incorrect Please try again!!!!!";

			}

		}
	}

	while (ch != 'Q' && ch != 'q');
	cout << "Exit Program\t" << endl;

	return(0);
}