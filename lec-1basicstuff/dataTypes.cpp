#include <bits/stdc++.h>
using namespace std;
// void addNumbers(int num1,int num2){
//     int num3 = num1 + num2;
//     cout << "The addition of the given numbers is :" << " " << num3;
// };


// void doSomething(string &name){
//     int l = name.length();
//     name[l-1] ='n';
//     cout << name << endl ;
// }

void addValues(int arr[],int n){
    arr[0] = 786;
    for(int i=0 ; i <=n ; i++){
        cout << arr[i] << " " ;
        
    };

}
int main(){
    // cout<< "hey i am shabab" <<endl <<"i think i am cool" <<"\n" <<"but in reality i am not \n" ;
    // int age;
    // cout << "Enter your age \n";
    // cin >> age;
    // if (age>18){
    //     cout << "Congrats you are an adult";
        
    // };

    // most important datatypes
    // int     --for small integers
    // long    -- from bigger integers
    // long long  -- for even bigger integers
    // float   -- for decimal numbers
    // double  --for bigger decimal numbers
    // char  --for characters  eg 's'
    // string  --for group of characters eg "shabab"

    // string animals[] = {"cat","dog","horse","lion"};
    // cout << animals[0] << endl;
    // string birds[5];
    // cin >> birds[0] >>birds[1] >>birds[3] >>birds[4];
    // cout << birds[0] <<birds[1] <<birds[2] <<birds[3] <<birds[4] <<endl;
    // cout <<birds;

    // string name ="Shabab";
    // int len = name.size();
    // name [len-1] = 't';
    // cout << name[len -1];



    // string aizen;
    // cout << "Whats are you upto?\n";

    // getline(cin,aizen);
    // for (int i=0 ;i<=100 ; i++){
    //     cout <<aizen  <<endl;
    // };

    // int i = 200;
    // do{
    //     i+=1;
    //     cout << "shabab" <<i <<endl;

    // }while (i<=100);


    // int num1;
    // int num2;
    // cin >> num1 >> num2;
    // addNumbers(num1,num2);



    // string name = "shabab";
    // doSomething(name);
    // cout << "main function name value :" << " " <<name << endl;

    int n = 5;
    int arr[n] ;
    for(int i = 0 ; i<=n ; i++){
        cout << "enter the value:" <<endl;
        cin >>arr[i];
    }
    addValues(arr ,n);
    for(int i=0 ; i <=n ; i++){
        cout << arr[i] << " " ;
        
    };



    return 0;
}