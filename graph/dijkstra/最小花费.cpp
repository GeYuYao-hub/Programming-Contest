//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//typedef pair<double, int>PII;
//int n, m;
//int e[N],ne[N],h[N];
//double w[N],dist[N];
//bool st[N];
//int idx = 0;
//void add(int a, int b, double c)
//{
//	w[idx] = 1-(c/100);
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//double dijkstra(int A,int B)
//{
//	memset(dist, 0, sizeof dist);
//	dist[A] = 1;
//	priority_queue<PII>q;
//	q.push({1,A});
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int pos = t.second;
//		double dis = t.first;
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] < dis *w[i])
//			{
//				dist[j] = dis * w[i];
//				q.push({dist[j],j});
//			}
//		}
//	}
//
//	double rate = dist[B];
//	return 100 / rate;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b,c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	int A, B;
//	cin >> A >> B;
//	printf("%0.8lf", dijkstra(A, B));
//}