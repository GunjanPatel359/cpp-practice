#include <iostream>
#include <string>
using namespace std;

class MyStack {
private:
    int size;
    int top;
    char *arr;  
public:
    MyStack(int size) {
        this->size = size;
        this->top = -1;
        this->arr = new char[size];  
    }
    
    ~MyStack() {
        delete[] arr;
    }
    
    bool isFull() {
        return (top + 1 == size);
    }
    
    bool isEmpty() {
        return (top == -1);
    }
    
    void push(char element) {
        if (!isFull()) {
            arr[++top] = element;
        }
    }
    
    char pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
        return '\0'; 
    }
    
    char peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return '\0';  
    }
};

bool matchSymbol(char a) {
    return (a == '(' || a == '{' || a == '[');
}

bool matchReverseSymbol(char a) {
    return (a == ')' || a == '}' || a == ']');
}

bool matchTheSymbol(char a, char b) {
    if (a == '(' && b == ')') return true;
    if (a == '{' && b == '}') return true;
    if (a == '[' && b == ']') return true;
    return false;
}

int main() {
    MyStack s1(100);
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (matchReverseSymbol(str[i])) {
            if (s1.isEmpty() || !matchTheSymbol(s1.pop(), str[i])) {
                s1.push(str[i]); 
                break; 
            }
        } else if (matchSymbol(str[i])) {
            s1.push(str[i]);
        }
    }

    if (s1.isEmpty()) {
        cout << str << " is valid" << endl;
    } else {\
        cout << str << " is not valid. Mismatch at: " << s1.peek() << endl;
    }

    return 0;
}
