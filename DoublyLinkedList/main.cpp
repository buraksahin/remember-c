#include <iostream>
#include "QUEUE.h"
#include <stack>
using namespace std;

/**
 * Stack based queue reversing
 */
void reverseQueue(QUEUE  & que)
{
	stack<int> st;                  // STL stack
    int sOQ = que.getSizeOfQueue(); // Keep the size of queue

    // Push all the items to stack and dequeue from 'que'<QUEUE>
    for(int i=0; i<sOQ; i++){
        st.push(que.dequeue());
    }

    int sOS = (int)st.size(); // Keep the size of stack

    // Enqueue all items from stack and pop from 'st'<stack>
    for(int i=0; i<sOS; i++){
        int temp = st.top();
        que.enqueue(temp);
        st.pop();
    }
}

int main()
{
    // Variables
    DoublyLinkedList<int> dLL;  // Doubly Linked List
    QUEUE myQue;                // Queue

    // Loop for enqueue numbers to queue in range of [0,10)
    for(int i=0;i<10;i++){
        myQue.enqueue(i);   // Enqueue 'i' to Queue
    }
	myQue.print();          // Print Queue
	reverseQueue(myQue);    // Reverse Queue
	myQue.print();          // Print Queue
    
    /*
     * Other Test(s)
     */
    // Check -> isEmpty
    myQue.isEmpty()? cout<<"\nQueue is empty."<<endl: cout<<"\nQueue is not empty."<<endl;
    
    // Check -> Dequeue Method
    cout<<"\nDequeue first item "<<myQue.dequeue()<<" from the list."<<endl;    // Print Dequeued Item
    myQue.print();                                                              // Print Queue
    
    cout<<"\nSet empty."<<endl;
    // Dequeue all items from the queue
    while(myQue.getSizeOfQueue()){
        myQue.dequeue();
    }
    myQue.dequeue(); // Check dequeue from empty the queue
    
    cout<<"\nAdd 1 and 2 to the queue."<<endl;
    // Add numbers to empty queue
    myQue.enqueue(1);
    myQue.enqueue(2);
    myQue.print();
}
