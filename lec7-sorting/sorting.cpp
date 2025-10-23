#include <bits/stdc++.h>
using namespace std;



int selectionSort(int arr[] , int n){
    for(int i= 0 ; i<=n-2 ; i++){
       int mini = i;
       for (int j=i ; j<=n-1 ; j++){
        if(arr[j]<arr[mini]){
            mini = j;
        }
       }
       int temp = arr[mini];
       arr[mini] = arr[i];
       arr[i] = temp;
    }
}
int bubbleSort(int arr[] , int n){
    for(int i= n-1 ; i>=0 ; i--){
       int didSwap = 0;
       for (int j=0 ; j<=i-1 ; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didSwap =1;
        }

       }
       if (didSwap ==0){
        break;
       }
    }
}

int insertionSort(int arr[],int n){
    for(int i=1 ; i<n ; i++){
        int j =i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int merge(int arr[], int low , int mid , int high){
    int left = low;
    int right = mid+1;
    vector <int> temp;
    while(left <=mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <=mid){
        temp.push_back(arr[left]);
        left++;
        
    }
    while (right <=high){
        temp.push_back(arr[right]);
        right++;
        
    }
    for(int i= low ; i<=high ; i++){
        arr[i] = temp[i-low];
    }
}


void mergeSort(int arr[] , int low ,  int high){
    if (low >= high)return;
    int mid = (low + high) /2 ; 
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    

}


void bubblesortR(int arr[] , int n){
    if (n ==1)return ; 
    for(int i=0 ; i<=n-2 ; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    bubblesortR(arr , n-1);
}

void insertionsortR(int arr[],int j , int n){
    if(j==n){
        return;
    }
    int i =j;
    while(i>0 && arr[i] < arr[i-1]){
        int temp = arr[i-1];
        arr[i-1] =arr[i];
        arr[i] = temp; 
        i--;
    }
    insertionsortR(arr,j+1,n);
     
}

int partition(int arr[] , int low ,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i <j){
        while (arr[i]<=pivot && i<=high-1){
            i++;
        };
        while (arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low] , arr[j]);
    return j ;

}

void quickSort(int arr[] , int low , int high){
    if(low < high){
        int p = partition(arr , low , high);
        quickSort(arr , low , p-1);
        quickSort(arr , p+1 , high);
    }
}


int main(){
    int len;
    cout<< "define the lenght of the array : \n";
    cin >>len;
    int arr[len];

    for (int i=0 ; i<len ; i++){
        cout<< "Enter the elements of the array : \n";
        cin >> arr[i];
    }
    for (int i=0 ; i<len ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    quickSort(arr ,0,len-1);
    for (int i=0 ; i<len ; i++){
        cout << arr[i] << " ";
    }

    
}