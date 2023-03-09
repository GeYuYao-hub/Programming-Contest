
// 上边这个是错误题解，原因是多源的prim最后连出来的有可能是不连通的
// 这里判断是否联通的依据是st，但是如果两个独立的block他们内部的点都可能是st的，但是独立的block并没有被连接起来

//#include<iostream>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//
//typedef pair<int, int>PII;
//const int N = 1e3+10;
//int g[N][N];
//bool st[N];
//int idx = 0;
//priority_queue<PII, vector<PII>, greater<PII>>q;
//
//int res = 0;
//int n, m;
//void prim()
//{
//	if (q.empty())
//	{
//		q.push({0,1});
//	}
//
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//
//		int pos = t.second;
//		int dis = t.first;
//
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//		res += dis;
//		cout <<pos<<' '<< dis << endl;
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (i != pos && g[pos][i]!=0x3f3f3f3f)
//			{
//				q.push({g[pos][i],i});
//			}
//		}
//	}
//}
//int main()
//{
//	memset(g, 0x3f, sizeof g);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		g[i][i] = 0;
//	}
//	while (m--)
//	{
//		int t;
//		cin >> t;
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (t == 1)
//		{
//			res += c;
//			q.push({ 0,a });
//			q.push({ 0,b });
//		}
//		else
//		{
//			g[a][b] = g[b][a] = min(c, g[a][b]);
//		}
//	}
//	prim();
//	cout << res;
//}

/*
不过的样例
10 18
1 3 3 7
1 6 2 2
1 6 6 1
2 3 9 1
2 2 9 8
1 4 3 2
2 10 9 8
2 7 6 1
1 1 2 4
1 5 3 5
2 3 5 4
1 4 2 7
1 1 2 4
1 7 10 3
2 4 4 2
2 10 2 5
1 4 5 4
2 7 8 4
*/

/*
上边这个错误题解的错误输出
44
标准答案
45
*/

// 下边这个是正确的Kruskal算法，由于采取了并查集就可以避免上述的问题

//#include<iostream>
//#include<cstring>
//#include<algorithm>
//
//
//using namespace std;
//
//struct Node
//{
//	int a, b, c;
//	bool operator<(const Node& t) const
//	{
//		return c < t.c;
//	}
//};
//
//const int N = 1e6;
//Node g[N];
//int fa[N];
//int n, m;
//int cnt = 0;
//int res = 0;
//int find(int x)
//{
//	if (x == fa[x])
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//}
//void merge(int x,int y)
//{
//	int a = find(x);
//	int b = find(y);
//	if (a == b)
//	{
//		return;
//	}
//	else
//	{
//		fa[a] = b;
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	while (m--)
//	{
//		int t;
//		cin >> t;
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (t == 1)
//		{
//			res += c;
//			merge(a, b);
//		}
//		g[cnt++] = { a,b,c };
//	}
//
//	sort(g, g + cnt);
//
//	for (int i = 0; i < cnt; i++)
//	{
//		Node t = g[i];
//		int a = find(t.a);
//		int b = find(t.b);
//		int dis = t.c;
//		if (a == b)
//		{
//			continue;
//		}
//		else
//		{
//			merge(a, b);
//			cout << t.a << ' ' << t.b << ' ' << dis << endl;
//			res += dis;
//		}
//	}
//	cout << res;
//}
/*
3 9 1 <-
7 6 1
7 8 4 <-
*/

