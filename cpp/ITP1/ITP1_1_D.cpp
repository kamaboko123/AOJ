#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int n = atoi(input.c_str());
        int h, m, s;
        
        h = n / (60 * 60);
        m = (n % (60 * 60)) / 60;
        s = n % 60;
        
        printf("%d:%d:%d\n", h, m, s);
    }
}
