//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int n1, n2, m;
//int e[N], ne[N], h[N];
//bool st[N];
//int match[N];
//int idx = 0;
//int res = 0;
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool find(int x)
//{
//	for (int i = h[x]; i != -1; i = ne[i]) {
//		int j = e[i];
//		if (!st[j]) {
//			st[j] = true;
//			if (match[j] == 0 || find(match[j]))
//			{
//				match[j] = x;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main() {
//	memset(h, -1, sizeof h);
//	cin >> n1 >>n2>> m;
//	while (m--)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//	}
//	for (int i = 1; i <= n1; i++)
//	{
//		memset(st, false, sizeof st);
//		if (find(i))
//		{
//			res++;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	cout << res << endl;
//}