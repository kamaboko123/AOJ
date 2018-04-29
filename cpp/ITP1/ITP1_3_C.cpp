#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int x, y;
        sscanf(input.c_str(), "%d %d\n", &x, &y);
        
        if(x == 0 && y == 0) break;
        if(x < y){
            printf("%d %d\n", x, y);
        }
        else{
            printf("%d %d\n", y, x);
        }
    }
    return(0);
}
