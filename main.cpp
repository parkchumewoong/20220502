#include <iostream>

using namespace std;



int main()
{
	//1 == ????
	int Map[10][10] = {
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 2, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	bool Running = true;

	while (Running)
	{
		//Input()
		char Direction = 'W';
		cin >> Direction;

		//Process();
		if (Direction == 'Q')
		{
			Running = false;
		}

		//Render()
		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (Map[Y][X] == 1)
				{
					cout << '=' << ' ';
				}
				else if (Map[Y][X] == 0)
				{
					cout << ' ' << ' ';
				}
				else if (Map[Y][X] == 2)
				{
					cout << 'G' << ' ';
				}
			}
			cout << '\n';
		}
	}





	return 0;
}