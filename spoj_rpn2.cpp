#include<iostream>
#include<malloc.h>

using namespace std;

struct stack{
       int top;
       int capacity;
       char *array ;
       };
void create_stack(struct stack *s);
void push(struct stack *s , char data);
int isFull(struct stack *s);
int isEmpty(struct stack *s);
char pop(struct stack *s);
void printStack(struct stack *s);
void printTop(struct stack *s);
void doubleStackSize(struct stack *s);

int main(){
    int stop,user_input;
    char data,expr[400];
    int N;
    struct stack s;
    create_stack(&s);
    cin >> N;
    while(N--){
               cin >> expr;
               //cout << "expr = " << expr <<endl;
               //cout << expr[5]<<endl;
               int i=0,j=0;
               char result[400];
               while (expr[i] != '\0'){
                     if(expr[i] == '('){
                                i++;
                                continue;
                                }
                     else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '/' ||expr[i] == '*' ||expr[i] == '^' )
                          push(&s,expr[i]);
                          
                     else if(expr[i] == ')')
                          result[j++] = pop(&s);
                          
                     else
                         result[j++] = expr[i];
                         
                     i++;
                     } 
                     result[j] = '\0';
                     cout << result <<endl;
               }
    //while(1){
//             cin >> user_input;
//             if(user_input ==1){
//                           cin >> data;
//                           push(&s, data);
//                           }
//             else if (user_input == 2){
//                  char val = pop(&s);
//                  cout << "val = " << val;
//                  }
//             else
//             break;
//             
//             }
   

    
    
    
    
    cin >> stop;
    return(0);
    }

void create_stack(struct stack *s){
     s->capacity = 1;
     s->top = -1;
     s->array = (char*) malloc(sizeof(s->capacity * sizeof(char)));
     }
     
void push(struct stack *s , char data){
     if (!isFull(s)){
                    s->array[++s->top] = data;
                    //printTop(s);
                    }
                    
     else{
         doubleStackSize(s);
         s->array[++s->top] = data;
         }
     }
     
int isFull(struct stack *s){
    return(s->top == s->capacity - 1);
    }

int isEmpty(struct stack *s){
    return(s->top == -1);
    }
    
char pop(struct stack *s){
     if(!isEmpty(s)){
                    return(s->array[s->top--]);
                    //printTop(s);
                    }
     else
         cout << "Stack empty";
     }
     
void printStack(struct stack *s){
     for(int i=s->top ; i >=0 ; i--)
             cout << s->array[i] << endl;
     }
     
void printTop(struct stack *s){
     cout << "\ntop = " << s->top << endl;
     cout << "s[top] = " << s->array[s->top] << endl;
     }
     
void doubleStackSize(struct stack *s){
     s->capacity *= 2;
     s->array = (char*)realloc(s->array,s->capacity);
     
     }
