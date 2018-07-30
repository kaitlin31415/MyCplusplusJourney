#include<iostream>
#include "GradeBook.h"
using namespace std;


int main() {

  string name;
  cout << "Please Enter the name of the course"<<'\n';
  getline(cin, name);
  cout <<'\n';
  GradeBook g1(name);
  GradeBook g2("a different class");

  cout << "Gradebook 1: " << g1.getCourseName() << endl;
  cout << "Gradebook 2:" << g2.getCourseName() << endl;

}
