# include <iostream>
using namespace std;

void print_error_message_to_console();
int input_is_valid(int);
int prompt_and_read();

int main(){
  int value = prompt_and_read();
  input_is_valid(value);
  return 0;
}

int prompt_and_read(){
  int input;
  cout << "Enter a value: ";
  cin >> input;
  return input;
}

void print_error_message_to_console(){
  cout << "Your value is invalid" << endl;
}
        //fix this validation function
int input_is_valid(int value){
  if (value >= 0 || value <= 100){
    cout << "The value chosen by the user is " << value;
    cout << endl;
  } else{
    cout << endl;
  }
}