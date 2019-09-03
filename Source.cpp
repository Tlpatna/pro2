#include<iostream>
using namespace std;
float balance(int,float &m);
int main()
{
	int chc;
	float m = 10000.00;
	cout << "Exit with 0\n";
	cout << "Your balance = " << m << endl;
	do {
			cout << "Input command (1 withdraw , 2 deposit):";
		cin >> chc;

		balance(chc, m);
	} while (chc != 0);
}
float balance(int chc,float &m)
{
	float w;
	if (chc != 0) {

		cout << "Input amount :";
		cin >> w;
		if (chc == 1)
			m -= w;

		if (chc == 2)
			m += w;

		cout << "Your balance :" << m << endl;
	}
	
	return(chc,m);
}
