#include <iostream>
using namespace std;

void print_error_message_to_console();
void prompt_and_read(int);
void input_is_valid(int);

int main(){
  prompt_and_read();
  return 0;
}

void print_error_message_to_console(){
  cout << "Your value is invalid" <<endl;
}

void prompt_and_read(){
  int value;
  cout << "Enter a value: ";
  cin >> value;

  return value;
}