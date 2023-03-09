//#include<iostream>
//#include<queue>
//using namespace std;
//const int N = 1e6;
//int a[N + 10];
//struct Node
//{
//	int i, j, sum;
//};
//queue<Node>q;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	q.push({1,1,0x3f3f3f3f});
//	int l = 1;
//	int r = 0;
//	int sum = 0;
//	while(l <= n && r <= n)
//	{
//		Node t = q.front();
//		if (sum > m)
//		{
//			if (sum - m== t.sum )
//			{
//				q.push({l,r,sum - m});
//				sum -= a[l];
//				l++;
//			}
//			else if (sum - m< t.sum)
//			{
//				while (!q.empty())
//				{
//					q.pop();
//				}
//				q.push({ l,r,sum - m });
//				sum -= a[l];
//				l++;
//			}
//			else
//			{
//				sum -= a[l];
//				l++;
//			}
//		}
//		else if (sum == m)
//		{
//			if (sum - m == t.sum)
//			{
//				q.push({ l,r,sum - m });
//				sum -= a[l];
//				l++;
//			}
//			else
//			{
//				while (!q.empty())
//				{
//					q.pop();
//				}
//				q.push({ l,r,sum - m });
//				sum -= a[l];
//				l++;
//			}
//		}
//		else if (sum < m)
//		{
//			r++;
//			sum += a[r];
//		}
//	}
//	while (!q.empty())
//	{
//		cout << q.front().i << '-' << q.front().j << endl;
//		q.pop();
//	}
//}