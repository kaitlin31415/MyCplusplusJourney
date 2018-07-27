#include<iostream>
#include<string>

using namespace std;
class Gradebook{
private:
  string courseName;

public:
  //Function to display welcome message
  void setCourseName(string c){
    courseName = c;

  }
  string getCourseName() const{
    return courseName;

  }

  void displayMessage() const {
    cout << "Welcome to the Grade book for: " <<getCourseName() << "!"<<'\n';

  }
};

int main() {
  Gradebook g;
  string name;
  cout << "Please Enter the name of the course"<<'\n';
  getline(cin, name);
  cout <<'\n';
  g.setCourseName(name);
  g.displayMessage();
}
