#include <stdio.h>
#include <stdlib.h>

/**
author:10ca1h0st
time:18-06-01
from:https://www.lintcode.com/problem/digit-counts/description
**/
//START
int digitCounts(int k,int n);
int digitCounts(int k,int n){
    return 0;
}
//END



/**
author:10ca1h0st
time:18-06-01
from:https://www.lintcode.com/problem/a-b-problem/description
**/
//START
int aplusb(int a,int b);
int aplusb(int a,int b){
    int result_without_overflow = (a^b);
    int overflow = ((a&b)<<1);
    if(overflow == 0){
        return result_without_overflow;
    }
    else{
        return aplusb(result_without_overflow,overflow);
    }
}
//END

