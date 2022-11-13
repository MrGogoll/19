// 

#include <iostream>
using namespace std;
int main()
{
    int a, b,c;
    cin >> a >> b;
	c = 0;
	for (int i = a-1; i < b; i++)
	{
		if (i % 100 == 00|| i % 100 == 11|| i % 100 == 22|| i % 100 == 33|| i % 100 == 44|| i % 100 == 55|| i % 100 == 66|| i % 100 == 77|| i % 100 == 88|| i % 100 == 99) {
			c += 1;
		}
	}
	cout << c;

}

