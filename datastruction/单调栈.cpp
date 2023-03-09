//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int stk[N];
//int tt = 0;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		while (tt > 0 && stk[tt] >= x)
//		{
//			tt--;
//		}
//		if (tt > 0)
//		{
//			cout << stk[tt] << ' ';
//		}
//		else
//		{
//			cout << -1 <<' ';
//		}
//		stk[++tt] = x;
//	}
//}