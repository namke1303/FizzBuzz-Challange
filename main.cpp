#include <iostream>

using namespace std;

void fizzBuzz() {
    int i;
    for(i=1; i<=100; i++) {
        if(i%3==0) {
            cout<<"Fizz"<<" ";
        }
        else if(i%5==0) {
            cout<<"Buzz"<<" ";
        }
        else if(i%15==0) {
            cout<<"FizzBuzz"<<" ";
        }
        else cout<<i<<" ";
    }
}

int main() {
    fizzBuzz();
    return 0;
}
