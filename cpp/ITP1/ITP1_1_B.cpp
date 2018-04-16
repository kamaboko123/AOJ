#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(void){
    char input[128];
    
    while(cin >> input){
        int n = atoi(input);
        cout << (int)pow(n, 3) << endl;
    }
    return(0);
}
