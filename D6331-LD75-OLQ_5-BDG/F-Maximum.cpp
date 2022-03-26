#include <stdio.h>

int main (){
	int tc, tc1;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int max1 = -100000000;
		long long int max2 = -100000000;
		scanf("%d", &tc1);
		int arr[tc1];
		for(int j = 0; j<tc1;j++){
			scanf("%d", &arr[j]);
			if(arr[j] > max1){ 
				max2 = max1; 
				max1 = arr[j]; 
			} else if (arr[j] > max2){ 
				max2 = arr[j];
			}
		}
		printf("Case #%d: %d\n", i, max1+max2);
	}
	return 0;
}
