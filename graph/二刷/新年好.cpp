//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 5e5 + 10;
//int e[N], ne[N], w[N], h[N];
//bool st[N];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//int arr[6] = {0,0,0,0,0,0};
//int dist[6][N];
//void dijkstra(int p)
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	int s = arr[p];
//	dist[p][s] = 0;
//	q.push({ 0,s });
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
//			if (dist[p][j] > dis + w[i])
//			{
//				dist[p][j] = dis + w[i];
//				q.push({dist[p][j],j});
//			}
//		}
//	}
//}
//int dfs(int k,int cnt)
//{
//	if (cnt == 6)
//	{
//		return 0;
//	}
//	int s = arr[k];
//	int res = 0x3f3f3f3f;
//	for (int i = 0; i < 6; i++)
//	{
//		int j = arr[i];
//		if (st[j])
//		{
//			continue;
//		}
//		st[j] = true;
//		res=min(res,dist[k][j]+dfs(i, cnt + 1));
//		st[j] = false;
//	}
//	return res;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	int n, m;
//	cin >> n >> m;
//	arr[0] = 1;
//	for (int i = 1; i < 6; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		memset(st, false, sizeof st);
//		dijkstra(i);
//	}
//	memset(st, false, sizeof st);
//	st[1] = true;
//	cout<<dfs(0, 1)<<endl;
//}