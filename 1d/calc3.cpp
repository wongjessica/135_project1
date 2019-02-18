/*
Author: Jessica Wong
Course: CSCI-136
Instructor: Maryash
Assignment: Project1D
The program calc3.cpp can understand squared numbers when calculating mathematical formulas
*/

#include <iostream>

int main() {
	
  int number = 0;
  
  int total = 0;
  
  int opr = 1;
  
  char symbol = ' ';

  
  while(std::cin >> symbol) { // takes symbol as an input
  
    if((symbol != 43)&&(symbol != 45) && (symbol != 59)){ //if the next symbol is not the addition/subtraction/semicolon ASCII value
		
      if(symbol == '^'){ //if the symbol is the square symbol
		  
		  number *= number; //basically number^2 (number squared)
		  
      }
      else{
		  
		  number = static_cast<int>(symbol) - '0'+ (number * 10); 
		  
	  }	
    }
	  
    else {
     
      total = total + number * opr;
      number = 0;

      if(symbol == 43){ //addition ascii
		opr = 1;
	  }
	  
      if(symbol == 45){ //subtraction ascii
		  opr = -1;
	  }
	  
      if(symbol == 59) { //semicolon ascii
		  
		total = total + number * opr;
		
		std::cout << total << std::endl;
		
		number = 0;
		
		total = 0;
		
		opr = 1;
		
      }
    }
  }
  
  return 0;
 
}
