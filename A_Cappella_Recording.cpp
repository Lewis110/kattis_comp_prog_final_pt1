#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    vector<int> a(n); 
    for (auto& x : a) cin >> x; 
    //cout<<d;
    
    int totalBuckets = 1;
    //vector<vector<int>> buckets; 
    sort(a.begin(), a.end());
    vector<int> bucket;
    for (int i = 0; i<a.size(); i++){
        //cout<<a[i];

        bucket.push_back(a[i]);
        // cout<< bucket[0];
        // cout<< " and Bucket end: "<< bucket[bucket.size()-1]<<'\n';
        // cout<< "Bucket diff is: "<< bucket[bucket.size()-1] - bucket[0]<<'\n';
        if(bucket[bucket.size()-1] - bucket[0] > d){
            // cout<<"New Bucket made!";
            totalBuckets++;
            bucket.erase(bucket.begin(), bucket.end()-1);
        }
    }
    cout<<totalBuckets;
}