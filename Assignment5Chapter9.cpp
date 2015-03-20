/*
Meghan Moore
February 21, 2015
CIT 245 - Data Structures and Programming C++
Assignment 5 - Chapter 9
Purpose: Use an STL stack to reverse a line of input characters that are read into a string.
*/

#include <cstdio> //getchar
#include <stdlib.h> //malloc
#include <iostream> //cin, cout, cerr
#include <cstdlib> //system
#include <stack> // std::stack
using namespace std;

int main(){
  //based on code taken from professor's assignment document:
  int go = 1;
  cout << "This program reverses a string using the STL stack" << endl;
  while(go == 1){
      cout << "Enter your string of less than 80 characters followed by an ENTER" << endl;
      char* s = (char *)malloc(80);
      cin.getline(s,81,'\n');
      if (s==NULL) exit (1);
      
      std::stack<char> mystack;
      for (int n=0; s[n]!=NULL; n++){
    	mystack.push(s[n]);}
      while (!mystack.empty())
  	  {
     	std::cout << mystack.top();
     	mystack.pop();
  	  }
  	  
      cout << "\n\nEnter another? 1 = continue. Anything else to stop" << endl;
      cin >> go;
      getchar(); //clears 'Enter' from buffer
      free (s); //'gets rid of' memory allocated with malloc
  }
  
  
  system("pause");
  return 0;
} //end main

/*Please Note: Nothing of malloc, getchar(), pointers, or STL stacks was covered in chapter 9 or earlier in the text. 
I used this as a resource to try to understand malloc: http://www.cplusplus.com/reference/cstdlib/malloc/. 
I still do not know what you mean by "Also, malloc outside the loop for more efficient code."
I used this as a resource for .top(): http://www.cplusplus.com/reference/stack/stack/top/.
I used this as a resource for .pop(): http://www.cplusplus.com/reference/stack/stack/pop/.
I used this as an additonal general resource for std::stack: http://www.cplusplus.com/reference/stack/stack/
*/
