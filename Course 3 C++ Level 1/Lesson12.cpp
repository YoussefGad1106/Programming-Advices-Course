#include <iostream>

int main() 
{
	std::cout << "...";
  /* std::cout--> TO print on the monitor
   * <<  --> Write operator
   * "..." --> Message to be shown
   * ; --> To end the print statement
  */	   

	// To insert new lines :
	
	//way 1 : by using \n between the ""
	std::cout << "...\n";

	//way 2 : by using endl after the printed message
	std::cout << "..." << std::endl;


	// To Print multiple messgaes :
	std::cout << "Message 1 " << "Message 2 " << "...";
		
		
	
	return 0;
}
/* Homework
* 1)Write a program to Print two stars rows and print in between them your name , age , city and country
* 2)Write a program to print four rows of stars
* 3)Print this text : I love programming
*					
*					I promise to be the best developer ever!
* 
*					I know it will take some time to practice but I will achieve my goal
* 
*					Best Regrads,
*					Your Name
* 4)Print The letter H using dots
*/

