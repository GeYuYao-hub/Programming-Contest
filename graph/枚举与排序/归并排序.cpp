//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int tmp[N];
//int a[N];
//void merge_sort(int l,int r)
//{
//	if (l >= r)
//	{
//		return;
//	}
//	int mid = (l + r) >> 1;
//	merge_sort(l, mid);
//	merge_sort(mid + 1, r);
//	int i = l;
//	int j = mid + 1;
//	int k = 0;
//	while (i <= mid && j <= r)
//	{
//		if (a[i] < a[j])
//		{
//			tmp[k++] = a[i];
//			i++;
//		}
//		else
//		{
//			tmp[k++] = a[j];
//			j++;
//		}
//	}
//	while (i <= mid)
//	{
//		tmp[k++] = a[i++];
//	}
//	while (j <= r)
//	{
//		tmp[k++] = a[j++];
//	}
//	j = 0;
//	for (int i = l; i <= r; i++)
//	{
//		a[i] = tmp[j++];
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	merge_sort(0, n-1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}