/* 2.1 Array implementation of stack */

/* array implementation of stack*/
// Stack - Object oriented implementation using arrays
#include<iostream>
using namespace std;

#define MAX_SIZE 101

class Stack{
private:
    int A[MAX_SIZE];  //array to store the stack
    int top;  //variale to mark the top index of stack
public:
    Stack(){  //constructor
        top=-1;  //for empty stack,set top=-1
    }

    //Push operation to insert an element on top of stack
    void Push(int x){
        if(top==MAX_SIZE-1){  //overflow case
            cout<<"Error: stack overflow"<<endl;
            return;
        }
        A[++top]=x; //pre-increment top
    }

    //Pop operation to remove an element from top of stack
    void Pop(){
        if(top==-1){  //throw error, if stack empty
            cout<<"Error: Stack is empty"<<endl;
            return;
        }
        top--;
    }

    //Top operation to return element at top of stack
    int Top(){
        return A[top];
    }


    //this ftn returns 1(true),if stack is empty,0(false) otherwise
    bool IsEmpty(){
        if(top==-1)return 1;
        return 0;
    }

    //only for testing-not a valid operation of stack
    void Print(){
        cout<<"Stack: ";
        for(int i=0;i<=top;i++)
            cout<<A[i]<<" ";
            cout<<endl;
    }
};

int main()
{ /*Driver code to test the inmplementation*/
    Stack S;
    S.Push(2);
    S.Push(4);
    S.Push(6);
    S.Print();//2 4 6
    S.Pop();
    S.Print();  //2 4
    S.Push(8);
    S.Print();  //2 4 8
    return 0;
}


