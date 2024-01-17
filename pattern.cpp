/*
#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;

int i = 1;
while (i<=n) {
    int j = 1;
    while(j<=n){
        cout<<'*';
        j = j+1;
    }
    //cout<<endl; means "enter"..... jisse next line se dusra pattern start ho sake
    cout<<endl;
    i = i+1;
}
}
*/
/*
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j =1;
        while(j<=n) {
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
*/

//some question done in the copy....


/*
#include<iostream>
using namespace std;

int main() {

    
    int n;
    cin>>n;

    int i = 1;

    while(i<=n) {

        int j = j+1;

        j = 1;
        while(j<=i) {

            cout<<j<<" ";

            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n ;
    cin>>n;

    int i = 1;

    while(i<=n) {
        int j = 1;
        while(j<=i) {
            cout<<(i-j+1)<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i+1;

    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n ;
    cin>>n;

       int row = 1;
       while(row<=n) {

        int col = 1;
        while(col<=n) {
        

        char ch = 'A' + row - 1;
        cout<<ch;
        col = col + 1;
        }
        cout<<endl;
        row = row + 1;

       }
}   
*/
/*
#include<iostream>
using namespace std;
int main() {

      int n;
      cin>>n;

      int i = 1;

      while(i<=n) {

        int j = 1;
        while(j<=n) {

            char ch = 'A' + j - 1;
            cout<<ch<<" ";
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;

      }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

     int i = 1;

     char start = 'A';

     while(i<=n) {

        int j = 1;
        while(j<=n) {

            cout<<start<<" ";
            start = start + 1;
            j = j + 1;

        }
        cout<<endl;
        i = i +1;

     }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int i = 1;

     while(i<=n) {

        int j = 1;
        while(j<=n) {

            char ch = 'A' + i +j - 2;
            cout<<ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
     }
}
*/
/*
#include<iostream>
using namespace std;
int main () {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {

        int j = 1;
         while(j<=i) {

         char ch ='A'+i-1;
         cout<<ch;
         ch = ch+1;
         j = j+1;
         }
         cout<<endl;
         i = i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    char value ='A';
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=i) {
            cout<<value;
            value = value+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

     int n;
     cin>>n;

     int i = 1;
    while(i<=n) {
        int j =1;
        char value ='A'+i-1;
        while(j<=i) {
            cout<<value<<" ";
            value = value+1;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
           int j = 1;
           char ch =('A'+n-i);
           while(j<=i) {
            cout<<ch;
            ch = ch + 1;
            j = j+1;
           }
           cout<<endl;
           i = i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j = 1;
        char ch ='A'+i-1;
        while(j<=n) {
            cout<<ch;
            ch = ch + 1;
            j = j +1;
        }
        cout<<endl;
        i = i + 1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        //space print karo
        int space = n-i;
        while(space) {
            cout<<" ";
            space = space - 1;
        }
        //star print karo 
        int j = 1;
        while(j<=i) {
             cout<<"*";
             j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j =1;
         while(j<=n-i+1) {
            cout<<"*";
            j = j + 1;
         }
            cout<<endl;
            i = i + 1;
    }
}
*/
//           another method.......................
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n-i+1) {
            cout<<"*";
            j = j + 1;
        }
        int space = i-1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int space = i-1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }
        int j = n-i+1;
        while(j>0) {
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int j = n-i+1;
        while(j>0){
            cout<<i;
            j=j-1;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int space = i-1;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<i+j-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = n-i;
        while (space) {
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        int count = i;
        while(j<=i){
            cout<<count;
            count = count + 1;
            j = j + 1;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n) {
        int space = n-i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        while(j<=i){
            cout<<j;
            j = j + 1;
        }
        int k = i-1;
        while(k){
            cout<<k;
            k = k-1;
        }
        cout<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k){
            cout<<"*";
            k=k-1;
        }
        int l = i-1;
        while(l){
            cout<<"*";
            l=l-1;
        }
        int j2 = n-i+1;
        while(j2){
            cout<<j2;
            j2=j2-1;
        }
        cout<<endl;
        i++;
    }
}
*/

                                                                     // ENDED...............