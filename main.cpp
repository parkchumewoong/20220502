#include <iostream>

using namespace std;

int main()
{
	int Korean[10] = { 0,};
	
	// >, <, ==, >=, <=,!=  
	// and &&
	//or ||
	
	bool Result = true;
	Result = false;
	
	Result = 10 > 2;

	// cout << Result << endl;

	int con = 0;

	for (int i = 0; i <= 100; i++)
	{
		cout << i << endl;
		con +=  i;
	}
	cout << con << endl;
	return 0;
}