//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 1e6+10;
//
//int fa[N];
//int val[N];
//
//struct Node
//{
//	int a, b, c;
//	bool operator<(const Node& t)const
//	{
//		return c < t.c;
//	}
//};
//
//Node g[N];
//
//int find(int x)
//{
//	if (x == fa[x])
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//}
//
//void merge(int x, int y)
//{
//	int a = find(x);
//	int b = find(y);
//	if (a == b)
//	{
//		return;
//	}
//	else
//	{
//		fa[x] = y;
//	}
//}
//
//long long res = 0;
//
//void solve()
//{
//	res = 0;
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//		val[i] = 1;
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[i] = { a,b,c };
//	}
//
//	sort(g, g + n - 1);
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int x = g[i].a;
//		int y = g[i].b;
//		int w = g[i].c;
//		x = find(x);
//		y = find(y);
//		if (x == y)
//		{
//			continue;
//		}
//		merge(x, y);
//		res += (val[x] * val[y] -1 ) * (w + 1);
//		val[y] += val[x];
//	}
//
//	cout << res << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}