/* 2.2 linked list implementation of stack */

#include<iostream>
using namespace std;

class Stack{
private:
    int data;
    Stack *link,*top;
public:
    Stack(){
        top=NULL;
    }

    void Push(int x){
        Stack* temp=new Stack;
        temp->data=x;
        temp->link=NULL;
        if(top==NULL){
            top=temp;
            return;
        }
        Stack* temp1=top;
        temp->link=temp1;
        top=temp;
    }

    void Pop(){
        Stack* temp=top;
        if(temp==NULL) {
            cout<<"Error: Stack Empty"<<endl;
            return;
        }
        top=temp->link;
        delete temp; //dealloc memory from heap
    }

    int Top(){
        Stack* temp=top;
        cout<<temp->data<<endl;
        return top->data; //return temp
    }

    int IsEmpty(){
        if(top==NULL) return 1;
        else return 0;
    }

    //only for test purpose- NOT A VALID OPERATION OF STACK
    void Print(){
        Stack* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }

};

int main()
{
    Stack S;
    S.Push(3);
    S.Push(2);
    S.Push(1);
    S.Print(); //1 2 3
    S.Pop();
    S.Print(); //2 3
    S.Push(4);
    S.Print(); //4 2 3
    return 0;
}

