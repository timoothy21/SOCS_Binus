#include <stdio.h>

int main (){
	int a, b, c, d;
	double hasil;
	for(int i = 0; i < 3; i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		hasil = (2*a/1)+(4*b/2)+(6*c/3)+(4*d/4);
		printf("%.2lf\n", hasil);
	}
	return 0;
}
