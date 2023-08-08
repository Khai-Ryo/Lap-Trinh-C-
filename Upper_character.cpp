#include<iostream>
using namespace std;

char Upper(char str)
{
	 if('a' <= str && str <= 'z'){
        str = str - ((int)('a') - (int)('A'));
    }
	return str;
}

int main()
{
	char a;
	do
	{
		cout << "Enter character: ";
		cin >> a;
		if  ('a' > a && a < 'z')
			cout << "\nInvalid, re-enter please!\n";
	} while ('a' > a && a < 'z');
	char upper = Upper(a);
	cout << upper << endl;

	return 0;
}
