#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int pstudentID,char pname[20]){
studentID=pstudentID;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display(){
  cout<<"Student ID: "<<studentID<<endl;
    cout<<"Name: "<<name<<endl;
}

