
// 超时

// 思路如下：遍历每一个a[i]，然后在a中寻找他的倍数，然后将存储倍数有多少个约数的数组s进行+1，这样就可以记录每一个数有多少个约数
// 相当于是每一个数去主动的给他的倍数进行+1，时间复杂度为O(nn)

//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N];
//int s[N]; 
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] % a[i] == 0)
//			{
//				s[j]+=1;
//			}
//		}
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << s[i] -1<< endl;
//	}
//}


// 正确做法
// 为什么这个做法可以不超时？
// 它首先不管你这个数是不是在a数组中都进行一遍遍历
// 将i的倍数的s数组都加上cnt[i]
// 各个数组中记录的也不是输入顺序的映射，而是真正的一个数，这样就可以实现倍增算法


//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int a[N];
//int cnt[N]; // cnt记录的是当前序列中有多少个数等于i
//int s[N]; // s记录的是当前序列中i的约数有多少个
//int main()
//{
//	// 相当于找每个数在这组序列中排除自己有多少个约数
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		cnt[a[i]]++;
//	}
//
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = i; j < N; j += i)
//		{
//			// 为什么j要从i开始取，那这样不就包含它自己了嘛？
//			// 这是因为可能有其他数等于它，即取这个值的数不知它一个
//			s[j] += cnt[i]; // j是i的倍数，现在相当于是序列中j的约数是i，i作为j的约数，将j的约数的个数加上i的个数
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << s[a[i]] - 1 << endl;
//	}
//}