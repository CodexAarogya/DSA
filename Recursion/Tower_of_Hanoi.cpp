#include<iostream>
using namespace std;
int count = 0;
int hanoi(int n, int source, int destination, int aux){
    if (n==1){
        cout<<"Move disc "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    }
    else{
        hanoi(n-1, source, aux, destination);
        cout<<"Move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
        hanoi(n-1, aux, destination, source);
    }
    count ++;
}
int main(){
    int n;
    cout<<"Enter value for N: ";
    cin>>n;
    hanoi(n,1,2,3);
    cout<<endl<<count;
}