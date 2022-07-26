//C++ String to Binary Converter

#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main() {

    string messageDigest;
    string str = messageDigest;
    vector<bitset<8> > bitVector;
  
    cout << "What would you like to convert? ";
    getline (cin, messageDigest);
    cout << "Your entered: " << messageDigest + 
    "\nA message with an initial length of: " << messageDigest.length() << "\n";

    //Convert messageDigest to binary
    for (size_t i = 0; i < messageDigest.size(); i++) {
       bitset<8> binaryDigest = bitset<8>(messageDigest[i]);
       bitVector.push_back(binaryDigest);
    }
    
    //Prints bitVector via range based for loop
    for (auto i: bitVector) {
        cout << i << ' ';
    }
    
    return 0;
}
