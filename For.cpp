#include<iostream> 
using namespace std;
int main() {
    
    int n;
    cout<<"Enter a number to print it's table: ";
    cin>>n;

    for(int i=1; i<=10; i++) {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    int x;
    cout<<"Enter the number you want in the exponent of 2: ";
    cin>>x;

    int ans = 1;
    for(int i=1; i<=x; i++){
        ans = ans*2;
    }

    cout<<ans;

    return 0;
}
