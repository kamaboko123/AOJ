#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int a, b;
        char op;
        
        sscanf(input.c_str(), "%d %c %d\n", &a, &op, &b);
        
        int result;
        switch(op){
            case '+':
                result = a + b;
                break;
                
            case '-':
                result = a - b;
                break;
                
            case '*':
                result = a * b;
                break;
                
            case '/':
                result = a / b;
                break;
                
            case '?':
            default:
                goto end;
        }
        
        printf("%d\n", result);
    }
    
end:
    return(0);
}
