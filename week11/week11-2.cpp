#include <stdio.h>
int table[1000] = {};
int main()
{
    int BOUND = 1000, ans =0 ;
    for (int i=2;i<BOUND;i++){
        if(table[i]==0){
            ans++;
            for(int k =i*i; k<BOUND; k+=i){
                table[k] = -1;
            }
        }
    }
    printf("��Ʀ�: %d��\n", ans);
}
