//#include <cstring>
//#include <iostream>
//#include<queue>
//#include <algorithm>
//
//#define x first
//#define y second
//int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
//int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
//
//using namespace std;
//
//typedef pair<int, int> PII;
//
//const int N = 1010, M = N * N;
//queue<PII>q;
//int n;
//int h[N][N];
//
//bool st[N][N];
//
//void bfs(int sx, int sy, bool& has_higher, bool& has_lower)
//{
//    q.push({ sx,sy });
//
//    st[sx][sy] = true;
//
//    while (q.size())
//    {
//        auto t = q.front();
//        q.pop();
//
//        for (int i = 0; i < 8; i++)
//        {
//            int tx = t.x + dx[i], ty = t.y + dy[i];
//            // if (tx == t.x && ty == t.y) continue;
//            if (tx < 0 || tx >= n || ty < 0 || ty >= n) continue;
//            if (h[tx][ty] != h[t.x][t.y])
//            {
//                if (h[tx][ty] > h[t.x][t.y]) has_higher = true;
//                else has_lower = true;
//            }
//            else if (!st[tx][ty])
//            {
//                q.push({ tx, ty });
//                st[tx][ty] = true;
//            }
//        }
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> h[i][j];
//
//    int peak = 0, valley = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            if (!st[i][j])
//            {
//                bool has_higher = false, has_lower = false;
//                bfs(i, j, has_higher, has_lower);
//                if (!has_higher) peak++;
//                if (!has_lower) valley++;
//            }
//
//    cout << peak << " " << valley;
//
//    return 0;
//}
//
///*
//3
//1 2 3
//1 2 3
//1 2 3
//*/
