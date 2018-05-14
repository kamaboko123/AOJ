#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

#define BLDG_N 4
#define FLOOR_N 3
#define ROOM_N 10

using namespace std;

int main(void){
    int n;
    string input;
    vector< vector< vector< int > > > room;
    
    for(int i = 0; i < BLDG_N; i++){
        vector< vector< int > > bldg;
        room.push_back(bldg);
        for(int j = 0; j < FLOOR_N; j++){
            vector< int > floor;
            room[i].push_back(floor);
            for(int k = 0; k < ROOM_N; k++){
                room[i][j].push_back(0);
            }
        }
    }
    
    getline(cin, input);
    sscanf(input.c_str(), "%d\n", &n);
    
    for(int i = 0; i < n; i++){
        int b, f, r, v;
        
        getline(cin, input);
        sscanf(input.c_str(), "%d %d %d %d\n", &b, &f, &r, &v);
        
        room[b - 1][f - 1][r - 1] += v;
    }
    
    for(int i = 0; i < BLDG_N; i++){
        for(int j = 0; j < FLOOR_N; j++){
            for(int k = 0; k < ROOM_N; k++){
                printf(" %d", room[i][j][k]);
            }
            printf("\n");
        }
        if(i != BLDG_N - 1) printf("####################\n");
    }
    
    return(0);
    
}
