#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define N 13

void print_missing_card(const vector<bool> &cards, char suit){
    for(int i = 0; i < N; i++){
        if(!cards[i]){
            printf("%c %d\n", suit, i + 1);
        }
    }
}

int main(void){
    int n = 0;
    string input;
    unordered_map<char, vector<bool>> cards;
    
    for(int i = 0; i < N; i++){
        cards['S'].push_back(false);
        cards['H'].push_back(false);
        cards['C'].push_back(false);
        cards['D'].push_back(false);
    }
    
    getline(cin, input);
    sscanf(input.c_str(), "%d\n", &n);
    
    for(int i = 0; i < n; i++){
        getline(cin, input);
        
        char suit = '\0';
        int num;
        
        sscanf(input.c_str(), "%c %d\n", &suit, &num);
        
        cards[suit][num - 1] = true;
    }
    print_missing_card(cards['S'], 'S');
    print_missing_card(cards['H'], 'H');
    print_missing_card(cards['C'], 'C');
    print_missing_card(cards['D'], 'D');
    
    return(0);
}
