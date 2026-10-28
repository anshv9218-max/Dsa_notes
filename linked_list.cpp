/*
linked list is the user defined data type which is used to  store element 
in the heap memory and connected to other element by pointers .
elements of linked list does not carry contigious memory although it is created in heap memory and connected through pointers
*/

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{   //-> this initilize the linked list body
//     int data;
//     Node* next=nullptr;
//     public:
//     Node(int data){
//         this->data=data;
//     }
// };
// Node* link(vector<int> &nums){   //<- this initilize the whole linked list
//     Node *head= new Node(nums[0]);
//     Node* mover=head;
//     for(int i=1;i<nums.size();i++){
//         Node *temp=new Node(nums[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }

// Node* delete_head(Node*head){
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;

// }
// Node * remove_tail(Node* head){
//     if(head==nullptr ||head->next==nullptr)return nullptr;
//     Node*temp=head;
//     while(temp->next->next!=nullptr){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=nullptr;
//     return head;
// }
// Node * remove_k(Node* head,int k){
//     int cnt=0;
//     Node*temp=head;
//     Node* prev=nullptr;
//     while(temp!=nullptr){
//         cnt++;
//         if(cnt==k){
//             prev->next=temp->next;

//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }



// Node* inserthead(Node *head,int data){
//     Node*temp=new Node(data);
//     temp->next=head;
//     return temp;
// }

// Node* inserttail(Node *head,int data){
//     Node *temp=new Node(data);
//     Node* tail=head;
//     while(tail->next!=nullptr){
//         tail=tail->next;
//     }
//     tail->next=temp;
//     return head;
// }
// Node* insertk(Node* head,int data,int k){
//     Node*temp=head;
//     int cnt=0;
//     Node*prev=nullptr;
//     Node*tempk=new Node(data);
//     while(temp->next!=nullptr){
//         cnt++;
//         if(cnt==k){
//             prev->next=tempk;
//             tempk->next=temp;
//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }
// void print(Node*head){
//     Node *temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> nums={0,2,3,1};
    
//     Node* head=link(nums);
//     print(head);
//     // Node* new_head=delete_head(head);
//     // print(new_head);
//     // Node* newll=remove_tail(head);
//     // print(newll);
//     // Node* khead=remove_k(head,3);
//     // print(khead);
//     // Node* ihead=inserthead(head,5);
//     // print(ihead);
//     // Node* thead=inserttail(head,5);
//     // print(thead);
//     Node* khead=insertk(head,5,2);
//     print(khead);
    
    
//     return 0;
// }




/*
Doubly linkedlist

-> isme aage piche dono ja skte hai
*/

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next=nullptr;
//     Node* prev=nullptr;
//     public:
//     Node(int data,Node* prev,Node* next){
//         this->data=data;
//         this->next=next;
//         this-> prev=prev;
//     }
//     Node(int data){
//         this-> data=data;
        
//     }
// };
// Node* connect(vector<int>&nums){
//     Node* head=new Node(nums[0]);
//     Node* prev=head;
//     for(int i=1;i<nums.size();i++){
//         Node*temp=new Node(nums[i],prev,nullptr);
//         prev->next=temp;
//         prev=temp;
//     }
//     return head;
// }
// Node* del_head(Node* head){
//     if(head->next==nullptr){
//         return nullptr;
//     }
//     Node* temp=head;
//     head=head->next;
//     head->prev=nullptr;
//     temp->next=nullptr;
//     delete temp;
//     return head;
// }
// Node* tail_del(Node* head){
//     Node* temp=head;
//     while(temp->next->next!=nullptr){
//         temp=temp->next;

//     }
//     Node*tail=temp->next;
//     temp->next=nullptr;
//     tail->prev=nullptr;
//     delete tail;
//     return head;
// }
// Node* del_k(Node* head,int k){
//     Node*temp=head;
//     for(int i=0;i<k-1;i++){
//         temp=temp->next;
//     }
//     Node*prev_ele=temp->prev;
//     Node * next_ele=temp->next;

//     prev_ele->next=next_ele;
//     next_ele->prev=prev_ele;
    
//     delete temp;
//     return head;
// }


// // insertion techniques
// Node* in_head(Node* head,int data){
//     Node * temp= new Node(data);
//     temp->next=head;
//     head->prev=temp;
//     return temp;

// }
// Node* in_tail(Node* head,int data){
//     Node* temp=new Node(data);
//     Node* mover=head;
//     while(mover->next){
//         mover=mover->next;
//     }
//     mover->next=temp;
//     temp->prev=mover;
//     return head;
// }
// Node* in_k(Node* head,int k,int data){
//     Node*temp=new Node(data);
//     Node* mover=head;
//     for(int i=0;i<k-1;i++){
//         mover=mover->next;
//     }
//     Node* prev_ele=mover->prev;
//     mover->prev=temp;
//     temp->next=mover;
//     temp->prev=prev_ele;
//     prev_ele->next=temp;
   
//     return head;
// }



// void display(Node*head){
//     Node*temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// void displayrev(Node* head){
//     Node* temp=head;
//     while(temp->next){
//         temp=temp->next;
//     }
//     Node* tail_head=temp;
//     while(tail_head){
//         cout<<tail_head->data<<" ";
//         tail_head=tail_head->prev;
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> nums={1,2,3,4,5,6,7,8};
//     Node* head=connect(nums);
//     display(head);
//     displayrev(head);
//     Node* head_d=del_head(head);
//     display(head_d);
//     Node* tail_d=tail_del(head_d);
//     display(tail_d);
//     Node* delete_k=del_k(tail_d,3);
//     display(delete_k);

//     Node *head_in=in_head(delete_k,6);
//     display(head_in);
//     Node * tail_in=in_tail(head_in,50);
//     display(tail_in);
//     Node * k_in=in_k(tail_in,3,39);
//     display(k_in);


//     return 0;

// }