// self-referential structure
struct Node {
   int data; // each listNode contains a character
   char name[20];
   struct Node *nextPtr; // pointer to next node
   struct Node *pPtr; // pointer to next node
}; // end structure listNode

typedef struct Node LLnode; // synonym for struct listNode
typedef LLnode *LLPtr; // synonym for ListNode*

// prototypes
int isEmpty( LLPtr sPtr );
void instructions( void );
void printList( LLPtr currentPtr );

void insert( LLPtr *sPtr, int value ,char*n);
int deletes( LLPtr *sPtr, int value );
void printListR( LLPtr currentPtr );//เพิ่ม

