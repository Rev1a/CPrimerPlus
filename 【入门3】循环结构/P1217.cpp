#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int d1, d2, d3,d4,d5;
    int palindrome;
    int a,b;
    cin>>a>>b;
    for (d1 = 1; d1 <= 9; d1+=2) {    
        for (d2 = 0; d2 <= 9; d2++) {
            for (d3 = 0; d3 <= 9; d3++) {
                for(d4 = 0;d4 <= 9; d4++){
                    for(d5 = 0;d5<= 9; d5++){
                         palindrome = 1000000000*d1+100000000*d2+10000000*d3+1000000*d4+100000*d5+10000*d5+1000*d4+100*d3+10*d2+d1;
                            arr.push_back(palindrome);if(palindrome==9989899) break;if(d1<0){break;}
                            
                 }
             }
         }
     }
 }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>b){break;}
        if(arr[i]<a){continue;}
        cout<<arr[i]<<endl;
    }
    return 0;       
}