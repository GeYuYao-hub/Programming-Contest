//#include<bits/stdc++.h>
//using namespace std;
//int n, m, ans, a[1010][1010];
//char Map[1010][1010];
//int dx[8] = { 1,0,-1,0,1,-1,1,-1 }, dy[8] = { 0,1,0,-1,1,-1,-1,1 };//��������
//void dfs(int x, int y)
//{
//    Map[x][y] = '.';
//    for (int i = 0; i < 8; i++)
//        if (Map[x + dx[i]][y + dy[i]] == 'W')
//            dfs(x + dx[i], y + dy[i]);
//}
//int main()
//{
//    scanf("%d %d", &n, &m);
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            cin >> Map[i][j];
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            if (Map[i][j] == 'W') {//�ҵ��� W ��.
//                dfs(i, j);
//                ans++;//ͳ�ƴ�
//            }
//    printf("%d\n", ans);
//    return 0;
//}
