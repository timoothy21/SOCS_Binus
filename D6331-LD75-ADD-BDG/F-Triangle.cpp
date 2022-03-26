#include <stdio.h>

int main (){
	int tc, segitiga;
	scanf("%d", &tc);
	
	for(int i = 0; i<tc; i++){
		scanf("%d", &segitiga);
		printf("Case #%d:\n", i+1);
		for(int baris = 0; baris < segitiga; baris++){
			for(int kolom = 0; kolom < segitiga; kolom++){
				if(kolom > baris){
					printf(" ");
				}
			}
			
			for(int kolom = 0; kolom < segitiga; kolom++){
				if(kolom <= baris){
					if(segitiga % 2 == 1){
						if(kolom % 2 == 0){
							printf("*");
						}
						if(kolom %2 == 1){
							printf("#");
						}
					}
					if(segitiga % 2 == 0){
						if(kolom % 2 == 0){
							printf("#");
						}
						if(kolom %2 == 1){
							printf("*");
						}
					}	
				}
			}
			printf("\n");
		}
		
	}
	return 0;
}
