//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<cstring>
//using namespace std;
//typedef pair<int, int>PII;
//
//const int N = 5e2 + 10;
//
//int n, k;
//int fa[N];
//double res = 0;
//
//struct Node
//{
//	int a, b;
//	double c;
//	bool operator<(const Node& t)const
//	{
//		return c < t.c;
//	}
//};
//
//PII g[N];
//Node d[N*N];
//int cnt = 0;
//bool st[N];
//
//double get_dis(PII a, PII b)
//{
//	return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second,2));
//}
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
//	int a = fa[x];
//	int b = fa[y];
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
//bool check()
//{
//	memset(st, false, sizeof st);
//	int ans = 0;
//	for (int i = 1; i <=n; i++)
//	{
//		int x = find(i);
//		if (!st[x])
//		{
//			ans++;
//			st[x] = true;
//		}
//	}
//	if (ans == k)
//	{
//		return true;
//	}
//	return false;
//}
//
//void kruskal()
//{
//	if (check())
//	{
//		return;
//	}
//	for (int i = 0; i < cnt; i++)
//	{
//		int a = d[i].a;
//		int b = d[i].b;
//		double c = d[i].c;
//		int x = find(a);
//		int y = find(b);
//		if (x != y)
//		{
//			merge(x, y);
//			res = c;
//			if (check())
//			{
//				return;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		fa[i] = i;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		PII t;
//		cin >> t.first >> t.second;
//		g[i] = t;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			d[cnt++] = {i,j, get_dis(g[i], g[j]) };
//		}
//	}
//
//	sort(d, d + cnt);
//
//	kruskal();
//
//	printf("%0.2lf", res);
//}