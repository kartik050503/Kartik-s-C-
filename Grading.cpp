#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks : "<<endl;
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"Your grade is A ";
    }
    else if(marks>=80 && marks<90){
        cout<<"Your grade is B";

    }
    else if (marks>=70 && marks<80){
        cout<<"Your grade is C";

    }
    else if(marks>=60 && marks<70){
        cout<<"Your grade is D";

    }
    else if(marks>=50 && marks<60){
        cout<<"Your grade is E";
    }
    else if(marks<50){
        cout<<"FAIL";
    }
    else if(marks>100){
        cout<<"INVALID MARKS";
    return 0;
}