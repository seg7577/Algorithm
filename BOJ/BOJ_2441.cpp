#include <iostream>
//#include <string>
//#include <algorithm>

using namespace std;
int num;

int main()
{
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int k = i; k < num; k++)
			cout << '*';
		cout << '\n';
	}

	return 0;
}
