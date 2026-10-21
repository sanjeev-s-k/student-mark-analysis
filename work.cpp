#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5,total,percentage;
    string name, grade, performance;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter marks subject 1: ";
    cin>>m1;
    cout<<"Enter marks subject 2: ";
    cin>>m2;
    cout<<"Enter marks subject 3: ";
    cin>>m3;
    cout<<"Enter marks subject 4: ";
    cin>>m4;
    cout<<"Enter marks subject 5: ";
    cin>>m5;
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    if(percentage>=90){
        grade = "A++";
        performance = "excellent";
    }
    else if(percentage>=80){
        grade = "A";
        performance = "very good";
    }
    else if(percentage>=70){
        grade = "B";
        performance = "good";
    }
    else if(percentage>=60){
        grade = "C";
        performance = "average";
    }
    else if(percentage>=50){
        grade = "D";
        performance = "pass";
    }
    else{
        grade = "F";
        performance = "Fail";
    }
    cout<<"/n ------ STUDENT RESULT -------"<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"total marks: "<<total<<endl;
    cout<<"percentage: "<<percentage<<endl;
    cout<<"grade: "<<grade<<endl;
    cout<<"performance: "<<performance<<endl;
    return 0;
}