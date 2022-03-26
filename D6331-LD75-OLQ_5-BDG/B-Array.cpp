#include <stdio.h>

int main (){
	int tc;
	scanf("%d", &tc);
	int simpan[tc], angka[tc], hasil[tc];
	for(int i = 0; i <tc; i++){
		scanf("%d", &simpan[i]);
	}
	for(int i = 0; i < tc; i++){
		scanf("%d", &angka[i]);
		hasil[simpan[i]] = angka[i];
	}
	for(int i = 0; i <tc; i++){
		if(i == tc-1){
			printf("%d", hasil[i]);
		} else{
			printf("%d ", hasil[i]);
		}
	}
	printf("\n");
	return 0;
}
