#include <iostream>
#include<vector>
using namespace std;

int main() {
  //Predefined list of number
  vector<int> number={12,7,9,4,20,15};
  
  //Variables to store sum,count of evens,and count of odds
  int sum=0,evencount=0,oddcount=0;
  
  //Loop through the list to analyze numbers
  for(int num:number){
    sum+=num;
    if(num%2==0){
      ++evencount;
    } else {
      ++oddcount;
    }
  }
  
  //Calculate average
  double average = static_cast<double>(sum)/ number.size();
  
  //Display the results
  cout<<"List of number:";
  for(int num : number) {
    cout<<num<<"";
  }
  cout<<"\n\nAnalysis Result:"<<endl;
  cout<<"Sum:"<<sum<<endl;
  cout<<"Average:"<<average<<endl;
  cout<<"count of Even Numbers:"<<evencount<<endl;
  cout<<"count oF Odd Numbers:"<<oddcount<<endl;
  
  return 0;
}
