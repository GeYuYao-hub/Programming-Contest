//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e6;
//int idx = 0;
//int e[N], ne[N], h[N],d[N];
//int n, m;
//queue<int>q;
//queue<int>res;
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool topology()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (d[i] == 0)
//		{
//			q.push(i);
//		}
//	}
//
//
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		res.push(t);
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			d[j]--;
//			if (d[j] == 0)
//			{
//				q.push(j);
//			}
//		}
//	}
//
//	if (res.size() == n)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
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
//		d[b]++;
//		add(a, b);
//	}
//	
//	if (topology())
//	{
//		while (!res.empty())
//		{
//			cout << res.front() << ' ';
//			res.pop();
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//}