#include <bits/stdc++.h>
#include <string>
#include <vector>
#define ll long long int
using namespace std;
 struct point{
    int x;
    int y;
    struct point* ptr;
 };
 struct point* newpoint(int a,int b){
    struct point* temp = (struct point *)malloc(sizeof(struct point));
    temp->x = a;
    temp->y = b;
    temp->ptr = NULL;
    return temp;
 }
 void AddFirst(struct point **start,int a,int b){
     struct point *add = newpoint(a,b);
     if(add == NULL){
        return;
     }
     add->ptr = *start;
     *start = add;
 }
 void print(struct point *start){
    struct point *temp = start;
    if(temp == NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    while(1){
            if(temp == NULL){
                break;
            }
        cout<<"("<<temp->x<<","<<temp->y<<") ";
        temp = temp->ptr;
    }
    cout<<endl;
 }
 void DelFirst(struct point **start){
     if(*start == NULL){
        return;
     }
    struct point *temp = *start;
    *start = (*start)->ptr;
    free(temp);
 }
 bool Search(struct point *start,int a,int b){
    struct point* temp = start;
    if(start == NULL){
            cout<<"False"<<endl;
        return false;
    }
    while(1){
        if(temp == NULL){
            cout<<"False"<<endl;
            return false;
        }
        if(temp->x == a && temp->y == b){
            cout<<"True"<<endl;
            return true;
        }
        else{
            temp = temp->ptr;
        }
    }
 }
 void searchd(struct point *start,int d){
     struct point* temp = start;
     while(1){
            if(temp == NULL){
                    cout<<endl;
                return;
            }
        if(d >= sqrt( (temp->x)*(temp->x) + (temp->y)*(temp->y)) ){
            cout<<"("<<temp->x<<","<<temp->y<<")"<<" ";
        }
        temp = temp->ptr;
    }
cout<<endl;
 }
 void Del(struct point **start,int a,int b){
    struct point *temp = *start;
    struct point *prev = NULL;
    if(temp->x == a && temp->y == b){
        DelFirst(start);
    }
    else{
        while(1){
                if(temp == NULL){
                    break;
                }
            if(temp->x == a && temp->y == b){
                prev->ptr = temp->ptr;
                free(temp);
                break;
            }
            else{
                prev = temp;
                temp = temp->ptr;
            }
        }
    }
 }
int Length(struct point *start){
    struct point *temp = start;
    int len = 0;
    while(1){
        if(temp == NULL){
            return len;
        }
        else{
            temp = temp->ptr;
            len++;
        }
    }
}
int main(){
    struct point* head = NULL;
    return 0;
}
