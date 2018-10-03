#include<iostream>
#include<string>
#include<sstream>
// Include the library that will allow you to convert from string to integer
int a,b,c,d;

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
std::cout<<" write the value of A: ";
std::cin>>a;
std::cout<< "Write the valur of B: ";
std::cin>>b;
std::cout<<"Write the valure of C: ";
std::cin>>c;


  // Multiply the three integers
d=a*b*c;




  // Output the result of the multiplication
std::cout<<"the answer is "<<d<<std::endl;


  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string pond;
std::string frog;
std::string lovely;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


std::cout<<"name of pond ";
std::getline (std::cin,pond);  

std::cout<<"name of frog ";
std::getline(std::cin,frog);
std::cout<<"what is lovely ";
std::getline(std::cin,lovely);


std::cout<<" An old "<<pond<<" silent "<<std::endl;
std::cout<< " A "<<frog<<"frog jumped into the pond, "<<std::endl;
std::cout<<" A lovely "<<lovely<<" sunset "<<std::endl;












  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 

int myint ;
std::stringstream(myNumber)>>myint;
  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}