#include <bits/stdc++.h>
using namespace std;


int freq(vector <int>& arr, int n){
    sort(arr.begin(),arr.end());
    long long currSum = 0;
    int left = 0;
    int ans = 0;
    for (int right=0 ; right<arr.size() ; right++){
        currSum += arr[right];

        while((long long) (right-left+1)* (long long) arr[right] - currSum > n){
            currSum -= arr[left];
            left++;
        }

        ans = max(ans,(right-left+1));

        }
        return ans;

    }




int main(){
    int arlen;
    cout << "The lenght of array: \n";
    cin>>arlen;
    int arr[arlen];
    for (int i=0 ; i<arlen ; i++){
        cin>>arr[i];
    }

    for(int i=0 ;i<arlen ; i++){
        cout <<arr[i]<< " ";
    }
    cout <<endl;

    int hash[13] = {0};
    for(int i=0 ; i<arlen ; i++){
        hash[arr[i]] +=1;

    }


    int q;
    cout << "write your number of queries: \n";
    cin >>q;
    while(q--){
        int number;
        cout << "what is your number: \n";
        cin>>number;
        cout << number <<" in the array have appeared " << hash[number] <<" times" <<endl;
    }


    string s ;
    cout << "Enter your string :\n";
    cin>>s;
    cout << s;

    int hash[26]={0};
    for(int i=0 ; i<s.size() ; i++){
        hash[s[i] -'a']++;
    }
    int q;
    cout << "Define the number of Queries you want : \n";
    cin >>q;
    while(q--){
        char c;
        cout <<"Kindly enter the alphabet: \n";
        cin>>c;
        cout << c <<" in the "<<s<<" have appeared " <<hash[c-'a'] << " times";
    }

    
    vector <int> arr={2,5,3,2};

    int result = freq(arr,3);
    cout << "the frequency of most frequent element is : " <<result <<endl ;
}