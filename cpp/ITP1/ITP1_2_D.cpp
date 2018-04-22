#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool itp1_2_d(int &W, int &H, int &x, int &y, int &r){
    
    /*
     * 問題文より
     * -100 <= (x,y) <= 100
     *  0 < (W,H) < 100
     *  原点(0,0)から正の方向にしか長方形は生成されないため、
     *  x,yが負の値を取る場合は、その時点で範囲外
     */
    if (x < 0 || y < 0){
        return false;
    }
        
    if(x + r > W){
        return false;
    }
    if(y + r > H){
        return false;
    }
    
    return true;
}

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int W, H, x, y, r;
        
        sscanf(input.c_str(), "%d %d %d %d %d", &W, &H, &x, &y, &r);
        
        if(itp1_2_d(W, H, x, y, r)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
    
    return(0);
}
