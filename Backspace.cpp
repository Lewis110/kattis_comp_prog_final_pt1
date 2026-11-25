#include <bits/stdc++.h>
#include <vector>
#include <string>

 using namespace std;
int main(){
    string input;
    cin>>input;

    string output;

    int index = 0;
    
    for (int i= 0; i< input.size(); i++){
        auto character = input.at(i);
        if(character != '<'){
            output+= character;
            index++;
            continue;
        }
        output.erase(--index);
        
    }

    cout<<output;

}