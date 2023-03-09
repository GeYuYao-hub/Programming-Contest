//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 1e6;
//int stk[N];
//int tt;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		string c;
//		cin >> c;
//		if (c == "push")
//		{
//			int x;
//			cin >> x;
//			stk[++tt] = x;
//		}
//		else if (c == "pop")
//		{
//			tt--;
//		}
//		else if (c == "empty")
//		{
//			if (tt > 0)
//			{
//				cout << "NO" << endl;
//			}
//			else
//			{
//				cout << "YES" << endl;
//			}
//		}
//		else if (c == "query")
//		{
//			cout << stk[tt] << endl;
//		}
//	}
//}