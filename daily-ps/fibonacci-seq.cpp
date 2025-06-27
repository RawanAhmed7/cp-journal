/*
Kyali hates Fibonacci. So he decided to make his own sequence.

The Kyali sequence K1,K2,K3,Ki,Ki+1 ,... is defined as follows:
K1=1,K2=2  Ki= Last Digit of Ki−1 ∗  Last Digit of Ki−2
Given i(where i is the index of the sequence element)You need to find the value of Ki

Note: "Last Digit" means the least significant digit.

Input
One line contains one integer i (1≤i≤106)
Output
Print the value of Ki
.*/

#include <iostream>
using namespace std;

int main() {
    int i;
    cin>>i;
   int seq[61];
   seq[1] = 1;
   seq[2] = 2;
for (int j = 3; j <= 60; ++j)
    seq[j] = (seq[j - 1] * seq[j - 2]) % 10;
    int index = i % 60;
    if (index == 0) index = 60;
    cout << seq[index] << endl;


    return 0;
}
