#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

struct Student
{
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};

void acceptStuff(int n){
    Student s;
    float var;
    cout<<"\nEnter the details of student "<<n;
    cout<<"\nEnter name";
    cin>>s.name;
    cout<<"\nEnter department";
    cin>>s.department;
    cout<<"\nEnter year of study";
    cin>>s.yearOfStudy;
    cout<<"\nEnter cgpa";
    cin>>var;
    cout<<"\nDetails of students";
    cout<<"\nStudent "<<n;
    cout<<"\nName:"<<s.name;
    cout<<"\nDepartment:"<<s.department;
    cout<<"\nYear of study:"<<s.yearOfStudy;
    cout<<"\nCGPA:"<<round(var);
}

int main()
{
    int n;
    cout<<"Enter the number of students";
    cin>>n;
    for (int i = 1; i <= n; i ++){
        acceptStuff(i);
    }
}
