#include <stdio.h>

int main (){
	int l,d,k,p,total;
	scanf("%d%d%d%d",&l,&d,&k,&p);
	
	total= (l/d*p)+(k*l);
	printf("%d\n",total);
	
	
	
	return 0;
}
