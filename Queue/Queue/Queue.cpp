#include "pch.h"
#include <iostream>
#include <queue>

using namespace std;

/*
10
1 42
2
1 14
3
1 28
3
1 60
1 78
2
2
*/

int main()
{
	queue<int> que;
	int input= 0, turns=0;
	cin >> turns;
	for (int i = 0; i < turns; i++)
	{
		cin >> input;
		if (input == 1)
		{
			cin >> input;
			que.push(input);
		}
		if (input == 2)
		{
			que.pop();
		}
		if (input == 3)
		{
			cout << que.front() << endl;
		}
	}
}

