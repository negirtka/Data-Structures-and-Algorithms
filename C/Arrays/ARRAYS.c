//Creating 1D array 
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Input array is: ");
    for(i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    return 0;
}


//Creating 1D array using base address
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    
    for(i=0;i<n;i++){
        printf("%d",*(a+i));
    }
    return 0;
}

//Creating 2d Array
#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: %d\n",i,j,a[i][j]);
        }
    }
    return 0;
}

//Minimum Maximum and Average
#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter number of rows and cols: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int max,min,avg;

    int sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
            sum+=a[i][j];
        }
    }
    avg=sum/(m*n);
    printf("Max: %d, Min: %d, Avg: %d",max,min,avg);
    return 0;
}


//Sum of elements of array
#include<stdio.h>
int main(){
    int m,n,i,j;
   
    printf("Enter rows and cols");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        int sum=0;
        for(j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("Sum of %dth row is: %d\n",i,sum);
    }

    return 0;
}

//Transpose of Matrix
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter rows and cols: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",b[i][j]);
        }
    }
    return 0;
}

//Sparse Matrix Representation 
#include<stdio.h>
int main(){
    int m,n,i,j;
    int size=0;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Sparse Matrix Representation");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0){
                printf("<%d,%d,%d>\n",i,j,a[i][j]);
            }
        }
    }
    return 0;
}

//Linear Search
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key,flag=0,index;
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            index=i;
            break;
        }
        
    }
    if(flag){
        printf("Element %d found at %d index",key,index);
    }
    else{
        printf("Element not found!");
    }
    return 0;
}


//Binary Search
#include<stdio.h>
int main(){
    int n,j,i,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){ 
        scanf("%d",a[i]);
    }
    /*Bubble sort*/
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int key;
    printf("Enter Element to Search: ");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(key>a[mid]){
            low=mid+1;
        }
        else if(key<a[mid]){
            high=mid-1;
        }
    }
    printf("Element Not Found!");
    return 0;
}

//Binary Search with recursion
#include<stdio.h>
int binarySearch(int a[],int low,int high, int key);
int binarySearch(int a[],int low,int high,int key){
    /*Base Condition*/
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(key>a[mid]){
        return binarySearch(a,mid+1,high,key);
    }
    else if(key<a[mid]){
        return binarySearch(a,low,mid-1,key);
    }
    
    return -1;
}
int main(){
    int n,j,i,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){ 
        scanf("%d",&a[i]);
    }
    /*Bubble sort*/
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int key;
    printf("Enter Element to Search: ");
    scanf("%d",&key);
    int flag=binarySearch(a,0,n-1,key);
    if(flag==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at index %d",flag);
    }
    return 0;
}

//Insertion Sort
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        int key=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>key){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=key;
    }
    return 0;
}

//Selection Sort (Smallest Element Approach)
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        int smallestIdx=i;
            for(j=i+1;j<n;j++){
                    if(a[j]<a[smallestIdx]){
                        smallestIdx=j;
                    }
            }
        temp=a[i];
        a[i]=a[smallestIdx];
        a[smallestIdx]=temp;
        
    }
    return 0;
}

//Selection Sort (Largest Element Approach)
#include<stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>0;i--){
        int largestIdx=i;
        for(j=i-1;j>=0;j--){
            if(a[j]>a[largestIdx]){
                largestIdx=j;
            }
        }
        temp=a[i];
        a[i]=a[largestIdx];
        a[largestIdx]=temp;
    }
    return 0;
}

//Quick Sort
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int a[],int start, int end){
    int indx=start-1;
    int j;
    int pivot=a[end];
    for(j=start;j<end;j++){
        if(a[j]<=pivot){
            indx++;
            swap(&a[j],&a[indx]);
        }
    }
    indx++;
    swap(&a[indx],&a[end]);
    return indx;
}

void quickSort(int a[],int start,int end){
    if(start<end){
        int pivIndx;
        pivIndx=partition(a,start,end);
        quickSort(a,start,pivIndx-1);
        quickSort(a,pivIndx+1,end);
    }
}


int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

//Merge Sort
#include<stdio.h>

void merge(int a[],int start,int mid,int end){
    int temp[end-start+1];
    int i=start;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=end){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    /*adding remaining elements*/
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=a[j];
        j++;
        k++;
    }
    /*copying elements back to original array*/
    for(int x=start;x<=end;x++){
        a[x]=temp[x-start];
    }
}


void mergeSort(int arr[],int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}


int main(){
    
    return 0;
}