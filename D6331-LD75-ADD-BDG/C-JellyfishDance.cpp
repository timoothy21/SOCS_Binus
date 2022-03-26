#include <stdio.h>

int main (){
	int tc, tc1, a, b;
	scanf("%d", &tc);
	int arr[tc];
	for(int i = 0; i<tc; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &tc1);
	for(int i =0; i<tc1; i++){
		int sum = 0;
		scanf("%d %d", &a, &b);
		for(int i = a-1; i<b; i++){
			sum += arr[i];
		}
		printf("Case #%d: %d\n", i+1, sum);
	}
	return 0;
}
