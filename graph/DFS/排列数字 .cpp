//#include<iostream>
//using namespace std;
//int n;
//const int N = 1e6;
//bool st[N];
//int a[N];
//void dfs(int t)
//{
//	if (t == (n+1))
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			cout << a[i] << ' ';
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			st[i] = true;
//			a[t] = i;
//			dfs(t + 1);
//			st[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	dfs(1);
//}