#include <stdio.h>
#include <stdlib.h>


int main(){
    long int t; 
    scanf("%ld",&t);

    for(int a0 = 0; a0 < t; a0++){
        long int n; 
        scanf("%ld",&n);

        long int n1=n-1;

        long int m3 = n1/3;
        long int m5 = n1/5;
        long int m15 = n1/15;
        
        long int sum_3 = m3 * 3 * (m3 + 1) / 2;
        long int sum_5 = m5 * 5 * (m5 + 1) / 2;
        long int sum_15 = m15 * 15 * (m15 + 1) / 2;

        printf("%ld\n",sum_3+sum_5-sum_15);
    }
    return EXIT_SUCCESS;
}

