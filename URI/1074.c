#include <stdio.h>

int main(){

    int n, x;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(x!=0){
            if(x%2==0) printf("EVEN ");
            else printf("ODD ");
            if(x>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
        else printf("NULL\n");
    }

    return 0;
}