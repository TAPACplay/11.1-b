#include<iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n;

	cout << " Код оператора (мождтві коди 067, 050, 063, 096, 066, 073 ).\n" ;
	cin >> n;

	switch (n)
	{
	case 67:
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Київстар." << endl;
		break;

	case 50:
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Vodafone." << endl;
		break;

	case 63:
		cout << " " << endl;
		cout << " Телефонний код" << n << " належить оператору Lifecell." << endl;
		break;

	case 96:
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Київстар." << endl;
		break;

	case 66:
		cout << " " << endl;
		cout << " Телефонний код " << n << " належить оператору Vodafone." << endl;
		break;

	case 73:
		cout << " " << endl;
		cout << " Телефонний код" << n << " належить оператору Lifecell." << endl;
		break;


	default:
		cout << " " << endl;
		cout << " Такого коду не існує або в нашій базі немає цього коду!" << endl;
		break;
	}
}