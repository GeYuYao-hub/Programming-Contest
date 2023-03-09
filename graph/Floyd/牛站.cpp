//
//// 离散化 +	快速幂/倍增 + floyd
//
//#include<iostream>
//#include<cstring>
//#include<map>
//using namespace std;
//const int N = 1e3;
//int g[N][N];
//map<int, int>mp;
//int res[N][N];
//int k, m, s, e;
//int n = 0;
//
//void mul(int c[][N],int a[][N],int b[][N])
//{
//	int temp[N][N];
//	memset(temp, 0x3f, sizeof temp);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				temp[j][k] = min(temp[j][k], a[j][i] + b[i][k]);
//			}
//		}
//	}
//	memcpy(c, temp, sizeof temp);
//}
//
//void qsm()
//{
//	memset(res, 0x3f, sizeof res);
//
//	for (int i = 0; i < n; i++)
//	{
//		res[i][i] = 0;
//	}
//
//	while (k)
//	{
//		if (k & 1)
//		{
//			mul(res, res, g); // 比如res经过了8次循环，g经过了4次循环，那么mul之后，res就变成了经过12次循环
//		}
//		mul(g, g, g);
//		k >>= 1;
//	}
//}
//
//int main()
//{
//	memset(g, 0x3f,sizeof g);
//
//	cin >> k >> m >> s >> e;
//	if (!mp.count(s))
//	{
//		mp[s] = n++;
//	}
//	if (!mp.count(e))
//	{
//		mp[e] = n++;
//	}
//	s = mp[s];
//	e = mp[e];
//
//	while (m--)
//	{
//		int c, a, b;
//		cin >> c >> a >> b;
//		if (!mp.count(a))
//		{
//			mp[a] = n++;
//		}
//		if (!mp.count(b))
//		{
//			mp[b] = n++;
//		}
//		a = mp[a];
//		b = mp[b];
//		g[a][b] = g[b][a] = min(g[a][b],c);
//	}
//
//	qsm();
//
//	cout << res[s][e] << endl;
//
//	return 0;
//}