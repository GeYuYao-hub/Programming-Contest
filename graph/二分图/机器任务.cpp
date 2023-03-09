//#include<iostream>
//#include<cstring>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//const int N = 1e4;
//bool st[N];
//int match[N];
//int res = 0;
//unordered_map<int, vector<int> >mp;
//bool find(int x)
//{
//	for (int i = 0; i < mp[x].size(); i++)
//	{
//		if (st[mp[x][i]])
//		{
//			continue;
//		}
//		st[mp[x][i]] = true;
//		if (match[mp[x][i]] == 0 || find(match[mp[x][i]]))
//		{
//			match[mp[x][i]] = x;
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int n, m, k;
//	while (cin >> n ) {
//		if (n == 0)
//		{
//			break;
//		}
//		cin >> m >> k;
//		memset(match, 0, sizeof match);
//		res = 0;
//		mp.clear();
//		for (int i = 0; i < k; i++)
//		{
//			int t, a, b;
//			cin >> t >> a >> b;
//			if (a == 0 || b == 0)
//			{
//				continue;
//			}
//			mp[a].push_back(b);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			memset(st, false, sizeof st);
//			if (find(i))
//			{
//				res++;
//			}
//		}
//		cout << res<<endl;
//	}
//}