#include<iostream>
#include<string>
using namespace std;

class Person{
private:
    int age;
    string name;
public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<< "Name:"<<name<<" ,Age: "<<age<<endl;
    }
};

class Student: public Person{
private:
    long long rollNo;
public:
    Student(string name,int age,long long rollNo):Person(name,age){
        this->rollNo=rollNo;
    }
    void displayStudent() {
        display();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main(){
    Person p1("Gunjan",20);
    p1.display();
    Student s1("G",10,22012011131);
    s1.displayStudent();
    return 0;
}
