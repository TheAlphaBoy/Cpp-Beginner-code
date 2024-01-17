//Switch statement or case.................
//in int form.........
/*
#include<iostream>
using namespace std;
int main() {
    int num = 2;
    switch(num) {
        case 1: cout<<"first"<<endl;
        break;

        case 2: cout<<"second"<<endl;
        break;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
*/
//in char form...............
/*
#include<iostream>
using namespace std;
int main() {
    char ch ='a';
    switch(ch) {
        case 1: cout<<"first"<<endl;
        break;

        case 'a': cout<<"second"<<endl;
        break;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
*/
//explaination for default case.................
/*
#include<iostream>
using namespace std;
int main() {
    char ch ='a';
    switch(ch) {
        case 1: cout<<"first"<<endl;
        break;

        case '1': cout<<"second"<<endl;
        break;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
*/
//default case is not mandetory...................(bina default case ke bhi answer aa jata hai)
/*
#include<iostream>
using namespace std;
int main() {
    char ch ='a';
    switch(ch) {
        case 1: cout<<"first"<<endl;
        break;

        case '1': cout<<"second"<<endl;
        break;

        //default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
*/
//....................... break ka alag alag use...............
/*
#include<iostream>
using namespace std;
int main () {
     
     char ch = 'a';
     int num = 1;
     cout<<endl;   //marji hai lgao ya nhi
     switch (num) {

        case 1 : cout<<"first"<<endl;
                 cout<<"first again"<<endl;
                 //break;
        case '1': cout<<"character one"<<endl;
                 break;

        default: cout<<"this is default case"<<endl;         
     }
     cout<<endl;
     return 0;
}
*/
//.............double switch case.........................
/*
#include<iostream>
using namespace std;
int main() {

    char ch = '1';
    int num = 1;

    cout<<endl;
    switch (ch) {
        case 1:cout<<"first"<<endl;
               cout<<"first again"<<endl;
               break;

        case '1': switch(num) {
                 case 1: cout<<"value of num is 1"<<endl;
                         break;

        default:cout<<"it is default case"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
*/
// .............................break property..............
/*
#include<iostream>
using namespace std;
int main() {

    char ch = '1';
    int num = 1;

    cout<<endl;
    switch (ch) {
        case 1:cout<<"first"<<endl;
               cout<<"first again"<<endl;
               break;

        case '1': switch(num) {
                 case 1: cout<<"value of num is 1"<<endl;
                 break;
                }
                break;

                default:cout<<"it is default case"<<endl;
    }
    cout<<endl;
    return 0;
}
*/
//...........................switch case in infinite loop exit out without using break................
/*
#include<iostream>
using namespace std;
int main() {
    char ch ='1';
    while(1) {
        switch (ch) {
            case '1':cout<<"yes"<<endl;
        }
        exit(0);  // we can use both exit(1) or exit(0)......learn later...........
    }
    return 0;
}
*/
//..............calculator using cpp.......................
/*
#include<iostream>
using namespace std;
int main() {
    int a,b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch (op) {
        case '+':cout<< a+b <<endl;
        break;

        case '-':cout<< a-b <<endl;
        break;

        case '*':cout<< a*b <<endl;
        break;

        case '/':cout<< a/b <<endl;
        break;

        case '%':cout<< a%b <<endl;
        break;

        default :cout<<"Please enter the valid operation"<<endl;
    }
    cout<<endl;
    return 0;
}
*/
//.........................we can also use block in between switch case..........
/*
#include<iostream>
using namespace std;
int main() {
    int num = 2;
    switch(num) {
        {case 1: cout<<"first"<<endl;}
        break;

        {case 2: cout<<"second"<<endl;}            // block lgao tab bhi same answer ayega...............
        break;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
*/
//................we can use operation with variable in switch case...........................
/*
#include<iostream>
using namespace std;
int main() {

    int num = 1;
    switch(2*num) {
        case 1: cout<<"first"<<endl;
        break;

        case 2: cout<<"second"<<endl;
        break;

        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
    return 0;
}
*/
//.........................number of notes in given amount type question.............
/*
#include<iostream>
using namespace std;
int main() {
    int amount = 0, hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0, remainder = 1;

    cout<<"Enter the amount"<<endl;
    cin>>amount;

    switch (1) {
        case 1: hundred = amount/100;
        remainder = amount%100;
        cout<<"total notes of hundred are "<< hundred <<endl;

        case 2: fifty = remainder/50;
        remainder = remainder%50;
            cout<<"total notes of fifty are "<< fifty <<endl;

        case 3: twenty = remainder/20;
        remainder = remainder%20;
        cout<<"total notes of twenty are "<< twenty <<endl;

        case 4: one = remainder/1;
        remainder = remainder%1;
        cout<<"total notes of one are "<< one <<endl;

        default:cout<<"current amount "<< amount <<endl;    //....marzi hai default case lgao ya nhi.....
    }
    return 0;
}
*/
//..............functions.........
// .......................value of power of any number................
/*
#include<iostream>
using namespace std;
int main() {

    int a,b;
    cin>> a >> b;    // pow(a, b)

    int ans = 1;

    for( int i = 1; i<=b; i++) {

        ans = ans*a;
    }
    cout<<"The answer is "<< ans <<endl;
    cout<<endl;
    return 0;
}
*/
//....................for more than 1 number power..................( reason for function).....
/*
#include<iostream>
using namespace std;
int main() {

    int a,b;
    cin>> a >> b;
    int ans = 1;

    for( int i = 1; i<=b; i++) {
        
        ans = ans*a;
    }
    cout<<"The answer is "<< ans <<endl;

    int c,d;
    cin>> c >> d;
    ans = 1;

    for( int i = 1; i<=d; i++) {
        
        ans = ans*c;
    }
    cout<<"The answer is "<< ans <<endl;
    cout<<endl;
    return 0;
    //.........aise hi or number ki bhi power nikal sakte hai , but ye bulky , buggy, harder to read ho rha hai isliye functions introduce hua.....
}
*/
//.............power of number using functions........
/*
#include<iostream>
using namespace std;

int power(int a, int b) {  // ....copy me flow chart diya hai function ka......

    int ans = 1;
    for( int i = 1; i<=b; i++) {
        ans = ans*a;
    }
    return ans;
}
int main() {
    int a,b;

    cin>> a >> b;

    int answer = power(a,b);
    cout<<"Answer is "<< answer <<endl;
    return 0;
}
*/
//................power of number for more than 1 number using function...........
/*
#include<iostream>
using namespace std;

int power(int a, int b) {
    int ans = 1;
    for(int i = 1; i<=b; i++) {
        ans = ans*a;
    }
    return ans;
}
int main() {
    int a,b;

    cin>> a >> b;

    int answer = power(a,b);
    cout<<"The answer is "<< answer <<endl;

    int c,d;
    cin>> c >> d;

    answer = power(c,d);
    cout<<"The answer is "<< answer <<endl;
}
*/
//.................int a, int b....ko ander lekar bhi efficient code bna kakte hai fuctions ka.....
/*
#include<iostream>
using namespace std;

int power() {          // ye jo power ke block ke ander hai vo power ke variables hai main ke variable se iska lena dena nhi hai.....
    int a,b;

    cin>> a >> b;

    int ans = 1;
    for(int i =1; i<=b; i++) {
        ans = ans*a;
    }
    return ans;
}
int main() {        //ye jo main ke block ke ander hai vo main ke variables hai power ke variable se iska lena dena nhi hai....
    int ans = power();
    cout<<"The answer is "<< ans <<endl;

    ans = power();
    cout<<"The answer is "<< ans <<endl;

    ans = power();
    cout<<"The answer is "<< ans <<endl;

    return 0;
}
*/
//................. Is number is odd or even using functions............
/*
#include<iostream>
using namespace std;
// let suppose,
// 1 -> even
// 0 -> odd

bool isEven(int a){

    if(a&1) { //odd
        return 0;
    }
    else {//even
        return 1;     //else ki jgeh sirf return 1; bhi kar dete to bhi same output ayega....
    }
}
int main() {
    int num;
    cin>> num;

    if (isEven(num)) {
        cout<<"The number is Even"<<endl;
    }
    else {
        cout<<"The number is Odd"<<endl;
    }
    return 0;
}
*/
//..................... calculating nCr using functions...............
/*
#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i<=n; i++) {
        fact = fact*i;
     
    }
    return fact;
}
int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int ans = num/denom;        // sirf return num/denom; bhi karte to same result milta
    return ans;
}
int main() {
    int n,r;
    cin>> n >> r;
    cout<<"The answer is "<< nCr(n,r) <<endl;
}
*/
//..............printing counting..............
/*
#include<iostream>
using namespace std;
//function signature blte hai niche wale part ko
void printCounting(int n) {//void tb use kar jb koi bi retrn ho pr sth m kuch na le jye e.g. we only hv to write return; koi uske ander variable ya int nhi use karna.
//function body
    for(int i =1; i<=n; i++) {
        cout<< i <<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    //function call
    printCounting(n);
    return 0;       //yaha return kra hai void wale function me nhi.....
}
*/