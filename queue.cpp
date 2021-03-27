#include<iostream>
using namespace std;

int frnt=-1,rear=-1;
int ara[5];

bool isEmpty(){
    if(frnt==-1 && rear==-1)
        return true;
    else
        return false;
}

bool isFull()
{
    if(rear==4)
        return true;
    else
        return false;
}

void enQueue(int x)
{
    if((rear+1)%5==frnt){
        cout<<"Queue is Full!"<<endl;
        return;
    }

    else if(isEmpty())
        frnt=rear=0;

    else
        rear=(rear+1)%5;

    ara[rear]=x;
}

int deQueue()
{
    if(isEmpty())
        return 0;

    if(frnt==rear)
        frnt=rear=-1;

    else
        frnt=(frnt+1)%5;

    //return ara[frnt];
}
void showQueue()
{
    if(isEmpty()){
        cout<<"The queue is Empty!"<<endl;
        return;
    }
    int i;
    for(i=frnt;i!=rear;i=(i+1)%5)
        cout<<ara[i]<<" ";

    cout<<ara[i]<<endl;
}

int main()
{
    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    enQueue(9);
    enQueue(4);

    //deQueue();
    //enQueue(17);
    showQueue();

    return 0;
}
