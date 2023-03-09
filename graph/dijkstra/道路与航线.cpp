//
// ���� + dijkstra + dfs
//
//#include<iostream>
//#include<cstring>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//typedef pair<int, int>PII;
//
//const int N = 1e6 + 10;
//
//int n, R, P, S;
//
//int e[N], ne[N], w[N], h[N], dist[N],idx = 0;
//bool st[N];
//
//int id[N]; // ��¼������������block
//int bcnt; // block����
//int din[N]; // ����block�����
//vector<int>block[N];
//
//queue<int>q;
//
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//
//void dfs(int x, int bid)
//{
//	id[x] = bid;
//	block[bid].push_back(x);
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!id[j])
//		{
//			dfs(j, bid);
//		}
//	}
//}
//
//void dijkstra(int bid)
//{
//	priority_queue<PII, vector<PII>, greater<PII>>heap;
//
//	for (auto u : block[bid]) // ������block�е�ÿһ���㣬Ȼ�����
//	{
//		heap.push({dist[u],u});
//	}
//
//	while (!heap.empty())
//	{
//		PII t = heap.top();
//		heap.pop();
//
//		int pos = t.second;
//		int dis = t.first;
//
//		if (st[pos])
//		{
//			continue;
//		}
//
//		st[pos] = true;
//
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (id[j] != id[pos] && --din[id[j]] == 0) // ���j��pos������ͬһblock��ôj���ڵ�block��ȼ�һ����Ϊ0������top����
//			{
//				q.push(id[j]);
//			}
//
//			 ��ʹ����������ͬһblock����Ȼ�Ż��㣬ֻ�ǲ��Ž����ȶ�����
//			 ��dist�ǰ���ˮ·��
//
//			if (dist[j] > dist[pos] + w[i])
//			{
//				dist[j] = dist[pos] + w[i];
//
//				if (id[j] == id[pos])
//				{
//					heap.push({ dist[j],j });
//				}
//			}
//			
//
//		}
//	}
//
//}
//
//void topsort()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[S] = 0;
//
//	for (int i = 1; i <= bcnt; i++)
//	{
//		if (din[i] == 0)
//		{
//			q.push(i);
//		}
//	}
//
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		dijkstra(t);
//	}
//}
//
//int main()
//{
//	memset(h, -1, sizeof h);
//
//	cin >> n >> R >> P >> S;
//
//	for (int i = 0; i < R; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!id[i])
//		{
//			bcnt++;
//			dfs(i, bcnt);
//		}
//	}
//	
//	for (int i = 0; i < P; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		din[id[b]]++; // b�����ڵ�block����� + 1
//		add(a, b, c);
//	}
//
//	topsort();
//
//	for (int i = 1; i <= n; i++)
//		if (dist[i] > 0x3f3f3f3f / 2) cout << "NO PATH" << endl;
//		else cout << dist[i] << endl;
//
//	return 0;
//}
