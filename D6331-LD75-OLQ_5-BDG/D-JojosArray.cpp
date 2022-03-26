#include <stdio.h>

int main (){
	int tc, tc1;
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		scanf("%d", &tc1);
		int arr[tc1];
		long long int hasil = 0;
		long long int count = 0;
		for(int j = 0; j<tc1; j++){
			scanf("%d", &arr[j]);
			hasil += arr[j];
		}
		for(int k = 0; k<tc1; k++){
			if(hasil <= arr[k]){
				count++;
			}
		}
		printf("Case #%d: %lld\n", i+1, hasil);
		printf("%lld\n", count);
	}
	return 0;
}
