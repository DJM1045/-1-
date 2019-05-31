/*1.根据字符串的字典序排序。
  2..根据字符串的长度排序。*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	bool Dicsort = true;
	bool Lensort = true;
	int n;
	cin >> n;
	vector<string> v;
	v.resize(n);
	for (auto& str : v)
		cin >> str;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i - 1].size() >= v[i].size())
		{
			Lensort = false;
			break;
		}
	}
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i - 1] >= v[i])
		{
			Dicsort = false;
			break;
		}
	}
	if (Lensort && Dicsort)
		cout << "both" << endl;
	if (!Lensort && Dicsort)
		cout << "lexicographically" << endl;
	if (Lensort && !Dicsort)
		cout << "lengths" << endl;
	if (!Lensort && !Dicsort)
		cout << "none" << endl;
	return 0;
}
