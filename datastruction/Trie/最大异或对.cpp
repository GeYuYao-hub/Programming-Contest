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
//		int u = (x >> i) & 1;// ����ȡ���������λ�ĵ�iλ����0��������0 ���� 1 
//		if (!son[p][u])
//		{
//			son[p][u] = ++idx;// ���˵�ýڵ㲻���ڣ���ô�����ýڵ�
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
//		int u = (x >> i) & 1;// �õ��������λ�ĵ�iλ����0��������0 ���� 1 
//		if (son[p][!u])  // ������෴λ���ڵĻ�����ô��ȻҪ�����෴λ��������෴λ�����ڣ���ô��ͬλһ������
//		{
//			p = son[p][!u];// ָ��ָ�����෴λ�ĵ�ַ
//			res = (res << 1) + 1; // �����෴λ���ڣ���ôres�Ķ����Ʊ�ʾ��ĩβҪ����һλ1
//		}
//		else
//		{
//			p = son[p][u];// ָ��ָ��ͬλ�ĵ�ַ
//			res = (res << 1) + 0; // ���ڽ�ͬλ���ڣ���ôres�Ķ�����λҪ����һλ0
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