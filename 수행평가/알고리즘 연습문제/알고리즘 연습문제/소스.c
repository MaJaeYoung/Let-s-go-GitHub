#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fact(fa){
	if (fa <= 1)
		return 1;
	return fa * fact(fa - 1);
}
int main()
{
	int a=0, b=0;
	int n, k;
	int arr[10];
	scanf("%d %d", &n, &k);
	if (2 <= n && n <= 10){
		if (1 <= k && k <= 200){
			for (int i = 0; i < n; i++){
				scanf("%d", &arr[i]);
			}
			for (int j = 0; j < n; j++){
				if (arr[j] >= k){
					a++;
				}
				else{
					b++;
				}
			}
		}
	}
	printf("%d", fact(a) * fact(b));

	return 0;
}