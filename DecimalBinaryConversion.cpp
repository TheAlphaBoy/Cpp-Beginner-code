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
