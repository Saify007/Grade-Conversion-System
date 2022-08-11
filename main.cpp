#include <iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

int st1_marks1(float marks1){
    if(marks1>100||marks1<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st1_marks2(float marks2){
    if(marks2>100||marks2<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st1_marks3(float marks3){
    if(marks3>100||marks3<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}



int st2_marks1(float marks1){
    if(marks1>100||marks1<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st2_marks2(float marks2){
    if(marks2>100||marks2<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st2_marks3(float marks3){
    if(marks3>100||marks3<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}


int st3_marks1(float marks1){
    if(marks1>100||marks1<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st3_marks2(float marks2){
    if(marks2>100||marks2<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}
int st3_marks3(float marks3){
    if(marks3>100||marks3<0){
        throw "Marks can not be greater than 100 and less than 0!";
    }
    return 0;
}


class student{
public:
    int id;
    char name[50];
};

class courses:public student{
public:
    float marks1,marks2,marks3;
};

class grade{
public:

    grade(float a1, float a2, float a3){
    if(a1>=90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    A+"<<"     4.0"<<endl;
    }
    else if(a1>=85&&a1<90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    A"<<"      3.75"<<endl;
    }
    else if(a1>=80&&a1<85){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    B+"<<"     3.50"<<endl;
    }
    else if(a1>=75&&a1<80){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    B"<<"      3.25"<<endl;
    }
    else if(a1>=70&&a1<75){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    C+"<<"     3.0"<<endl;
    }
    else if(a1>=65&&a1<70){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    C "<<"     2.75"<<endl;
    }
    else if(a1>=60&&a1<65){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    D+"<<"     2.50"<<endl;
    }
    else if(a1>=50&&a1<60){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    D "<<"     2.25"<<endl;
    }
    else if(a1<50){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<a1<<"    F "<<"     0.00"<<endl;
    }
    if(a2>=90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                  "<<a2<<"    A+"<<"     4.0"<<endl;
    }
    else if(a2>=85&&a2<90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<a2<<"    A"<<"      3.75"<<endl;
    }
    else if(a2>=80&&a2<85){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<a2<<"    B+"<<"     3.50"<<endl;
    }
    else if(a2>=75&&a2<80){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<a2<<"    B"<<"      3.25"<<endl;
    }
    else if(a2>=70&&a2<75){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<a2<<"    C+"<<"     3.0"<<endl;
    }
    else if(a2>=65&&a2<70){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<a2<<"    C "<<"     2.75"<<endl;
    }
    else if(a2>=60&&a2<65){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<a2<<"    D+"<<"     2.50"<<endl;
    }
    else if(a2>=50&&a2<60){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<a2<<"    D "<<"     2.25"<<endl;
    }
    else if(a2<50){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<a2<<"    F "<<"     0.00"<<endl;
    }
    if(a3>=90){
    cout<<"Business Mathematics 1                       "<<a3<<"    A+"<<"     4.0"<<endl;
    }
    else if(a3>=85&&a3<90){
    cout<<"Business Mathematics 1                        "<<a3<<"    A"<<"      3.75"<<endl;
    }
    else if(a3>=80&&a3<85){
    cout<<"Business Mathematics 1                        "<<a3<<"    B+"<<"     3.50"<<endl;
    }
    else if(a3>=75&&a3<80){
    cout<<"Business Mathematics 1                        "<<a3<<"    B"<<"      3.25"<<endl;
    }
    else if(a3>=70&&a3<75){
    cout<<"Business Mathematics 1                      "<<a3<<"    C+"<<"     3.0"<<endl;
    }
    else if(a3>=65&&a3<70){
    cout<<"Business Mathematics 1                        "<<a3<<"    C "<<"     2.75"<<endl;
    }
    else if(a3>=60&&a3<65){
    cout<<"Business Mathematics 1                       "<<a3<<"    D+"<<"     2.50"<<endl;
    }
    else if(a3>=50&&a3<60){
    cout<<"Business Mathematics 1                       "<<a3<<"    D "<<"     2.25"<<endl;
    }
    else if(a3<50){
    cout<<"Business Mathematics 1                        "<<a3<<"    F "<<"     0.00"<<endl<<endl<<endl;
    }
    }


    grade(float b1, float b2, float b3, float overload1){
    if(b1>=90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    A+"<<"     4.0"<<endl;
    }
    else if(b1>=85&&b1<90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    A"<<"      3.75"<<endl;
    }
    else if(b1>=80&&b1<85){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    B+"<<"     3.50"<<endl;
    }
    else if(b1>=75&&b1<80){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    B"<<"      3.25"<<endl;
    }
    else if(b1>=70&&b1<75){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    C+"<<"     3.0"<<endl;
    }
    else if(b1>=65&&b1<70){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    C "<<"     2.75"<<endl;
    }
    else if(b1>=60&&b1<65){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    D+"<<"     2.50"<<endl;
    }
    else if(b1>=50&&b1<60){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    D "<<"     2.25"<<endl;
    }
    else if(b1<50){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<b1<<"    F "<<"     0.00"<<endl;
    }
    if(b2>=90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING              "<<b2<<"    A+"<<"     4.0"<<endl;
    }
    else if(b2>=85&&b2<90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING               "<<b2<<"    A"<<"      3.75"<<endl;
    }
    else if(b2>=80&&b2<85){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING               "<<b2<<"    B+"<<"     3.50"<<endl;
    }
    else if(b2>=75&&b2<80){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<b2<<"    B"<<"      3.25"<<endl;
    }
    else if(b2>=70&&b2<75){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<b2<<"    C+"<<"     3.0"<<endl;
    }
    else if(b2>=65&&b2<70){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<b2<<"    C "<<"     2.75"<<endl;
    }
    else if(b2>=60&&b2<65){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<b2<<"    D+"<<"     2.50"<<endl;
    }
    else if(b2>=50&&b2<60){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING               "<<b2<<"    D "<<"     2.25"<<endl;
    }
    else if(b2<50){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<b2<<"    F "<<"     0.00"<<endl;
    }
    if(b3>=90){
    cout<<"Business Mathematics 1                        "<<b3<<"    A+"<<"     4.0"<<endl;
    }
    else if(b3>=85&&b3<90){
    cout<<"Business Mathematics 1                        "<<b3<<"    A"<<"      3.75"<<endl;
    }
    else if(b3>=80&&b3<85){
    cout<<"Business Mathematics 1                       "<<b3<<"    B+"<<"     3.50"<<endl;
    }
    else if(b3>=75&&b3<80){
    cout<<"Business Mathematics 1                        "<<b3<<"    B"<<"      3.25"<<endl;
    }
    else if(b3>=70&&b3<75){
    cout<<"Business Mathematics 1                        "<<b3<<"    C+"<<"     3.0"<<endl;
    }
    else if(b3>=65&&b3<70){
    cout<<"Business Mathematics 1                        "<<b3<<"    C "<<"     2.75"<<endl;
    }
    else if(b3>=60&&b3<65){
    cout<<"Business Mathematics 1                        "<<b3<<"    D+"<<"     2.50"<<endl;
    }
    else if(b3>=50&&b3<60){
    cout<<"Business Mathematics 1                        "<<b3<<"    D "<<"     2.25"<<endl;
    }
    else if(b3<50){
    cout<<"Business Mathematics 1                        "<<b3<<"    F "<<"     0.00"<<endl<<endl<<endl;
    }
    }


    grade(float c1, float c2, float c3, double overload2){
    if(c1>=90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    A+"<<"     4.0"<<endl;
    }
    else if(c1>=85&&c1<90){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    A"<<"      3.75"<<endl;
    }
    else if(c1>=80&&c1<85){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    B+"<<"     3.50"<<endl;
    }
    else if(c1>=75&&c1<80){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    B"<<"      3.25"<<endl;
    }
    else if(c1>=70&&c1<75){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    C+"<<"     3.0"<<endl;
    }
    else if(c1>=65&&c1<70){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    C "<<"     2.75"<<endl;
    }
    else if(c1>=60&&c1<65){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    D+"<<"     2.50"<<endl;
    }
    else if(c1>=50&&c1<60){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    D "<<"     2.25"<<endl;
    }
    else if(c1<50){
    cout<<"INTRODUCTION TO PROGRAMMING     "<<c1<<"    F "<<"     0.00"<<endl;
    }
    if(c2>=90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<c2<<"    A+"<<"     4.0"<<endl;
    }
    else if(c2>=85&&c2<90){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING               "<<c2<<"    A"<<"      3.75"<<endl;
    }
    else if(c2>=80&&c2<85){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<c2<<"    B+"<<"     3.50"<<endl;
    }
    else if(c2>=75&&c2<80){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<c2<<"    B"<<"      3.25"<<endl;
    }
    else if(c2>=70&&c2<75){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<c2<<"    C+"<<"     3.0"<<endl;
    }
    else if(c2>=65&&c2<70){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                 "<<c2<<"    C "<<"     2.75"<<endl;
    }
    else if(c2>=60&&c2<65){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<c2<<"    D+"<<"     2.50"<<endl;
    }
    else if(c2>=50&&c2<60){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING               "<<c2<<"    D "<<"     2.25"<<endl;
    }
    else if(c2<50){
    cout<<"ENGLISH READING SKILLS & PUBLIC SPEAKING                "<<c2<<"    F "<<"     0.00"<<endl;
    }
    if(c3>=90){
    cout<<"Business Mathematics 1                        "<<c3<<"    A+"<<"     4.0"<<endl;
    }
    else if(c3>=85&&c3<90){
    cout<<"Business Mathematics 1                       "<<c3<<"    A"<<"      3.75"<<endl;
    }
    else if(c3>=80&&c3<85){
    cout<<"Business Mathematics 1                       "<<c3<<"    B+"<<"     3.50"<<endl;
    }
    else if(c3>=75&&c3<80){
    cout<<"Business Mathematics 1                        "<<c3<<"    B"<<"      3.25"<<endl;
    }
    else if(c3>=70&&c3<75){
    cout<<"Business Mathematics 1                       "<<c3<<"    C+"<<"     3.0"<<endl;
    }
    else if(c3>=65&&c3<70){
    cout<<"Business Mathematics 1                        "<<c3<<"    C "<<"     2.75"<<endl;
    }
    else if(c3>=60&&c3<65){
    cout<<"Business Mathematics 1                      "<<c3<<"    D+"<<"     2.50"<<endl;
    }
    else if(c3>=50&&c3<60){
    cout<<"Business Mathematics 1                       "<<c3<<"    D "<<"     2.25"<<endl;
    }
    else if(c3<50){
    cout<<"Business Mathematics 1                       "<<c3<<"    F "<<"     0.00"<<endl<<endl<<endl;
    }
    }
};









int main()
{
    courses st1,st2,st3;
    cout<<"==================================="<<endl;
    cout<<"      Grade Conversion System"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Input student 1 Name: ";
    cin>>st1.name;
    cout<<"Input Student 1 ID: ";
    cin>>st1.id;
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"Input Marks For The Courses For Student 1"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input INTRODUCTION TO PROGRAMMING Marks: ";
    cin>>st1.marks1;
    try{
       st1_marks1(st1.marks1);
    }
    catch(const char* msg1){
       cerr<<msg1<<endl;
    }
    while(st1.marks1>100||st1.marks1<0){
        cout<<"Input Marks Again: ";
        cin>>st1.marks1;
    }
    cout<<"Input ENGLISH READING SKILLS & PUBLIC SPEAKING Marks: ";
    cin>>st1.marks2;
    try{
       st1_marks2(st1.marks2);
    }
    catch(const char* msg2){
       cerr<<msg2<<endl;
    }
    while(st1.marks2>100||st1.marks2<0){
        cout<<"Input Marks Again: ";
        cin>>st1.marks2;
    }
    cout<<"Input Business Mathematics 1  Marks: ";
    cin>>st1.marks3;
    try{
       st1_marks3(st1.marks3);
    }
    catch(const char* msg3){
       cerr<<msg3<<endl;
    }
    while(st1.marks3>100||st1.marks3<0){
        cout<<"Input Marks Again: ";
        cin>>st1.marks3;
    }
    system("CLS");
    cout<<"==================================="<<endl;
    cout<<"      Grade Conversion System"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Input student 2 Name: ";
    cin>>st2.name;
    cout<<"Input Student 2 ID: ";
    cin>>st2.id;
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"Input Marks For The Courses For Student 2"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input INTRODUCTION TO PROGRAMMING Marks: ";
    cin>>st2.marks1;
    try{
       st2_marks1(st2.marks1);
    }
    catch(const char* msg4){
       cerr<<msg4<<endl;
    }
    while(st2.marks1>100||st2.marks1<0){
        cout<<"Input Marks Again: ";
        cin>>st2.marks1;
    }
    cout<<"Input ENGLISH READING SKILLS & PUBLIC SPEAKING Marks: ";
    cin>>st2.marks2;
    try{
       st2_marks2(st2.marks2);
    }
    catch(const char* msg5){
       cerr<<msg5<<endl;
    }
    while(st2.marks2>100||st2.marks2<0){
        cout<<"Input Marks Again: ";
        cin>>st2.marks2;
    }
    cout<<"Input Business Mathematics 1  Marks: ";
    cin>>st2.marks3;
    try{
       st2_marks3(st2.marks3);
    }
    catch(const char* msg6){
       cerr<<msg6<<endl;
    }
    while(st2.marks3>100||st2.marks3<0){
        cout<<"Input Marks Again: ";
        cin>>st2.marks3;
    }
    system("CLS");
    cout<<"==================================="<<endl;
    cout<<"      Grade Conversion System"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Input student 1 Name: ";
    cin>>st3.name;
    cout<<"Input Student 1 ID: ";
    cin>>st3.id;
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"Input Marks For The Courses For Student 3"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input INTRODUCTION TO PROGRAMMING Marks: ";
    cin>>st3.marks1;
    try{
       st3_marks1(st3.marks1);
    }
    catch(const char* msg7){
       cerr<<msg7<<endl;
    }
    while(st3.marks1>100||st3.marks1<0){
        cout<<"Input Marks Again: ";
        cin>>st3.marks1;
    }
    cout<<"Input ENGLISH READING SKILLS & PUBLIC SPEAKING Marks: ";
    cin>>st3.marks2;
    try{
       st3_marks2(st3.marks2);
    }
    catch(const char* msg8){
       cerr<<msg8<<endl;
    }
    while(st3.marks2>100||st3.marks2<0){
        cout<<"Input Marks Again: ";
        cin>>st3.marks2;
    }
    cout<<"Input Business Mathematics 1  Marks: ";
    cin>>st3.marks3;
    try{
       st3_marks3(st3.marks3);
    }
    catch(const char* msg9){
       cerr<<msg9<<endl;
    }
    while(st3.marks3>100||st3.marks3<0){
        cout<<"Input Marks Again: ";
        cin>>st3.marks3;
    }
    system("CLS");
    cout<<endl<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"         Details Of Student 1"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<st1.name<<endl;
    cout<<"ID: "<<st1.id<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Course Name                  Marks  Grade    CGPA"<<endl;
    cout<<"============================================================="<<endl;
    grade obj1(st1.marks1, st1.marks2, st1.marks3);

    cout<<endl<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"         Details Of Student 2"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<st2.name<<endl;
    cout<<"ID: "<<st2.id<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Course Name                  Marks  Grade    CGPA"<<endl;
    cout<<"============================================================="<<endl;
    float overload1=0;
    grade obj2(st2.marks1, st2.marks2, st2.marks3, overload1 );

    cout<<endl<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"         Details Of Student 3"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<st3.name<<endl;
    cout<<"ID: "<<st3.id<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Course Name                  Marks  Grade    CGPA"<<endl;
    cout<<"============================================================="<<endl;
    double overload2=0;
    grade obj3(st3.marks1, st3.marks2, st3.marks3, overload2);

    return 0;
}
