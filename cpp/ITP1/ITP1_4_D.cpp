#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void){
    string input;
    
    int n;
    getline(cin, input);
    sscanf(input.c_str(), "%d\n", &n);
    
    int *a = new int[n];
    
    getline(cin, input);
    const char *p = input.c_str();
    
    for(int i = 0; i < n; i++){
        sscanf(p, "%d", a + i);
        
        if(i == n - 1) break;
        while(*p != ' ') p++;
        p++;
    }
    
    long int min = a[0];
    long int max = a[0];
    long int sum = 0;
    
    for(int i = 0; i < n; i++){
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];
        sum += a[i];
    }
    
    delete[] a;
    
    printf("%ld %ld %ld\n", min, max, sum);
    
    return(0);
}
