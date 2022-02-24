#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

struct LinkedList 
{
        struct Link 
        {
               void* data;
               Link* next;
              
               void initialize(void* dat, Link* nxt) 
               {
                   data = dat;
                   next = nxt;
               }
           }* head;
      Link *end;

//---------
int size;
  
// This should initialize fields for the empty LinkedList
void initialize() {
        //initializing head and end to NULL and size to 0
        head=NULL;
        end=NULL;
        size=0;
}

  
/*---------------------------------------------------------
* adds an element with *dat to the end of the linked list.
* assumes that *dat is dynamically allocated
  --------------------------------------------------------- */
void add(void* dat) 
{
        //creating a new node, setting dat as data and NULL as next
        Link *lnk=new Link();
        lnk->data=dat;
        lnk->next=NULL;
        
        //if head is NULL, setting lnk as head node
        if(head==NULL)
        {
                head=lnk;
        }else
        {
                //else adding lnk as next of end
                end->next=lnk;
        }
        //setting lnk as new end node, updating size
        end=lnk;
        size++;
}
  
/*----------------------------------
* This returns the data at position index
 ---------------------------------*/
void* get(int index) 
{
    
        //returning NULL if index is invalid
        if(index<0 || index>=size)
        {
                return NULL;
        }
        //taking reference to head, advancing index times
        Link* curr=head;
        for(int i=0;i<index;i++)
        {
                curr=curr->next;
        }
        //returning data of current node
        return curr->data;
}
  
/*----------------------------------
* Frees the memory of the LinkedList
  ----------------------------------*/
    void cleanup() 
    {
        //looping until list is empty
        while(head!=NULL)
        {
                //taking a reference to next of head
                Link* next=head->next;
                //deleting head
                delete head;
                //setting next as new head
                head=next;
        }
        //resetting end and size
        end=NULL;
        size=0;
    }
    
};
#endif