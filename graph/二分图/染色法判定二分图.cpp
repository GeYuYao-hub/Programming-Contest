//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], c[N],h[N];
//bool st[N];
//int n, m;
//int idx = 0;
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool dfs(int x,int C)
//{
//	c[x] = C;
//	st[x] = true;
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!st[j])
//		{
//			if (!dfs(j, 1 - C))
//			{
//				return false;
//			}
//		}
//		else
//		{
//			if (c[j] == c[x])
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//bool dfs_M()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			if (!dfs(i, 0))
//			{
//				return false;
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//	if (dfs_M())
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//}