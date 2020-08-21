#include <bits/stdc++.h>
using namespace std;


long calc(long n){
    if (n <3)
        return n;
    long x = (-1 + sqrt(1+8.0*n))/2.0;
    long r = n - x*(x+1)/2;
    long s = (x-2)*(x-1)/2 + 1 + r;
    if (r == x+1)
        s-=2;
    // printf("%d %d %d\n",x,r,s);
    return s ;
}


int main(){
    long n;
    while (scanf("%d",&n) != EOF){
        printf("%d\n",calc(n));
    }
}
