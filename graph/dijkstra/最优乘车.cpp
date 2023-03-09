//#include<iostream>
//#include<string>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], h[N], w[N],dist[N];
//int idx = 0;
//int r[N];
//int m, n;
//bool st[N];
//typedef pair<int, int>PII;
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = 1;
//	h[a] = idx++;
//}
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//	dist[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>>q;
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
//
//	if (dist[n] == 0x3f3f3f3f)
//	{
//		return -1;
//	}
//	else
//	{
//		return dist[n] -1 ;
//	}
//}
//
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> m >> n;
//	getchar();
//	for (int i = 0; i < m; i++)
//	{
//		int cnt = 0;
//		string str;
//		getline(cin, str);
//		str += ' ';
//		int k = 0;
//		for (int j = 0; j < str.size(); j++)
//		{
//			if (str[j] == ' ')
//			{
//				r[cnt++] = k;
//				k = 0;
//				continue;
//			}
//			k = k * 10 + str[j] - '0';
//		}
//
//		for (int j = 0; j < cnt; j++)
//		{
//			for (int k = j + 1; k < cnt; k++)
//			{
//				add(r[j], r[k]);
//			}
//		}
//	}
//
//	int t = dijkstra();
//	if (t != -1)
//	{
//		cout << t << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}