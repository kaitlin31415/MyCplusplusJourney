#include<iostream>
#include<string>
#include "GradeBook.h"
using namespace std;


 GradeBook:: GradeBook (std::string name )
  {
  setCourseName(name);
  }

  //Function to display welcome message
  void GradeBook::setCourseName(std::string c){
    if (c.size() <= 25)
      courseName = c;

    if (c.size() > 25){
      courseName = c.substr(0,25);

      std::cerr << "Name \"" <<c<<"\"excedes maximum length (25).\n" <<
      "Limiting courseName to first 25 characters. \n" <<endl;
    }
  }
  string GradeBook::getCourseName() const{
    return courseName +"!!!!";

  }

  void GradeBook::displayMessage() const {
    std::cout << "Welcome to the Grade book for: " <<getCourseName() << "!"<<'\n';

  }
