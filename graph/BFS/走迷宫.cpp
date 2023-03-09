//#include <cstring>
//#include <iostream>
//#include <queue>
//using namespace std;
//int G[105][105];
//int visit[105][105];
//struct Node
//{
//    pair<int, int> q;
//    int number = 0;
//};
//
//int main()
//{
//    memset(visit, -1, sizeof(visit));
//    int dx[4] = { -1, 1, 0, 0 };
//    int dy[4] = { 0, 0, -1, 1 };
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> G[i][j];
//        }
//    }
//    int C = 0;
//    queue<Node> r;
//    r.push({ {0, 0}, 0 });
//    while (!r.empty())
//    {
//        int x = r.front().q.first;
//        int y = r.front().q.second;
//        if (x == n - 1 && y == m - 1)
//        {
//            cout << r.front().number << endl;
//            return 0;
//        }
//        for (int i = 0; i < 4; i++)
//        {
//            int X = x + dx[i];
//            int Y = y + dy[i];
//            if (G[X][Y] == 0 && X >= 0 && X < n && Y >= 0 && Y < m && visit[X][Y] == -1)
//            {
//                visit[X][Y] = 1;
//                r.push({ {X, Y}, r.front().number + 1 });
//            }
//        }
//        r.pop();
//    }
//}