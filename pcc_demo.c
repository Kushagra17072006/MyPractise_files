// Implementing Stack using Linked List
#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;limits.h&gt;
struct Node
{
int data;
struct Node* next;
};
void menu();
struct Node* push(struct Node*, int);
struct Node* pop(struct Node*);
int peek(struct Node*);
void display(struct Node*);
int main()
{
struct Node* top = NULL;

int user_choice, element;
menu();
do
{
printf(&quot;&gt;&gt;&gt; &quot;);
scanf(&quot;%d&quot;, &amp;user_choice);
switch (user_choice)
{
case 0:
break;
case 1:
printf(&quot;Enter Element to push: &quot;);
scanf(&quot;%d&quot;, &amp;element);
top = push(top, element);
break;
case 2:
top = pop(top);
break;
case 3:
element = peek(top);
if (element == INT_MIN)
{

}
else
{
}
printf(&quot;Nothing To Show, Stack Is Empty...\n&quot;);

printf(&quot;Top Element: %d\n&quot;, element);

break;
case 4:
display(top);
break;
case 99:
menu();
break;
default:
printf(&quot;Invalid Choice...\n&quot;);
break;
}

} while (user_choice);
return 0;
}
void menu()
{
printf(&quot;0. EXIT\n\
1. Push\n\
2. Pop\n\
3. Peek\n\
4. Display\n\
99. To Show This Menu Again\n&quot;);
}
void display(struct Node* top)
{
struct Node* ptr = top;
if (ptr == NULL)
{
printf(&quot;Stack Is Empty...\n&quot;);
return;
}
while (ptr != NULL)
{
printf(&quot;%d &quot;, ptr-&gt;data);
ptr = ptr-&gt;next;
}
printf(&quot;\n&quot;);
}
struct Node* push(struct Node* top, int data)
{
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails i.e ptr
malloc returns NULL
if (ptr == NULL)
{
printf(&quot;StackOverflow...\n&quot;);
return NULL;

}
// If top is NULL that means stack is empty in that case creating
stack and assigning values
if (top == NULL)
{
ptr-&gt;data = data;
ptr-&gt;next = NULL;
return ptr;
}
// If Stack Already exists than assigning value to newly created
stack and making it as top
ptr-&gt;data = data;
ptr-&gt;next = top;
top = ptr;
return top;
}
struct Node* pop(struct Node* top)
{
if (top == NULL)
{
printf(&quot;Stack Underflow...\n&quot;);
return NULL;
}
struct Node* temp = top;
top = top-&gt;next;
free(temp);
return top;
}
int peek(struct Node* top)
{
if (top == NULL)
{
return INT_MIN;
}
return top-&gt;data;
}