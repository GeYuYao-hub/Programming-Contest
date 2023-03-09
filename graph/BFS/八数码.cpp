//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<queue>
//using namespace std;
//unordered_map<string, int>mp;
//queue<string>q;
//void BFS(string str)
//{
//	int dx[4] = {1,-1,0,0};
//	int dy[4] = {0,0,1,-1};
//	string end = "12345678x";
//	q.push(str);
//	mp[str] = 0;
//	while (!q.empty())
//	{
//		string t = q.front();
//		q.pop();
//		int dis = mp[t];
//
//		if (t == end)
//		{
//			cout << mp[end] << endl;
//			return;
//		}
//
//		int pos = t.find('x');
//		int x = pos / 3;
//		int y = pos % 3;
//
//		for (int i = 0; i < 4; i++)
//		{
//			if ( (x + dx[i]) >= 0 && (x + dx[i]) < 3 && (y + dy[i]) >= 0 && (y + dy[i]) < 3 )
//			{
//				swap(t[pos], t[(x + dx[i]) * 3 + (y + dy[i])]);
//
//				if (mp.count(t) == 0)
//				{
//					mp[t] = dis + 1;
//					q.push(t);
//				}
//
//				swap(t[pos], t[(x + dx[i]) * 3 + (y + dy[i])]);
//			}
//			else
//			{
//				continue;
//			}
//			
//		}
//
//	}
//	cout << -1 << endl;
//}
//int main()
//{
//	string str;
//	for (int i = 0; i < 9; i++)
//	{
//		char c;
//		cin >> c;
//		str += c;
//	}
//	BFS(str);
//}