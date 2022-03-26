#include <stdio.h>

int main (){
	long long int a, b, c, d, e, f, g, h, i, j, k, l;
	long long int hasil1, hasil2, hasil3;
	scanf("(%lld+%lld)x(%lld-%lld)\n", &a, &b, &c, &d);
	scanf("(%lld+%lld)x(%lld-%lld)\n", &e, &f, &g, &h);
	scanf("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);
	hasil1 = (a+b)*(c-d);
	hasil2 = (e+f)*(g-h);
	hasil3 = (i+j)*(k-l);
	printf("%lld %lld %lld\n", hasil1, hasil2, hasil3);
	return 0;
}
