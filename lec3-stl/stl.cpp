#include <bits/stdc++.h>
using namespace std;

int main(){
    // unordered_set <int> n;
    // for(int i=1 ; i<=10 ; i++){
    //     n.insert(i);
    // }
    // for(auto it =n.begin() ; it!=n.end() ; it++){
    //     cout<<*it;
    //     cout << endl;
    // };
    // int num;
    // cout << "enter the number that you want to find : \n";
    // cin >> num;
    // if (n.find(num) != n.end()){
    //     cout << num <<"is present in the container \n";
    // }
    // else cout<< num<< " is not present\n";
    // n.erase(n.begin());
    // for(auto it =n.begin() ; it!=n.end() ; it++){
    //     cout<<*it;
    //     cout << endl;
    // };
    // n.clear();
    // cout << "the size of unordered set is :" <<n.size();
    // n.insert(1);
    // cout << "the size of unordered set is :" <<n.size();



    //vector

    vector <int> v;
    for(int i =0 ; i<10 ;i++){
    v.push_back(i);}

    for(auto it=v.begin() ; it !=v.end() ; it++){
        cout <<*it;
        cout<< endl;
    }
    cout<< "The elements in the vector are:\n";

    for(int i=0 ; i<v.size() ; i++){
        cout << v[i] <<endl;
    }

    cout << v.size() <<endl;
    auto it = v.begin();
    v.insert(it,10);

    cout << v.size();
    cout << "this is the thing the thing that i wanted to print :\n" ;
    cout << v[0];


}