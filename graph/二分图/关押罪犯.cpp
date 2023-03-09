//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], idx;
//int color[N];
//int n, m;
//int mid;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool dfs(int x,int c)
//{
//	color[x] = c;
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (w[i]<=mid)
//		{
//			continue;
//		}
//		if (color[j])
//		{
//			if (color[j] == c)
//			{
//				return false;
//			}
//		}
//		else
//		{
//			if (!dfs(j, 3 - c))
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//bool check(int x)
//{
//	memset(color, 0, sizeof color);
//	for (int i = 1; i <= n; i++)
//	{
//		if (color[i] == 0)
//		{
//			if (!dfs(i,1))
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main()
//{	
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	int l = 0;
//	int r = 1e9;
//	while (l < r)
//	{
//		mid = (l + r) >> 1;
//		if (check(mid))
//		{
//			r = mid;
//		}
//		else
//		{
//			l = mid + 1;
//		}
//	}
//	cout << l << endl;
//}