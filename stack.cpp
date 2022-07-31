#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int top;
    int arr[5];
public:
    Stack(){
        top = -1;
        for(int i=0; i<5; i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else 
            return false;   
    }
    bool isFull(){
        if(top==4){
            return true;
        }else
            return false;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack overflow"<<endl;
        }else{
            top++;
            arr[top]=val;
        }
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }else{
            int popValue = arr[top];
            arr[top]=0;
            top--;
            
            return popValue;
        }
    }

    int count(){
        return (top+1);
    }

    int peak(int pos){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return 0;
        }else{
            return arr[pos];
        }
    }

    int change(int pos, int value){
        arr[pos]=value;
        cout<<"Value changed at the location "<<pos<<endl;
    }   

    void display(){
        cout<<"All values in the Stack are "<<endl;
        for(int i=4; i>=0; i--){
            cout<<arr[i]<<endl;
        }
    }

    
};



int main()
{
    Stack s1;
    int option, postion, value;

    do{
        cout<<"What operation do you want to perform? Select option number. Enter 0 to exit. "<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;  
        cout<<"8. display()"<<endl;
        cout<<"9. clear screen"<<endl<<endl;

        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                cout<<"Enter an item to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<"Pop value was called"<<endl;
                s1.pop();
                break;
            case 3:
                if(s1.isEmpty()){
                    cout<<"Stack is empty"<<endl;

                }else{
                    cout<<"Stack is not empty"<<endl;
                }   
                break;
            case 4:
                if(s1.isFull()){
                    cout<<"Stack is full"<<endl;
                }else{
                    cout<<"Stack is not full"<<endl;
                }
                break;
            case 5: 
                cout<<"Enter the position of item you want to peek: ";
                cin>>postion;
                cout<<"Peek function called - Value of position "<<postion<<" is ";
                s1.peak(postion);
                break;
            case 6:
                cout<<"Count function is called - number of items in the Stack are: "<<s1.count()<<endl<<endl;
                break;
            case 7:
                cout<<"Function change Called: "<<endl;
                cout<<"Enter the position of the item you want to change: "<<endl;
                cin>>postion;
                cout<<"Enter the value of the position you want to change: "<<endl;
                cin>>value;

                s1.change(postion, value);
                break;
            case 8:
                cout<<"Display Function Called: "<<endl;
                s1.display();
                cout<<endl;
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Enter the Option number: "<<endl;
        }
    }while(option != 0);


    return 0;
}
