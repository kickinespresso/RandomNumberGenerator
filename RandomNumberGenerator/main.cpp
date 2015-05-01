//
//  main.cpp
//  RandomNumberGenerator
//
//  Created by cj on 3/26/15.
//  Copyright (c) 2015 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

//Length of the string
int stringLength = sizeof(alphanum) - 1;

// Random Character Generator Function that was used in previous assignments
// returns a random character
char genRandomChar(){
    return alphanum[rand() % stringLength]; //character generator and returns a random character
}

//Helper Functions
//Creates & returns random string to user input specified length
string generateRandomStringOfLength(int length){
    string myGeneratedString;
    for (int i = 0; i < length; i ++){
        myGeneratedString += genRandomChar();//Puts random string in specified length
    }
    return myGeneratedString; //returns the random string
}


void gen_random(char *s, const int len) {
    for (int i = 0; i < len; ++i) {
        int randomChar = rand()%(26+26+10);
        if (randomChar < 26)
            s[i] = 'a' + randomChar;
        else if (randomChar < 26+26)
            s[i] = 'A' + randomChar - 26;
        else
            s[i] = '0' + randomChar - 26 - 26;
    }
    s[len] = 0;
}

int main(int argc, const char * argv[]) {

    std::cout << "Generate a Random String\n";
    for (int i = 0; i < 10; i++){
        cout << generateRandomStringOfLength(5) << " ";
    }
    cout << endl;
    
    std::cout << "Generate another Random String\n";
    for (int i = 0; i < 10; i++){
        cout << generateRandomStringOfLength(5) << " ";
    }
    cout << endl;
    
    std::cout << "Generate another Random String Via a different method\n";
    for (int i = 0; i < 10; i++){
        
        char foo [20];
        gen_random(foo, 5);
        cout << foo << " ";
    }
    cout << endl;
    
    
    
    return 0;
}
