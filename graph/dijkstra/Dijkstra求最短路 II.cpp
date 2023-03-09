//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//typedef pair<int, int>PII;
//int e[N], ne[N], w[N], h[N];
//bool st[N];
//int dist[N];
//int idx = 0;
//int n, m;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int dijkstra()
//{
//	priority_queue<PII, vector<PII>, greater<PII> >q;
//	q.push({ 0,1 });
//	dist[1] = 0;
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
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > dis + w[i])
//			{
//				dist[j] = dis + w[i];
//				q.push({ dist[j],j });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)
//	{
//		return -1;
//	}
//	else
//	{
//		return dist[n];
//	}
//}
//int main()
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	cout << dijkstra() << endl;
//}