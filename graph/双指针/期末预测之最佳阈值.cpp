//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//PII arr[N];
//int pos[N];
//int pre[N];
//int main()
//{
//	int n;
//	cin >> n;
//	arr[0] = { -1,-1 };
//	for (int i = 1; i <= n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		arr[i].first = a;
//		arr[i].second = b;
//	}
//	sort(arr + 1, arr + 1 + n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i].second == 0)
//		{
//			pre[i] = pre[i - 1] + 1;
//		}
//		else
//		{
//			pre[i] = pre[i - 1];
//		}
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		if (arr[i].second == 1)
//		{
//			pos[i] = pos[i + 1] + 1;
//		}
//		else
//		{
//			pos[i] = pos[i + 1];
//		}
//	}
//	int res = 0;
//	int pred = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i].first == arr[i - 1].first)
//			continue;                
//		if (arr[i].second == 1)
//		{
//			int sum = pre[i] + pos[i];
//			if (sum >= pred)
//			{
//				pred = sum;
//				res = arr[i].first;
//			}
//		}
//		else
//		{
//			int sum = pre[i] - 1 + pos[i];
//			if (sum >= pred)
//			{
//				pred = sum;
//				res = arr[i].first;
//			}
//		}
//	}
//	cout << res;
//}