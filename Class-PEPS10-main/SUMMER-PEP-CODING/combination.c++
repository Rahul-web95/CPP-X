#include<iostream>
using namespace std;
int main(){
    int sum;
    cout<<"enter sum:";
    cin>>sum;
    cout<<"Combinations are:"<<endl;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            for(int k=1;k<=6;k++){
                if(i+j+k==sum){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
}