#include <stdio.h>
#include<malloc.h>


using namespace std;
struct ListNode{
       int data;
       struct ListNode *next;
       };

void InsertInLinkedList( int data, int position, struct ListNode **head );
void DeleteFromLinkedList(int position, struct ListNode **head);
void printLinkedList(struct ListNode *head);
void multiply(int i, struct ListNode **head);


int main()
{
    int stop; 
    int N, num, i;
    
    
    struct ListNode *head=NULL;
    //printf("Hello World");
    //InsertInLinkedList( 10 , 1, &head);
    //InsertInLinkedList( 20 , 2, &head);
    //InsertInLinkedList( 30 , 3, &head);
    //InsertInLinkedList( 40 , 4, &head);
    
    //DeleteFromLinkedList(2,&head); 
    
    
    
    
    scanf("%d", &N);
    
    while (N--){
          scanf("%d",&num) ;
          InsertInLinkedList( 1 , 1, &head);
          for(i=1 ; i<=num ;i++){
                  printf("i = %d\n",i);
                  multiply(i,&head);
                  printLinkedList(head);
                  printf("\n");
                  }
          printLinkedList(head);
          
          }
          
    scanf("%d",&stop);
    return(0);

    }
    
void multiply(int i, struct ListNode **head){
     struct ListNode *p = *head;
     int bal = 0,last_node_index=0,temp;
     while(p){
              temp = (i * p->data ) + bal;
              p -> data = temp % 10  ;
              printf("p-data = %d\n",p -> data );
              bal = temp /10;
              printf("bal = %d\n",bal );
              last_node_index++;
              printf("last_node_index = %d\n",last_node_index );
              p = p->next; 
             }
             
     if (bal){
              while(bal % 10){
                        last_node_index ++;          
                        InsertInLinkedList(bal % 10,last_node_index ,head);
                        bal = bal/10;
                        }
              
              }
     }    

    
void InsertInLinkedList(int data, int position, struct ListNode **head ){
     int k = 1;
     struct ListNode *p = *head,*q,*newNode;
     newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
     if(!newNode){
                  printf("Memory error !!");
                  return;
                  }
     newNode -> data = data;
     if(position ==1){
                 newNode -> next = *head;
                 *head = newNode;
                 }
     else{
          while( (p -> next !=NULL) && (k< position -1)){
                 k++;
                 //q=p;
                 p = p -> next;
                 }
          if(p ->next ==NULL){
                      p -> next = newNode;
                      newNode->next = NULL;
                      }
          else{
               newNode->next = p -> next;
               p -> next = newNode;
               }
          }

     }
     
     
void printLinkedList(struct ListNode *head ){
     struct ListNode *iterator = head;
     while(iterator){
                 printf("%d",iterator -> data);
                 printf (" -> ");
                 iterator = iterator -> next;
                 
                 }
     }
     
     
void DeleteFromLinkedList(int position, struct ListNode **head){
       struct ListNode *p = *head, *q;
       int k = 1;
       
       if(*head = NULL){
                printf("Empty List");
                return;
                }
       
       if(position == 1){
                   *head = p -> next;
                   printf("deleting %d" , p -> data);
                   free(p);
                   }
       else {
            while ( (k <= position -1) && p->next != NULL){
                  q = p;
                  p = p->next;
                  k++;
                  }
            if ( p->next == NULL ){
                 q->next = NULL;
                 printf("deleting %d" , p -> data);
                 free(p);
               }
            else{
                 q->next = p->next;
                 printf("deleting %d" , p -> data);
                 free(p);
                 }
            }
       }

