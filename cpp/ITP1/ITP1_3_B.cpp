#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
    string input;
    int cnt = 0;
    
    while(getline(cin, input), !cin.eof()){
        int x;
        
        sscanf(input.c_str(), "%d", &x);
        if(x == 0) break;
        printf("Case %d: %d\n", ++cnt, x);
    }
    
    return(0);
}
