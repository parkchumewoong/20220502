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

	cout << Result << endl;

	// for (;;)
	// {
	// }

	int Score = 0;

	cin >> Score;

	if ( Score >= 80 && Score < 90)
	{
		cout << "B" << endl;
	}
	else if (Score >= 90 && Score < 100)
	{
		cout << "A" << endl;
	}
	


	cout << Korean[0] << endl;

	return 0;
}