//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N],h[N];
//int idx = 0;
//bool st[N];
//int res = 0;
//int ans = N;
//int n;
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int dfs(int x)
//{
//	st[x] = true;
//
//	int size = 0, sum = 0;
//
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//
//		if (st[j])
//		{
//			continue;
//		}
//
//		int s = dfs(j);
//
//		size = max(size, s);
//		sum += s;
//	}
//
//
//	size = max(size, n - sum - 1);
//	ans = min(ans, size);
//
//	return sum + 1;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n;
//	for (int i = 0; i < n-1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//
//	dfs(1);
//
//	cout << ans << endl;
//	
//	return 0;
//}