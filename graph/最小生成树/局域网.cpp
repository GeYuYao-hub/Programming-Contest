//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int e[N], w[N], ne[N], h[N];
//bool st[N];
//int idx = 0;
//int n, m;
//int cnt = 0;
//int r[N];
//
//void add(int a,int b,int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx;
//	idx++;
//}
//
//int prim(int x)
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({ 0, x });
//	int res = 0;
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int pos = t.second;
//		int dis = t.first;
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//		res += dis;
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			q.push({w[i],j});
//		}
//	}
//	return res;
//}
//
//void dfs(int x)
//{
//	st[x] = true;
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!st[j])
//		{
//			dfs(j);
//		}
//	}
//}
//
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	int all = 0;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//		all += c;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			r[cnt++] = i;
//			dfs(i);
//		}
//	}
//	memset(st, false, sizeof st);
//	int res = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		res += prim(r[i]);
//	}
//	cout << all - res << endl;
//}