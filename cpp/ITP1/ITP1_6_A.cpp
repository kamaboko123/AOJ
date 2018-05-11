#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input;
    
    int n;
    
    getline(cin, input);
    sscanf(input.c_str(), "%d\n", &n);
    
    int *a = new int[n]();
    
    getline(cin, input);
    const char *p = input.c_str();
    
    for(int i = 0; i < n; i++){
        sscanf(p, "%d", a + i);
        
        if(i == n - 1) break;
        while(*p != ' ') p++;
        p++;
    }
    
    for(int i = n - 1; 0 <= i; i--){
        printf("%d", a[i]);
        if(i) printf(" ");
    }
    printf("\n");
    
    return(0);
}
