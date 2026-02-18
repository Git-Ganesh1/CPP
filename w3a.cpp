#include<iostream>
#include<vector> 
using namespace std;
int main()
{
    vector<int> v; // creating a vector of integers
    v.push_back(10); // adding elements to the vector
    v.push_back(20);
    v.push_back(30);
    
    cout << "Elements in the vector: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // accessing elements using index
    }
    cout << endl;
    
    return 0;
} 