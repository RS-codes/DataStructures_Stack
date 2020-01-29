/* 2.3-a Reversal using Stack STL */

/*Reverse a string  and Linkedlist using Stack*/

/*using stack to Reverse a string using STL*/
/*Time complexity:  O(n)
   Space complexity: O(n) 
NOTE:  To make space complexity : O(1) , we can use two pointers i,j i->start,j->end; while(i<j) swap elements of i and j  ; i++, j--; check condition and swap until reaches n/2 */

#include<iostream>
#include<string.h>
#include<stack>   //stack from STL
using namespace std;

void Reverse(char *C,int n)     /*   char*C same as char C[],since arrays are passed by ref thru pointer*/
{
    stack<char> S; /*syntax:   stack<datatype> name or identifier*/

    //loop for push
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }

    //loop for pop
    for(int i=0;i<n;i++){
        C[i]=S.top(); //overwrite the char at index i
        S.pop(); //perform pop
    }
}

int main()
{
    char C[50];
    cout<<"Enter a string: ";
    cin.getline(C,50);
    Reverse(C,strlen(C));
    cout<<"Output: "<<C;
    return 0;
}


