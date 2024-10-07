# include <iostream>
using namespace std;

void print_error_message_to_console();
int input_is_valid(int);
int prompt_and_read();

int main(){
  int value = prompt_and_read();
  while(!input_is_valid(value)){
    print_error_message_to_console();
    value = prompt_and_read();
  }
  cout <<"The value chosen by the user is " << value<<endl;

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
  return(value>=0 && value <= 100);
}