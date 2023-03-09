//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N];
//int head=-1;
//int idx = 0;
//void add(int x)
//{
//	e[idx] = x;
//	ne[idx] = head;
//	head = idx;
//	idx++;
//}
//void add_k(int k, int x)
//{
//	e[idx] = x;
//	ne[idx] = ne[k];
//	ne[k] = idx;
//	idx++;
//}
//void del_k(int k)
//{
//	ne[k] = ne[ne[k]];
//}
//int main()
//{
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		char c;
//		cin >> c;
//		if (c == 'D')
//		{
//			int k;
//			cin >> k;
//			if (k == 0)
//			{
//				head = ne[head];
//			}
//			else
//			{
//				del_k(k-1);
//			}
//			
//		}
//		if (c == 'I')
//		{
//			int k, x;
//			cin >> k >> x;
//			add_k(k-1, x);
//		}
//		if (c == 'H')
//		{
//			int x;
//			cin >> x;
//			add(x);
//		}
//	}
//
//	for (int i = head; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		cout << j << ' ';
//	}
//}