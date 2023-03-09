//#include<iostream>
//#include<cmath>
//using namespace std;
//int n;
//int r[10];
//int st[10];
//void dfs(int t)
//{
//	if (t == n)
//	{
//		for (int i = 0; i <n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (r[i] == j)
//				{
//					cout << 'Q';
//				}
//				else
//				{
//					cout << '.' ;
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (!st[i])
//		{
//			st[i] = true;
//			bool flag = true;
//			for (int j =0; j < t; j++)
//			{
//				if (abs(t - j) == abs(r[j] - i))
//				{
//					flag = false;
//				}
//			}
//			if (flag)
//			{
//				r[t] = i;
//				dfs(t + 1);
//			}
//			st[i] = false;
//		}
//	}
//}
//int main()
//{	
//	cin >> n;
//	dfs(0);
//}