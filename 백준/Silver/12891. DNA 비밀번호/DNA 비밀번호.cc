#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s, p;
	cin >> s >> p;	

	string dnaString;
	cin >> dnaString;

	char ACGT[4] = { 'A','C','G','T' };
	int ACGTNum['Z'] = {};	
	for (int i = 0; i < 4; i++)
	{
		cin >> ACGTNum[ACGT[i]];
	}

	int newACGTNum['Z'] = {};
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (dnaString[i] == ACGT[j])
				newACGTNum[ACGT[j]]++;
		}
	}

	int answer = 0;
	int start_index = 0;
	int end_index = start_index + p - 1;
	while (end_index < s)
	{
		bool flag = false;
		for (int i = 0; i < 4; i++)
		{
			if (ACGTNum[ACGT[i]] > newACGTNum[ACGT[i]])
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			answer++;
		}
		start_index++;
		end_index++;
		
		
		if (end_index < s)
		{
			newACGTNum[dnaString[start_index - 1]]--;
			newACGTNum[dnaString[end_index]]++;
		}
		else 
			break;
	}
	cout << answer << '\n';

	return 0;
}