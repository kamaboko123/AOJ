#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int H, W;
        
        sscanf(input.c_str(), "%d %d\n", &H, &W);
        
        if((H | W) == 0) break;
        
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(j == 0 || j == (W - 1) || i == 0 || i == (H - 1)){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return(0);
}
