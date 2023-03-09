//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<cstdio>
//#include<map>
//#include<set> 
//#include<string>
//#include<stack>
//#include<queue>
//#include<vector>
//#include<math.h> 
//#define inf 0x3f3f3f3f
//using namespace std;
//typedef long long int ll;
//const int maxn = 1e6 + 5;
//typedef unsigned long long int ull;
//ull p = 131;
//ll mod = 1e9 + 7;
//int a[210][210];
//int n;
//void floyd()//floyd模板函数
//{
//	for (int k = 0; k < n; k++)
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
//}
//int main()
//{
//	memset(a, inf, sizeof(a));//初始化
//	cin >> n;
//	for (int i = 0; i < n; i++)//输入半矩阵
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	floyd();
//	/*for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//				cout<<a[i][j]<<' ';
//			cout<<endl;
//		}*/
//	cout << a[0][n - 1] << endl;
//}
