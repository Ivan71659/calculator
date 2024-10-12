#include <iostream>
#include <cmath>

using namespace std;

class math{
  private:
    double value;

  public:
    math (double value){
      this->value = value;
    }
  
    double get_value (){
      return value;
    }
    
    math operator + (math other_value){
      double calc = pow (value + other_value.value, 2);
      return math (calc);
    }

    math operator - (math other_value){
      double calc = value - other_value.value;
      if(calc <= 0){
        calc = -1 * calc;
      }
      return math (calc);
    }

    math operator * (math other_value){
      double calc = sqrt(value * other_value.value);
      return math (calc);
    }

    math operator / (math other_value){
      double calc = pow(value / other_value.value, 3);
      return math (calc);
    }

    void operator ++ (){
      double calc = pow(value + 1, value + 1);
      value = calc;
    }

    void operator -- (){
      double calc = value - 1; 
      for(int i = calc - 1; i > 0; i--){
        calc = i*calc;
      }
      value = calc;
    }
};

int main () { 
  string ask;
  cout << "what operator (+, -, *, /, ++ or --) do you chose: ";
  cin >> ask;
  
  if(ask == "+"){
    int ask2;
    cout << "\nwhat number do you chose: ";
    cin >> ask2;

    int ask3;
    cout << "what other number do you chose: ";
    cin >> ask3;
    
    math add1 = math(ask2);
    math add2 = math(ask3);
    math answer1 = add1 + add2;
    cout<< "\n" << answer1.get_value() <<"\n";
  }
  
  else if(ask == "-"){
    int ask4;
    cout << "\nwhat number do you chose: ";
    cin >> ask4;

    int ask5;
    cout << "what other number do you chose: ";
    cin >> ask5;

    math sub3 = math(ask4);
    math sub4 = math(ask5);
    math answer2 = sub3 - sub4;
    cout<< "\n" << answer2.get_value() <<"\n";
    
  }

  else if(ask == "*"){
    int ask6;
    cout << "\nwhat number do you chose: ";
    cin >> ask6;

    int ask7;
    cout << "what other number do you chose: ";
    cin >> ask7;

    math multi1 = math(ask6);
    math multi2 = math(ask7);
    math answer3 = multi1 - multi2;
    cout<< "\n" << answer3.get_value() <<"\n";
  }

  else if(ask == "/"){
    int ask8;
    cout << "\nwhat number do you chose: ";
    cin >> ask8;

    int ask9;
    cout << "what other number do you chose: ";
    cin >> ask9;

    math divide1 = math(ask8);
    math divide2 = math(ask9);
    math answer4 = divide1 / divide2;
    cout<< "\n" << answer4.get_value() <<"\n";
  }

  else if(ask == "++"){
    int ask10;
    cout << "\nwhat number do you chose: ";
    cin >> ask10;

    math plus1 = math(ask10);
    ++plus1;
    cout<< "\n" << plus1.get_value() <<"\n";
  }

  else if(ask == "--"){
    int ask11;
    cout << "\nwhat number do you chose: ";
    cin >> ask11;

    math minus1 = math(ask11);
    --minus1;
    cout<< "\n" << minus1.get_value() <<"\n";
  }
}
