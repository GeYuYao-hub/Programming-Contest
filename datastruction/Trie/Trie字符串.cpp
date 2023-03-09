//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int son[N][26], idx, cnt[N];
//void insert(string str)
//{
//	int p = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u]) son[p][u] = ++ idx;
//		p = son[p][u];
//	}
//
//	cnt[p]++;
//}
//int query(string str)
//{
//	int p = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u])
//		{
//			return 0;
//		}
//		p = son[p][u];
//	}
//
//	return cnt[p];
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string op;
//		string str;
//		cin >> op >> str;
//		if (op == "I")
//		{
//			insert(str);
//		}
//		else if (op == "Q")
//		{
//			cout << query(str) << endl;
//		}
//	}
//}