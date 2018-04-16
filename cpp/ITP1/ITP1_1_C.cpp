#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input)){
        if(*input.c_str() == EOF) break;
        
        int h, w;
        sscanf(input.c_str(), "%d %d\n", &h, &w);
        
        int sq = h * w;
        int l = (h * 2) + (w * 2);
        
        printf("%d %d\n", sq, l);
    }
    
    return(0);
}
