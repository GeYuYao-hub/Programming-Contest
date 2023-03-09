//#include<iostream>
//#include<queue>
//#include<cmath>
//using namespace std;
//const int N = 1e6;
//int a[N];
//long long res[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	queue<int>q;
//	q.push(1);
//	int MM = 0;
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		if (t > n)
//		{
//			continue;
//		}
//		int tt = log2(t);
//	/*	MM = max(MM, tt);*/
//		res[tt] += a[t];
//		q.push(2*t);
//		q.push(2 * t + 1);
//	}
//	//cout << "MM:" << MM << endl;
//	//cout << "(log2(n + 1) - 1):" << (log2(n + 1) - 1) << endl;
//	//cout<<"ceil((log2(n + 1) - 1) ) :"<< ceil((log2(n + 1) - 1))<<endl;
//	long long ans = -0x3f3f3f3f3f;
//	int aa = 0;
//	for (int i = 0; i <= ceil((log2(n + 1) - 1) ); i++)
//	{
//		//cout << i + 1 << ' ' << res[i] << endl;
//		if (res[i] > ans)
//		{
//			aa = i;
//		}
//		ans = max(ans, res[i]);
//	}
//	cout << aa + 1;
//}