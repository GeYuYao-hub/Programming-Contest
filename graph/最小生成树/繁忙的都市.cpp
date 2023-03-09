//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N];
//bool st[N];
//int idx = 0;
//int n, m;
//int MAX = -1;
//int s=-1;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	ne[idx] = h[a];
//	e[idx] = b;
//	h[a] = idx;
//	idx++;
//}
//void prim()
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({0,1});
//
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//
//		int pos = t.second;
//		int dis = t.first;
//
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//		MAX = max(MAX, dis);
//		s += 1;
//
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			q.push({w[i],j});
//		}
//	}
//
//
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	prim();
//	cout << s << ' ' << MAX;
//}