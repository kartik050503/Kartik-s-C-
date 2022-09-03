#include<iostream>
using namespace std;
int main(){
    int trows;
    cin>>trows;
    int rowno=1;

    while(rowno<=trows){
         
    int countstar=1;
    while(countstar<=rowno){
        cout<<"*"<<" ";
        countstar=countstar+1;

    }
    cout<<endl;
    rowno=rowno+1;
    }
    return 0;

}
