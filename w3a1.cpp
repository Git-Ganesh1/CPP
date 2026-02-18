#include<iostream>
#include<vector>
#include<algorithm> // for sort function
using namespace std;

int main(){
    vector<int>v;
    int choice,x,key,n;
    do{
        cout<<"\n\n-----VECTOR OPERATIONS MEMU---";
        cout<<"\n1. Insert Elements";
        cout<<"\n2. Display Elements";
        cout<<"\n3. Sort elements";
        cout<<"\n4. Search element";
        cout<<"\n5. Exit";
        cout<<"\n6.delect";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
        
            case 1:
                cout<<"\nEnter number of elements to insert: ";
                cin>>n;
                for(int i=0;i<n;i++){
                    cout<<"Enter element:\n"; 
                    cin>>x;
                    v.push_back(x);
                }
                break;
            
            case 2:
                   if(v.empty()){
                    cout<<"\nVector is empty.";
                } else {
                    cout<<"\nvectors elements: ";
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
                        cout<<*it<<" ";
                    } 
                }
                break;
            
            case 3:
            if(v.empty()){
                    cout<<"\nVector is empty,cannot sort.";
                } else {
                    sort(v.begin(), v.end());
                    cout<<"\nElements sorted successfully.";
                }
                break;
            
            case 4:
                if(v.empty()){
                    cout<<"\nVector is empty, cannot search.";
                } else {
                    cout<<"\nEnter element to search: ";
                    cin>>key;
        vector<int>::iterator pos = find(v.begin(), v.end(), key);
        if(pos != v.end()){
            cout<<"\nElement found at position: "<<(pos-v.begin());
        } else {
            cout<<"\nElement not found.";
        }
                }
                break;
            
            case 5:
                cout<<"\nExiting program.";
                break;
                case 6:
                 if(v.empty()){
                    cout<<"\nVector is empty, cannot pop.";
                } else {
                    cout<<"popped element :"<<v.back();
                    v.pop_back();
                }
                 break;
             
                default:
                cout<<"\nInvalid choice, please try again.";
            }
    } while(choice != 5);
    return 0;




}