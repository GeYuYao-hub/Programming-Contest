//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], h[N],dist[N],w[N];
//bool st[N];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//void spfa()
//{
//	dist[1] = 0;
//	queue<int>q;
//	q.push(1);
//	st[1] = true;
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//		
//			if (dist[j] > dist[t] + w[i])
//			{
//				dist[j] = dist[t] + w[i];
//				if (st[j])
//				{
//					continue;
//				}
//				q.push(j);
//				st[j] = true;
//			}
//			
//		}
//	}
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	int n, m;
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	spfa();
//	if (dist[n] >= 0x3f3f3f3f / 2)
//	{
//		cout << "impossible" << endl;
//	}
//	else
//	{
//		cout << dist[n] << endl;
//	}
//}