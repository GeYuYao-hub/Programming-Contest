//#include<iostream>
//#include<map>
//using namespace std;
//map<int, int>mp;
//int main()
//{
//	int n, x, y, z;
//	cin >> n >> x >> y >> z;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		// 在i及i以后都加上x
//		mp[0] += x;
//		mp[a] += y - x;
//		mp[b + 1] += -y + z;
//	}
//	int sum = 0;
//	int res = 0;
//	for (auto p : mp)
//	{
//		sum += p.second;
//		res = max(sum, res);
//	}
//	cout << res;
//}