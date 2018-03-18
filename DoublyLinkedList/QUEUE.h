#include "DoublyLinkedList.h"

class QUEUE
{
private:
	DoublyLinkedList<int> list;

public:
	// Print Queue
	void print(){
        cout<<list<<endl;
	}

    // Declarations
    int sizeOfQueue = 0;    // Size of Queue
    void enqueue(int data); // Add data to tail
    int dequeue();          // Remove head and return the data
    bool isEmpty();         // Return whether queue is empty or not
    int getSizeOfQueue();   // Return size of the queue
    int getFirst();         // Get the first data from the queue
};

/**
 * Enqueue item to Doubly Linked List
 * Add item to end of the list (tail)
 *
 * @param data is type of integer
 */
void QUEUE::enqueue(int data){
    list.addToDLLTail(data);
    sizeOfQueue++;
}

/**
 * Dequeue item from Doubly Linked List
 * Remove head and return data from the list
 *
 * @return int
 */
int QUEUE::dequeue(){
    if(sizeOfQueue>0){
        int tData = list.getFirst();
        list.deleteFromDLLHead();
        sizeOfQueue--;
        return tData;
    }
    cout<<"Queue is empty."<<endl;
    return 0;
}

/**
 * Check the Queue and return boolean
 * if the queue is empty return true
 * otherwise return false
 *
 * @return bool
 */
bool QUEUE::isEmpty(){
    if(sizeOfQueue==0){
        return true;
    }
    else{
        return false;
    }
}

/**
 * Get the size of queue
 *
 * @return int
 */
int QUEUE::getSizeOfQueue(){return sizeOfQueue;}

/**
 * Get the first item from queue
 *
 * @return int
 */
int QUEUE::getFirst(){
    return list.getFirst();
}
