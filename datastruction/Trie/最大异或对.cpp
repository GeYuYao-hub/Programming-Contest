//#include<iostream>
//using namespace std;
//const int N = 1e7;
//int a[N];
//int idx, son[N][2];
//void insert(int x)
//{
//	int p = 0;
//	for (int i = 30; i != -1; i--)
//	{
//		int u = (x >> i) & 1;// 可以取到其二进制位的第i位（从0计数）是0 还是 1 
//		if (!son[p][u])
//		{
//			son[p][u] = ++idx;// 如果说该节点不存在，那么新增该节点
//		}
//		p = son[p][u];
//	}
//}
//int query(int x)
//{
//	int p = 0;
//	int res = 0;
//	for (int i = 30; i != -1; i--)
//	{
//		int u = (x >> i) & 1;// 得到其二进制位的第i位（从0计数）是0 还是 1 
//		if (son[p][!u])  // 如果其相反位存在的话，那么当然要走其相反位，如果其相反位不存在，那么其同位一定存在
//		{
//			p = son[p][!u];// 指针指到其相反位的地址
//			res = (res << 1) + 1; // 由于相反位存在，那么res的二进制表示的末尾要增添一位1
//		}
//		else
//		{
//			p = son[p][u];// 指针指向同位的地址
//			res = (res << 1) + 0; // 由于仅同位存在，那么res的二进制位要增添一位0
//		}
//	}
//	return res;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i=0;i<n;i++)
//	{
//		cin >> a[i];
//		insert(a[i]);
//	}
//	
//	int res = -1;
//	for (int i = 0; i < n; i++)
//	{
//		res=max(res,query(a[i]));
//	}
//	
//	cout << res<<endl;
//}