// first 5 lectures ka hai code striver series me recursion ke.....
/*
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void print(){
    if (cnt==3){    //if else na lga kr bhi kar skate hai sidha hi....
        return;
    }
    else{
        cout<< cnt <<endl;
        cnt++;
        print();
    }
}
int main() {
    print();
}
*/
// functional way to print sum of first N numbers
/*
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
   if(n==0) return 0;
   return n + sum(n-1);
}
int main() {
    int n=3;    //agar input user lega to cin>>n; use kar lena
    cout<< sum(n) <<endl;
    return 0;
}
*/
//factorial of N number using recursive function(functional way)
/*
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<< fact(n);
}
*/
//reverse an array using recursion using single variable or single pointer
/*
#include<bits/stdc++.h>
using namespace std;
void f(int i, int arr[], int n) {
    if (i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1,arr,n);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    f(0,arr,n);
    for(int i=0;i>n;i++) cout<< arr[i] <<" ";
    return 0;
}
*/
//fibonacci number using recursive function.........
/*
#include<bits/stdc++.h>
using namespace std;
int (f(int n)) {
    if(n<=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}
int main() {
    cout<< f(6);
}
*/