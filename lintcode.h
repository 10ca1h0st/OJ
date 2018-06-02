#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
author:10ca1h0st
time:18-06-01
from:https://www.lintcode.com/problem/digit-counts/description
**/
//START
int digitCounts(int k,int n);
int digitCounts(int k,int n){ 
    //n = v_i*10^max+v_(i-1)*10^(max-1)+...+v_0*10^0
    int max = 0;
    while(1){
        if(n == 0){
            max = 0;
            break;
        }
        int res = n/pow(10,max);
        if(res == 0){
            max--;
            break;
        }
        max++;
    }
    
    if(max == 0){
        //n为个位数
        if(k > n){
            return 0;
        }else{
            return 1;
        } 
    }
    else{
        //n不为个位数
        int v_i = n/pow(10,max);
        if(k < v_i){
            if(k == 0){
                return pow(10,max-1)*v_i*max+digitCounts(k,n-v_i*pow(10,max));
            }
            return pow(10,max)+pow(10,max-1)*v_i*max+digitCounts(k,n-v_i*pow(10,max));
        }
        else if(k == v_i){
            if(k == 0){
                return pow(10,max-1)*v_i*max+digitCounts(k,n-v_i*pow(10,max));
            }
            return (n-v_i*pow(10,max)+1)+pow(10,max-1)*v_i*max+digitCounts(k,n-v_i*pow(10,max));
        }
        else{
            return pow(10,max-1)*v_i*max+digitCounts(k,n-v_i*pow(10,max));
        }
    }
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

