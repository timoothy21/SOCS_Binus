#include <stdio.h>

int main (){
	int tc, tc1, ar, change;
	scanf("%d", &tc);
	int harga[tc];
	for(int i = 0 ; i<tc; i++){
		scanf("%d", &harga[i]);
	}
	scanf("%d", &tc1);
	for(int i = 0; i<tc1; i++){
		scanf("%d %d", &ar, &change);
		harga[ar-1] = change;
		printf("Case #%d:", i+1);
		for(int k = 0; k<tc; k++){
			printf(" %d", harga[k]);
		}
		printf("\n");
	}
	return 0;
}
