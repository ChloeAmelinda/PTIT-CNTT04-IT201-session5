#include <stdio.h>

int recursive(int n,int m) {
    if (n==0 && m==0) {
        return 0;
    }
    return n+recursive(m-n+1);
}
int main(void) {
    printf("Hello, World!\n");
    int n=0,m=0;
    while (n<=0 && m<=0) {
        printf("n: \n");
        scanf("%d",&n);
        printf("m: \n");
        scanf("%d",&m);
    }
    int result = recursive(n,m);
    printf("result: %d\n",result);

    return 0;
}