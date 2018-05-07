#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        double r;
        
        sscanf(input.c_str(), "%lf\n", &r);
        
        printf("%lf %lf\n", (r * r * M_PI), (r * 2 * M_PI));
    }
    return(0);
}
