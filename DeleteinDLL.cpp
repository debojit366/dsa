#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* arr2DLL(vector<int> &v){
    if(v.size()==0) return nullptr;
    Node* head = new Node(v[0]);
    Node* prev = head;
    for(int i = 1;i<v.size();i++){
        Node* temp = new Node(v[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    Node* prev = head;
    head = head->next;
    prev->next = nullptr;
    head->back = nullptr;
    delete prev;
    return head;
}
int main(){
    vector <int> arr = {12,5,6,7};
    Node* head = arr2DLL(arr);
    Node* newHead = deleteHead(head);
    Node* temp = newHead;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
