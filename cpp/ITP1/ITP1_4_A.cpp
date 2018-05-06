#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int a, b;
        int d, r;
        double f;
        
        sscanf(input.c_str(), "%d %d\n", &a, &b);
        
        d = a / b;
        r = a % b;
        f = (double)a / (double)b;
        
        printf("%d %d %lf\n", d, r, f);
    }
    return(0);
}
