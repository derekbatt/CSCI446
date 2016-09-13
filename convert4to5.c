#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

char* binary();
char* encode();

int main()
{
    //char mess[50];
    char c;
    cout << "please enter a message:" << endl;
    //cin.getline(mess, 50);
    cin.getline(c);
    bin=binary(mess);
    enc=encode(mess);
    cout << "your message " << mess << ":" << endl;
    cout << "in binary: <<bin<< endl;
    cout << "is encode using 4B/5B to: "<<enc<<endl;
    return 0;
}

char* binary(){

}
char* encode(){

}


    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d %b", c, c, c);
    return 0;
}
