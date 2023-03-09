//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//typedef pair<int, int>PII;
//queue<int>q;
//int N = 1e5+10;
//int mp[1000010];
//void BFS(int s,int e)
//{
//	memset(mp, -1, sizeof mp);
//	mp[s] = 0;
//	q.push(s);
//	while (!q.empty())
//	{
//		int t = q.front();
//		if (t == e)
//		{
//			cout << mp[e] << endl;
//			return;
//		}
//		q.pop();
//		if (mp[2 * t] == -1 && 2 * t <= N)
//		{
//			mp[2 * t] = mp[t] + 1;
//			q.push(2 * t);
//		}
//		if (mp[t + 1] == -1 && t+1<=N)
//		{
//			mp[t + 1] = mp[t] + 1;
//			q.push(t + 1);
//		}
//		if (mp[t - 1] == -1 && t-1>=0)
//		{
//			mp[t - 1] = mp[t] + 1;
//			q.push(t - 1);
//		}
//	}
//}
//int main()
//{	
//	int a, b;
//	cin >> a >> b;
//	BFS(a, b);
//}