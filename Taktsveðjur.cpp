#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;
void downgradeMulti(int &curMulti, int &seqHits){
    if(curMulti != 1)
        curMulti /= 2;
    seqHits = curMulti;
}

void upgradeMulti(int &curMulti, int &seqHits){
    if(seqHits>= 8){
        curMulti = 8;
    }else if(seqHits>=4){
        curMulti = 4;
    }else if(seqHits>=2){
        curMulti = 2;
    }else{
        curMulti = 1;
    }
}
int main(){
    int n;
    cin>> n;
    vector<int> a(n); 
    for (auto& x : a) cin >> x; 

    int points = 0;
    int curMulti = 1;
    int seqHits = 1;

    for (int i = 0; i<a.size(); i++){
        if(a[i]==0){
            downgradeMulti(curMulti, seqHits);
            cout<<"curr multi is " << curMulti<<'\n';
            cout<<"curr seq is " << seqHits<<'\n';
        }
        else{
            
            upgradeMulti(curMulti, seqHits);
            //cout<<"curr seq is " << seqHits<<'\n';
            //cout<<"curr multi in upgrade is " << curMulti<<'\n';
            
            seqHits++;
            points+=a[i]*curMulti;
            //cout<<"curr points are " << points<<'\n';
        }
    }
    cout<<points;

}