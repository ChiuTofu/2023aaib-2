/*等差級數列印
輸入首項、公差、項數，輸出前n項
*/
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",a);
	for (int i=1;i<c;i++){
		a+=b;
		printf(",%d",a);
		}
}
