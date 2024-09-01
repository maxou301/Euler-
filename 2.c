#include <stdio.h>
#include <stdlib.h>


int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long n; 
        scanf("%lld",&n);
        
        
        long long sum=0;
            
        int stop=1;
        
        long long a=0;
        long long b=1;
        
        while(stop)
        {
            long long x=a+b;
            if(x%2==0&&x<n)
                sum+=x;

            a=b;
            b=x;
            if(x>=n)
                stop=0;
        }
        printf("%lld\n",sum);
        
    }
    return EXIT_SUCCESS;
}
