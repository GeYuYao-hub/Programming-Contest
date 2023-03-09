//#include<iostream>
//using namespace std;
//int idx = 0;
//const int N = 1e6;
//int e[N], l[N], r[N];
//int head = -1, end = -1;
//void init()
//{
//	// 设地址为0的为左端点，为1的为右端点
//	r[0] = 1;
//	l[1] = 0;
//	idx = 2;
//}
//void add(int k)
//{
//	int x;
//	cin >> x;
//	e[idx] = x;
//
//	l[idx] = k;
//	r[idx] = r[k];
//
//	l[r[k]] = idx;
//	r[k] = idx;
//
//	idx++;
//
//}
//int main()
//{
//	int m;
//	cin >> m;
//	init();
//	while (m--)
//	{
//		char c;
//		cin >> c;
//		if (c == 'L')
//		{
//			add(0);
//		}
//		if (c == 'R')
//		{
//			add(l[1]);
//		}
//		if (c == 'D')
//		{
//			int k;
//			cin >> k;
//			k++;
//			r[l[k]] = r[k];
//			l[r[k]] = l[k];
//		}
//		if (c == 'I')
//		{
//			char c;
//			cin >> c;
//			if (c == 'L')
//			{
//				int k;
//				cin >> k;
//				add(l[k+1]);
//			}
//			if (c == 'R')
//			{
//				int k;
//				cin >> k;
//				add(k + 1);
//			}
//
//		}
//	}
//
//	for (int i = r[0]; i != 1; i = r[i])
//	{
//		cout << e[i] << ' ';
//	}
//}