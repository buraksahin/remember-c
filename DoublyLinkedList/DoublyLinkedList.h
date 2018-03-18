#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST
using namespace std;

/**
 * Generic Type Linked Doubly Linked List
 */
template<class GD>
class Node{
public:
    // Constructors
    Node(){
        nextNode = 0;
        prevNode = 0;
    }
    Node(const GD& gdata, Node<GD> *n = 0, Node<GD> *p = 0){
        data = gdata;
        nextNode = n;
        prevNode = p;
    }

    // Variables
    GD data;
    Node<GD> *nextNode, *prevNode;
};

template<class GD>
class DoublyLinkedList{
public:
    // Constructor
    DoublyLinkedList(){
        head = tail = 0;
    }

    void clear();
    // Deconstructor
    ~DoublyLinkedList(){
        clear();
    }

    // Check IsEmpty
    bool isEmpty() const{
        return head == 0;
    }

    // Set Null (Head and Tail)
    void setToNull(){
        head = tail = 0;
    }

    // Declarations
    void addToDLLHead(const GD&); // Add a new item to tail
    void addToDLLTail(const GD&); // Add a new item to tail
    GD deleteFromDLLHead();       // Delete head
    GD deleteFromDLLTail();       // Delete tail
    GD& getFirst();               // Get first item
    GD* find(const GD&) const;    // Find item
    
protected:
    Node<GD> *head, *tail;
    friend ostream& operator<<(ostream& out, const DoublyLinkedList<GD>& dll){
        for(Node<GD> *tmp = dll.head; tmp != 0; tmp = tmp->nextNode)
            out << tmp->data << ' ';
        return out;
    }
};

template<class GD>
void DoublyLinkedList<GD>::addToDLLHead(const GD& data){
    if(head != 0){
        head = new Node<GD>(data,head,0);
        head->next->prev = head;
    }
    else head = tail = new Node<GD>(data);
}

template<class GD>
void DoublyLinkedList<GD>::addToDLLTail(const GD& data){
    if(tail != 0){
        tail = new Node<GD>(data,0,tail);
        tail->prevNode->nextNode = tail;
    }
    else head = tail = new Node<GD>(data);
}

template<class GD>
GD DoublyLinkedList<GD>::deleteFromDLLHead(){
    GD el = head->data;
    if(head == tail){
        delete head;
        head = tail = 0;
    }
    else{
        head = head->nextNode;
        delete head->prevNode;
        head->prevNode = 0;
    }
    return el;
}

template<class GD>
GD DoublyLinkedList<GD>::deleteFromDLLTail(){
    GD el = tail->info;
    if(head == tail){
        delete head;
        head = tail = 0;
    }
    else{
        tail = tail->prevNode;
        delete tail->nextNode;
        tail->next = 0;
    }
    return el;
}

template <class GD>
GD* DoublyLinkedList<GD>::find(const GD& gdata) const{
    Node<GD> *tmp = head;
    for( ; tmp != 0 && !(tmp->data == gdata); tmp = tmp->nextNode);
    if(tmp == 0)
         return 0;
    else return &tmp->data;
}

template<class GD>
GD& DoublyLinkedList<GD>::getFirst(){
    return head->data;
}

template<class GD>
void DoublyLinkedList<GD>::clear(){
    for(Node<GD> *tmp; head != 0; ){
        tmp = head;
        head = head->nextNode;
        delete tmp;
    }
}

#endif
