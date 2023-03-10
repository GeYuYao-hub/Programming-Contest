//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e3 + 10;
//// g ：邻接矩阵 d：各点价格 cnt：到达各点的方式数
//int g[N][N], d[N], cnt[N];
//// st：记录各点的价格是否为最低价格，当st[i]为true表示d[i]已更新为最小值
//bool st[N];
//int n;
//
//// 优先队列，第一个元素为该点价格，第二个元素为该点标号
//priority_queue<PII, vector<PII>, greater<PII>>q;
//
//void dijkstra()
//{
//
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
//
//		for (int i = 0; i < n; i++)
//		{
//			// 若pos商品和i商品均已更新为最小价值，并且pos和i可以合成其他商品则进入if语句
//			if (st[i] && g[pos][i] != -1)
//			{
//				// 若由pos和i合成的商品的价值可被进一步减少
//				if (d[g[i][pos]] > d[i] + d[pos])
//				{
//					d[g[i][pos]] = d[i] + d[pos];
//					// 得到由pos和i合成的商品的方式数为得到pos商品的方式数*得到i商品的方式数
//					cnt[g[i][pos]] = cnt[pos] * cnt[i];
//					q.push({ d[g[i][pos]],g[i][pos] });
//				}
//				else if (d[g[i][pos]] == d[i] + d[pos])
//				{
//					// 这种方法得到的由pos和i合成的商品的价格与之前相比并未发生改变则在原基础上加入新方式的数量
//					cnt[g[i][pos]] += cnt[pos] * cnt[i];
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	memset(d, 0x3f, sizeof d);
//	memset(g, -1, sizeof g);
//	cin >> n;
//	// 将得到各商品的方式数初始化为一，即直接原价购买
//	for (int i = 0; i < n; i++)
//	{
//		cnt[i] = 1;
//	}
//	// 读入当前商品的价格并入队
//	for (int i = 0; i < n; i++)
//	{
//		cin >> d[i];
//		q.push({ d[i],i });
//	}
//	int a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		g[a][b] = g[b][a] = c;
//	}
//	dijkstra();
//	printf("%d %d\n", d[0], cnt[0]);
//}