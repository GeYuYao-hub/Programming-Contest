//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<cstdio>
//
//using namespace std;
//
//const int N = 10010;
//
//int n;
//
//int a[N];
//
//int main()
//{
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
//
//    int sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (a[i] != i)//直接遍历，如果不是自身的话，我们必然要交换，所以不会出现多于的操作
//        {
//            for (int j = i + 1; j <= n; j++)
//                if (a[j] == i)
//                    swap(a[i], a[j]);
//
//            sum++;
//        }
//    }
//
//    printf("%d\n", sum);
//
//    return 0;
//}
