#include <iostream>
#include <stdlib.h>

using namespace std;

#define CHAR_TO_INT(X) X-'0'
#define INT_TO_CHAR(X) X+'0'


string add(string inputNum1,string inputNum2){
  long long int input1Len=inputNum1.length();
  long long int input2Len=inputNum2.length();

  if(input1Len==0)
  return inputNum2;

  if(input2Len==0)
  return inputNum1;

  int carry=0,tempSum=0;
  string result="";

  int i=input1Len-1;
  int j=input2Len-1;

  bool flagIZero=false;
  bool flagJZero=false;


  while(1){
    if(i<=0 && j<=0)
    break;

    if(i>=0){
    tempSum+=CHAR_TO_INT(inputNum1[i]);
    }
    if(j>=0){
      tempSum+=CHAR_TO_INT(inputNum2[j]);
    }

    //cout<<tempSum<<endl;

    tempSum+=carry;
    carry=tempSum/10;
    //cout<<carry<<endl;
    result=(char)(INT_TO_CHAR(tempSum%10))+result;
    tempSum=0;

    if(i>=0){
    i-=1;
    }
    if(j>=0){
    j-=1;
    }


    if(i==0 && j>0){
        flagIZero=true;
    }
    if(j==0 && i>0){
        flagJZero=true;
    }
  }

  if(!flagJZero){
  tempSum+=CHAR_TO_INT(inputNum2[0])+carry;
  }
  if(!flagIZero){
  tempSum+=CHAR_TO_INT(inputNum1[0])+carry;
  }

  result=std::to_string(tempSum)+result;


  return result;
}

int main() {
 	string res=add("9999999","999");
 	cout<<res<<endl;
	return 0;
}
