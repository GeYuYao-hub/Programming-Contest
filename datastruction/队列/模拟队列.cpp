//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 1e6;
//int q[N];
//int hh = 0;
//int tt = -1;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string str;
//		cin >> str;
//		if (str == "push")
//		{
//			int x;
//			cin >> x;
//			q[++tt] = x;
//		}
//		if (str == "pop")
//		{
//			hh++;
//		}
//		if (str == "query")
//		{
//			cout << q[hh] << endl;
//		}
//		if (str == "empty")
//		{
//			if (hh <= tt)
//			{
//				cout << "NO" << endl;
//			}
//			else
//			{
//				cout << "YES" << endl;
//			}
//		}
//	}
//}