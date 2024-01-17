/*
//bitwise operator.......
#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<"a&b "<< (a&b)<<endl;
    cout<<"a|b "<< (a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"~b "<<(~b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
}
*/
/*
//left shift & right shift...................................
#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
}
*/
/*
// increament & decreament operators..........................
#include<iostream>
using namespace std;

int main() {
    int i = 7;
    cout<<++i<<endl;
    //ans- i=8 
    cout<<i++<<endl;
    //ans- i=8 , now i=9
    cout<<i--<<endl;
    //ans- i=9 , now i=8
    cout<<--i<<endl;
    //ans- i=7 
}
*/
/*
//output questions...............................
#include<iostream>
using namespace std;
int main() {
    int a , b = 1;
    a = 10;
    if (++a) {
        cout<< b;
    }
    else {
        cout<< ++b;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int a = 1;
    int b = 2;

    if(a-- > 0 && ++b> 2 ) {
        cout<<"stage1 - inside if ";
    }
    else {
        cout<<"stage2 - inside else ";
    }
    cout<< a <<" "<< b <<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2 ) {
        cout<<"stage1-inside if ";
    }
    else {
        cout<<"stage2-inside else ";
    }
    cout<< a <<" "<< b <<endl;
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int number = 3;
    cout<<(25*(++number));
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int a = 1;
    int b = a++;
    int c = ++a;
    cout<< b<<" ";
    cout<<c;
}
*/
// for loop questions......................................
/*
#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<"printing count from 1 to n"<<endl;

    for(int i = 1; i<=n; i++) {
        cout<< i <<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<"printing count from 1 to n"<<endl;
    int i = 1;
    for(; ; ) {
        if(i<=n) {
            cout<<i<<endl;
        }
        else{
            break; 
        }
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    //cin>>n;

    cout<<"printing count from 1 to n"<<endl;
    //.......................pichle question ko samgahne ke liye niche ka likha h
/*   int i = 1;

    for(; ; ) {
        if(i<=n) {
            cout<< i << endl;
        }
        else {
            break;
        }
        i++;
    }
//..........................................yha tak likho ya nhi fark nhi padta..................
   for(int a = 0 , b = 1 ; a>=0 && b>=1 ; a-- , b-- ) {
    cout<<a<<" "<<b<<endl;
   }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    
    for(int a = 0 , b = 1 , c = 2 ; a>=0 && b>=1 && c>=2 ; a--,b--,c-- ) {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int sum = 0;
    for(int i = 1; i<=n; i++) {
        // sum = sum + 1;...................ye nhi ayega yha..................
        sum += i;
    }
    cout<< sum <<endl;
}
*/
//...............FIBONACCI SERIES.................................
/*
#include<iostream>
using namespace std;
int main() {
    int n = 10;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++) {
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
}
*/
//...............question on prime and non prime number........................
/*
#include<iostream>
using namespace std;
int main() {

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    bool isPrime = 1;

    for(int i = 2; i<n; i++) {

        //rem = 0, not a prime..........
        if(n%i == 0) {
            //cout<<"Not a Prime number"<<endl;
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0) {
        cout<<"Not a Prime number"<<endl;
    }
    else {
        cout<<"is a Prime number"<<endl;
    }
}
*/
//..................Question On Continue............................
/*
#include<iostream>
using namespace std;
int main() {
    for(int i = 0; i<5; i++) {
        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        continue;

        cout<<"reply toh karde"<<endl;
    }
}
*/
//.......................5 Questions on output........................
/*
#include<iostream>
using namespace std;
int main() {
    for(int i = 0; i<5; i++) {
        // now i = 1(in first round)
        //(in second round , i = 3)
        cout<< i <<" "<<endl;
        i++;
        // now i = 2(in first round)
        // (in second round , i = 4)
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    for(int i = 0; i<=5; i--) {
        cout<< i <<" "<<endl;
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    for(int i = 0; i<=15; i += 2) {
        cout<< i <<" ";

        if(i&1) {
            continue;
        }
        i++;
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    for(int i = 0; i<5; i++) {
        for(int j=i; j<=5; j++) {
            cout<<i<<" "<<j<<endl;
        }
    }
}
*/
/*
#include<iostream>
using namespace std;
int main() {

    for(int i=0; i<5; i++) {
        for(int j=1; j<=5; j++) {
            if(i+j == 10) {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}
*/
//conversion of decimal to binary...................
/*
#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n != 0) {
        int bit = n&1;
        ans =(bit*pow(10, i)) + ans;     // we can also use formula ... ans = (ans*10) + bit;
        n = n>>1;
        i++;
    }
    cout<<" Answer is "<<ans<<endl;
}
*/
//.................NEGATIVE NUMBER KA BINARY CODE HAI.........................
/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int i = 0;
    int ans = 0;
    while(n !=0) {
        int bit = n&1;
        ans = (ans*10) + bit;
        n = n>>1;
        i++;
    }
    cout<<-(ans)<<endl;
}
*/
//...................BINARY TO DECIMAL CODE.........................
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n !=0) {
        int digit = n%10;
        if(digit == 1) {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout<<ans<<endl;
}
*/
