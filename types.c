# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	size_t c, s, i, l, ll, f, d;

	c = sizeof(char);
	s = sizeof(short);
	i = sizeof(int);
	l = sizeof(long);
	ll = sizeof(long long);
	f = sizeof(float);
	d = sizeof(double);
	
	printf("Sizeof...\nchar: %lu\nshort: %lu\n"
		"int: %lu\nlong: %lu\nlong long: %lu\n"
		"float: %lu\ndouble: %lu\n",c,s,i,l,ll,f,d);

	return 0;
}
