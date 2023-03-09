//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cmath>
//using namespace std;
//void solve()
//{
//	int t;
//	cin >> t;
//	priority_queue<int, vector<int>, greater<int>>R;
//	for (int i = 1; i <= sqrt(t); i++)
//	{
//		if (t % i == 0)
//		{
//			R.push(i);
//			if (i * i != t)
//			{
//				R.push(t / i);
//			}
//		}
//	}
//	while (!R.empty())
//	{
//		cout << R.top() << ' ';
//		R.pop();
//	}
//	cout << endl;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		solve();
//	}
//}