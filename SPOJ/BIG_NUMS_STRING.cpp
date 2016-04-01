#include<iostream>
using namespace std;

#define CHAR_TO_INT(X) X-'0'


string add(string inputNum1,string inputNum2){
  long long int input1Len=inputNum1.length();
  long long int input2Len=inputNum2.length();

  if(input1Len==0)
  return inputNum2;

  if(input2Len==0)
  return inputNum1;

  int carry=0;
  string result;

  for(long long int i=input1Len;i>=0;i--){
    int tempSum=0;
    tempSum+=CHAR_TO_INT(inputNum1[i]);
    if(i<input2Len){
      tempSum+=CHAR_TO_INT(inputNum2[i]);
    }
    tempSum+=carry;
    carry=tempSum/10;
    result+=(tempSum%10);
  }

}
int main(){

    string inputNum1,inputNum2;
    cin>>inputNum1>>inputNum2;

    srting additionRes=add(inputNum1,inputNum2);

    return 0;
}
