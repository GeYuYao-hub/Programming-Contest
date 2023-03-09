//// 本质上一条线路的作用，就是能将初始的点，以代价为1，运送到后续的点
//
//#include<iostream>
//#include<queue>
//#include<string>
//#include<cstring>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], dist[N];
//bool st[N];
//int idx = 0;
//int m, n;
//void add(int a, int b)
//{
//	e[idx] = b;
//	w[idx] = 1; // 注意点
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int dijkstra()
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({ 0,1 });
//	dist[1] = 0;
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//
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
//	return dist[n];
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	cin >> m >> n;
//	getchar(); // 注意点
//	for (int i = 0; i < m; i++)
//	{
//		string str;
//		int k = 0;
//		getline(cin, str);
//		str += ' '; // 注意点
//		int r[100];
//		int num = 0;
//		for (int j = 0; j < str.size(); j++)
//		{
//			if (str[j] == ' ')
//			{
//				r[num++] = k;
//				k = 0;
//			}
//			else
//			{
//				k = k * 10 + str[j] - '0';
//			}
//		}
//		for (int j = 0; j < num; j++)
//		{
//			for (k = j + 1; k < num; k++)
//			{
//				add(r[j], r[k]);
//			}
//		}
//	}
//
//	int t = dijkstra();
//
//	if (t == 0x3f3f3f3f)
//	{
//		cout << "NO" << endl;
//	}
//	else
//	{
//		cout << t-1<< endl; // 注意点
//	}
//}