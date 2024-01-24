#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"hello to";
    int n=4;
    vector<vector<int>> mt(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mt[i][j];
        }
    }

    int w=2,h=3;

    for(int r=0;r+w <=n;r++){
        for(int c=0;c+h <=n;c++){

            /////////////////////////
            cout<<"\n";
            for(int i=r;i<r+w;i++){
                for(int j=c;j<c+h;j++){
                    cout<<mt[i][j]<<" ";
                }
                cout<<"\n";
            }
            cout<<"-----------------\n";
        }

    }
    cout<<"done";
}