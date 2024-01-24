#include<bits/stdc++.h>
using namespace std;
vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> ai,bi;
        int as=a.size(),bs=b.size();
        for(int i=0;i<s.size();i++){
            if(i+as <=s.size() && s.substr(i,as)==a){
                ai.push_back(i);
               // i=i+as;
            }
            if(i+bs<=s.size() && s.substr(i,bs)==b){
                bi.push_back(i);
               // i=i+bs;
            }
        }
        //
       // cout<<ai.size()<<" -----"<<bi.size()<<"\n";
       //for(int i=0;i<ai.size();i++)cout<<ai[i]<<" ";
       //for(int i=0;i<bi.size();i++)cout<<bi[i]<<" ";
        vector<int>ans;
        if(ai.size()==0 || bi.size()==0){
            //ans.push_back(0);
            return ans;
        }
        else
        {
            for(int i=0,j=0;i<ai.size();){
                if(abs(ai[i]-bi[j])<=k){
                    ans.push_back(ai[i]);
                    i++;
                    cout<<"i- "<<i<<"\n";
                }
                else{
                    if(a[i]==max(a[i],b[j])){
                        j++;
                    }
                    else{
                        i++;
                    }
                }

            }

        }
        
        return ans;
    }
int main(){
    string s,a,b;
    int k;
    cin>>s>>a>>b;
    cin>>k;
    vector<int>ans;
    ans=beautifulIndices(s,a,b,k);
    for(auto i:ans){
        cout<<i;
    }
}