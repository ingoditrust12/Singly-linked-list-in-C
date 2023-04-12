// A C program for traversal of a linked list//
// Written by Frankdegreat//

#include <stdio.h>
#include<stdlib.h>


struct Node {
 int dat;
 struct Node* forward;

};


//prints contents of linked list starting
// from the given node

void printlist(struct Node* x)
{
    while(x !=NULL) {
      printf(" %d ", x->dat);
      x =x->forward;
    }
}



int main()
{


   struct Node* head = NULL;
   struct Node* second = NULL;
   struct Node* third = NULL;
   struct Node* fourth = NULL;
   struct Node* fifth = NULL;
   struct Node* sixth = NULL;
   struct Node* seventh = NULL;
   struct Node* eight = NULL;
   struct Node* nine = NULL;
   struct Node* ten = NULL;




// allocate 10 nodes in the heap//

   head =  (struct Node*)malloc(sizeof(struct Node));
   second =(struct Node*)malloc(sizeof(struct Node));
   third = (struct Node*)malloc(sizeof(struct Node));
   fourth = (struct Node*)malloc(sizeof(struct Node));
   fifth =  (struct Node*)malloc(sizeof(struct Node));
   sixth =  (struct Node*)malloc(sizeof(struct Node));
   seventh =(struct Node*)malloc(sizeof(struct Node));
   eight  = (struct Node*)malloc(sizeof(struct Node));
   nine  =  (struct Node*)malloc(sizeof(struct Node));
   ten =    (struct Node*)malloc(sizeof(struct Node));


  //Assign data to the Nodes//

  head->dat = 1;
  head->forward = second;

  second->dat = 2;
  second->forward = third;

  third->dat = 3;
  third->forward = fourth;

  fourth->dat = 4;
  fourth->forward = fifth;

  fifth->dat = 5;
  fifth->forward = sixth;


  sixth->dat = 6;
  sixth->forward = seventh;

  seventh->dat = 7;
  seventh->forward = eight;

  eight->dat = 8;
  eight->forward = nine;

  nine->dat = 9;
  nine->forward = ten;

  ten->dat = 10;
  ten->forward = NULL;

   // Function call//
   printlist(head);


   return 0;
   




}
