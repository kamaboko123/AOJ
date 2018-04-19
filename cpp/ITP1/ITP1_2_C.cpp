#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int n[3];
        int tmp;
        
        sscanf(input.c_str(), "%d %d %d", n, n + 1, n + 2);
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(n[i] < n[j]) swap(n + i, n + j);
            }
        }
        
        printf("%d %d %d\n", n[0], n[1], n[2]);
        
    }
    
    return(0);
}
