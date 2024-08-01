//SARA KANYAL
//EXP 6 B
//23070123115
//ENTC B2

#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=(n-1);j++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        }
        cout<<"end1";
    
}