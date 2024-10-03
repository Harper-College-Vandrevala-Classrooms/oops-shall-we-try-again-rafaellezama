#include <iostream>
using namespace std;

void print_error_message_to_console();
int prompt_and_read(int);


int main(){
  prompt_and_read(input);
  int input = prompt_and_read();
  cout << input;
  return 0;
}

void print_error_message_to_console(){
  cout << "Your value is invalid" <<endl;
}
int prompt_and_read(){
  cout << "Please enter a value: ";
  cin >> value;
  cout << "The value chosen by the user is " << value;
  cout <<endl;  
  return value;
}
