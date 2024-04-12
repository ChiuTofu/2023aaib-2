#include <stdio.h>
int main()
{
	int a,b;
	float ans=0 ;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b);
		ans += b;
	}
	printf("%.2f",ans/a);




}
