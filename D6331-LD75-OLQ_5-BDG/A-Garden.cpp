#include <stdio.h>

int main (){
	int a, b, tc, ganti1, ganti2, angka;
	scanf("%d %d", &a, &b);
	int arr[a][b];
	for(int i = 0; i<a; i++){
		for(int j = 0; j<b; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		scanf("%d %d %d", &ganti1, &ganti2, &angka);
		arr[ganti1-1][ganti2-1] = angka;
	}
	
	for(int i = 0; i<a; i++){
		for(int j = 0; j<b; j++){
			if(j == b-1){
				printf("%d", arr[i][j]);
			}else{
				printf("%d ", arr[i][j]);	
			}
		}
		printf("\n");
	}
	return 0;
}
