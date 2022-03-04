
#pragma once
#include <iostream>
//make this as Stack class
//#pragma once

#include <iostream>
using namespace std;

class Stack 
{
   struct Link 
   {
       //make this as double data type
       double data;
       Link* next;
       //
       void initialize(double dat, Link* nxt) 
       {
           data = dat;
           next = nxt;
       }
   }*head;

public:
   //make this as default constructor to create empty stack
   Stack() 
   {
       head = NULL;
   }

   //overloaded constructor
   //build the stack of elements starting at 1.0 and increase by 0.1 onward
   Stack(int n)
   {
       double j = 1.0;
       for (int i = 0; i < n; i++)
       {
           push(j);
           j += 0.1; //increment by 0.1
       }
   }
   //push a double 
   void push(double dat) 
   {

       Link* newLink = new Link;
       newLink->initialize(dat, head);
       head = newLink;

   }
   //return double
   double peek() {
       if (head == 0) 
       {
           std::cout << "Stack is empty";
       }
       return head->data;
   }

    // pop function to return the double
   double pop() 
   {
       if (head == 0)
           return 0;
       double result = head->data;
       Link* Prev_Head = head;
       head = head->next;
       delete Prev_Head;
       return result;
   }

   // deconstructor that deletes all the stack using pop
   ~Stack() 
   {
       if (head == 0) 
       {
           std::cout << "Stack is empty";
       }
       else 
       {
           Link* current = head;
           while (current != NULL)
           {
               cout << " " << peek();
               pop();               // pop to delete stack
               current = head;
           }

       }
    
   }

};