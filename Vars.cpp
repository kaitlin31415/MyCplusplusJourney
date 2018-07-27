#include<iostream>

int main(){
  int n1 = 0; //Declaring an integer
  int n2 = 1;

  std:: cout << "Enter first integer:\n";
  std:: cin >> n1;

  std:: cout << "Enter Second integer\n";
  std:: cin >> n2;

  int sum = n1 +n2;
  std:: cout << "Sum: " << sum <<std::endl;

  std:: cout << "Enter a number to compare\n";
  int n3 = 0;
  std:: cin >> n3;

  std:: cout << "Enter another number to compare\n";

  int n4 = 0;
  std:: cin >> n4;

  if (n4 > n3)
    std:: cout << n4 <<" is the bigger number" <<std::endl;

  else if (n3>n4)
    std:: cout << n3 << "is the bigger number" <<std::endl;

  else
    std:: cout << "The numbers are the same size" <<std::endl;

}
