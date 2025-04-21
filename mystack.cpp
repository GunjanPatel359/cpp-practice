
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

    return 0;
}
