//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<vector>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//bool st[N];
//int e[N], ne[N], w[N],h[N];
//int idx = 0;
//int cnt = 0;
//int n, m;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int res = 0;
//bool Prim()
//{
//	priority_queue < PII, vector<PII>, greater<PII>>q;
//	q.push({ 0,1 });
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
//		res += dis;
//		cnt++;
//		st[pos] = true;
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			q.push({ w[i], j });
//		}
//	}
//	if (cnt == n)
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
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	if (Prim())
//	{
//		cout << res << endl;
//	}
//	else
//	{
//		cout << "impossible" << endl;
//	}
//}