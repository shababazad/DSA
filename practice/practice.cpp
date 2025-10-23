#include <bits/stdc++.h>
using namespace std;

// bool nah(){
//     int rev = 0 ;
//     while(num> 0 ){
//         int lastDigit;
//         lastDigit = num%10;
//         rev = rev*10 + lastDigit;
//         num  =num/10;

//     }
//     cout << rev <<endl;
// }

bool isPalindrome(string s){
    int f = 0;
    int l = s.size()-1;
    while(f<l){
        if(!isalnum(s[f])){
            f++;
        }
        else if (!isalnum(s[l])){
            l--;
        }
        else if(tolower(s[f])!=tolower(s[l]))
        return false;
        else
        {
            f++;
            l--;
            /* code */
        }
        
        
    }
    return true;
}

void printArray(int arr[] , int n ){
     for(int i=0 ;i< n ; i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;
    
}

void sam(int arr[], int f,int l){
   int reva[l];
   for(int i=l ; i>=0 ; i--){
    reva[l-i] = arr[i];

   }
   printArray(reva,l);
    
}
int p (int arr[] , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j ){
        while (arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>=pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i] , arr[j]);
        }
    }
    swap (arr[low] , arr[j]);
    return j;
    }

void quickSort(int arr[] , int low , int high){
    if(low<high){
        int partition = p(arr, low , high);
        quickSort(arr , low ,partition-1);
        quickSort(arr , partition+1 ,high);
    }
}




void merge(int arr[] , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right<= high){
        if(arr[left] <arr[right]){
            temp.push_back(arr[left]);
            left++;

        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i=low ; i<=high ; i++){
        arr[i] = temp[i-low];
    }


}

void mergeSort(int arr[] , int low ,int high){
    if(low>= high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr , low , mid);
    mergeSort(arr , mid+1 , high);
    merge(arr , low , mid , high);
}

void selectionSort(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        int j =i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
  
    printArray(arr , n);
}

int main(){
    cout << "kindly enter your number : \n";
    int num ;
    cin>> num;
    int arr[num];
    for(int i=0 ; i<num ; i++){
        cin>>arr[i];
    }
    quickSort(arr ,0 , num-1);
    printArray(arr , num);

   
}