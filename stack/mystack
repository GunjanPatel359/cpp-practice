#include <iostream>
using namespace std;
class MyStack{
private:
    int size;
    int top;
    int *arr;
public:
    MyStack(int size){
        this->size=size;
        this->top=-1;
        this->arr=new int[size];
    };
    ~MyStack() {
        delete[] arr;
    }
    bool isFull(){
        if(top+1==size){
            cout << "stack is full"<< endl;
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(top==-1){
            cout << "stack is empty"<< endl;
            return true;
        }
        return false;
    }
    int push(int element){
        if(this->isFull()){
            return -1;
        }else{
            this->top++;
            this->arr[this->top]=element;
            return 0;
        }
    }
    int pop(){
        if(this->isEmpty()){
            return -1;
        }else{
            int temp=this->arr[this->top];
            this->top--;
            return temp;
        }
    }
    int peek(){
        if(this->isEmpty()){
            return -1;
        }else{
            return this->arr[this->top];
        }
    }
    int sizeCheck(){
        return this->size;
    }
};

int main() {
    MyStack s1(5);
    s1.peek();
    s1.push(4);
    cout <<s1.peek() <<endl;
    s1.push(5);
    s1.push(6);
    cout <<s1.peek() <<endl;
    s1.pop();
    cout <<s1.peek() <<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
