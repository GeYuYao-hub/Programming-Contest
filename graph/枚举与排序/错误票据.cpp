//#include<iostream>
//#include<cstring>
//#include<string>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int cnt = 0;
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		getline(cin, str);
//		str += ' ';
//		int k = 0;
//		for (int j = 0; j < str.size(); j++)
//		{
//			if (str[j] == ' ')
//			{
//				a[cnt++] = k;
//				k = 0;
//			}
//			else
//			{
//				k = k * 10 + str[j] - '0';
//			}
//		}
//	}
//	int A, B;
//	sort(a, a + cnt);
//	for (int i = 0; i < cnt - 1; i++)
//	{
//		if (a[i + 1] - a[i]==0)
//		{
//			B = a[i + 1];
//		}
//		else if (a[i + 1] - a[i] == 2)
//		{
//			A = a[i] + 1;
//		}
//	}
//	cout << A << ' ' << B;
//}