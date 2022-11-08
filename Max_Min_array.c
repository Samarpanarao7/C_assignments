#include<stdio.h>
#include<limits.h>
int main()
{
	int a[PATH_MAX], max,min, n, i;
	printf("enter the no of elements in array\n");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	min=max=a[0];
	for (i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("the minimum element in the array is %d\n", min);
	printf("the maximum element in the array is %d\n", max);
	return 0;
}
