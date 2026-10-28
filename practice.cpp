// #include<bits/stdc++.h>
// using namespace std;
// int printnumbers(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return 0;
//     }
//     printnumbers(n-1);
//     cout<<n<<endl;;
// }

// int sum(int n){
//     if (n==0){
//         return 0;
//     }
    
//     return n+sum(n-1);
// }


// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// void rev( int arr, int n){
//     if(n==0){
//         cout<<arr[0];
//         return;
//     }
//     cout<<arr[n];
//     return rev( arr,  n-1);
// }
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     // printnumbers(n);
//     // cout<<sum(n);
//     // cout<<fact(n);
//     rev(arr,n-1);
//     return 0;
// }


// class Solution {
// public:
//     int findBound(vector<int>& nums, int target, bool isFirst) {
//         int l = 0;
//         int r = nums.size() - 1;
//         int ans = -1;
        
//         while (l <= r) {
//             int mid = l + (r - l) / 2; // Prevents integer overflow
            
//             if (nums[mid] == target) {
//                 ans = mid; // Record the index
//                 if (isFirst) {
//                     r = mid - 1; // Keep searching to the left for the first occurrence
//                 } else {
//                     l = mid + 1; // Keep searching to the right for the last occurrence
//                 }
//             } else if (nums[mid] < target) {
//                 l = mid + 1;
//             } else {
//                 r = mid - 1;
//             }
//         }
//         return ans;
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = findBound(nums, target, true);
        
//         // If the target isn't found at all, return {-1, -1} immediately
//         if (first == -1) {
//             return {-1, -1};
//         }
        
//         int last = findBound(nums, target, false);
//         return {first, last};
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     Node* next=nullptr;
//     int data;
//     Node(int data1){
//         data=data1;
//     }
// };
// Node* connect(vector<int>&nums){
//     Node* head= new  Node(nums[0]);
//     Node* mover=head;
//     for(int i=1;i<nums.size();i++){
//         Node* temp=new Node(nums[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
// }
// int main(){
//     vector <int> nums={10,20,30,40,50};
//     Node* head=connect(nums);
//     Node* temp=head;
//     while(temp){
//         cout<<temp->data;
//         temp=temp->next;
//     }
//     return 0;
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next=nullptr;
//     public:
//     Node(int data1){
//         data=data1;
//     }
// };
// Node* connect(vector<int> &nums){
//     Node* head=new Node(nums[0]);
//     Node* mover=head;
//     for(int i=1;i<nums.size();i++){
//         Node* temp=new Node(nums[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;

// }
// Node* insert_k(Node* head,int data,int k){
//     Node* tempk=new Node(data);
//     Node* move=head;
//     for(int i=1;i<k-1;i++){
//         move=move->next;
//     }
//     tempk->next=move->next;
//     move->next=tempk;
    
//     return head;

// }
// Node* delete_k(Node* head,int k){
//     Node*temp=head;
//     Node*prev=nullptr;
//     for(int i=1;i<k;i++){
//         prev=temp;
//         temp=temp->next;
//     }
//     prev->next=temp->next;
//     return head;
// }
// Node* rev(vector<int> &nums){
//     reverse(nums.begin(),nums.end());
//     Node* head=connect(nums);
//     return head;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     vector <int> nums={1,2,3,4,5,6,7};
//     Node* newhead=connect(nums);
//     display(newhead);
//     Node* new_k_head=insert_k(newhead,90,8);
//     display(new_k_head);
//     Node* del_head=delete_k(new_k_head,3);
//     display(del_head);
//     Node* rev_head=rev(nums);
//     display(rev_head);
//     return 0;
    
// }

// counting nodes
