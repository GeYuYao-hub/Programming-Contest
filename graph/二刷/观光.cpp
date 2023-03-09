//#include<iostream>
//#include<cstring>
//#include<string>
//#include<queue>
//using namespace std;
//const int N = 1e6 + 10;
//int idx, h[N],ne[N],w[N],e[N];
//int s, t;
//struct Node
//{
//	int ver, dist, type;
//	bool operator > (const struct Node &a)const 
//	{
//		return dist > a.dist;
//	}
//};
//
//void add(int a, int b, int c)
//{
//	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//int dist[N][2];
//int st[N][2];
//int cnt[N][2];
//int n, m;
//int dijkstra()
//{
//	dist[s][0] = 0;
//	cnt[s][0] = 1;
//	priority_queue<Node, vector<Node>, greater<Node>>q;
//	q.push({s,0,0});
//	while (!q.empty())
//	{
//		Node t = q.top();
//		q.pop();
//		int pos = t.ver;
//		int dis = t.dist;
//		int type = t.type;
//		int count = cnt[pos][type];
//		if (st[pos][type])
//		{
//			continue;
//		}
//		st[pos][type] = true;
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j][0] > dis + w[i])
//			{
//				dist[j][1] = dist[j][0];
//				cnt[j][1] = cnt[j][0];
//				q.push({j,dist[j][1],1});
//				dist[j][0] = dis + w[i];
//				cnt[j][0] = count;
//				q.push({j,dist[j][0],0});
//			}
//			else if (dist[j][0] == dis + w[i])
//			{
//				cnt[j][0] += count;
//			}
//			else if (dist[j][1] > dis + w[i])
//			{
//				dist[j][1] = dis + w[i], cnt[j][1] = count;
//				q.push({j,dist[j][1],1});
//			}
//			else if (dist[j][1] == dis + w[i])
//			{
//				cnt[j][1] += count;
//			}
//
//		}
//	}
//	int res = cnt[t][0];
//	if (dist[t][0] + 1 == dist[t][1]) res += cnt[t][1];
//	return res;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		memset(st, false, sizeof st);
//		memset(dist, 0x3f, sizeof dist);
//		memset(cnt, 0, sizeof cnt);
//		memset(e, 0, sizeof e);
//		memset(h, -1, sizeof h);
//		memset(ne, 0, sizeof ne);
//		memset(w, 0, sizeof w);
//		idx = 0;
//		
//		cin >> n >> m;
//		for (int i = 0; i < m; i++)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(a, b, c);
//		}
//		cin >> s >> t;
//		cout << dijkstra()<<endl;
//
//	}
//}
