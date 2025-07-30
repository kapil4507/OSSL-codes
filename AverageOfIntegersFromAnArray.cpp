#include <iostream>
#include<vector>
using namespace std;

int main() {
  int size;
  cout<<"Enter size of the array : ";
  cin>>size;
  vector<int> arr(size);
  cout<<"Enter elements of the array : ";
  for(int i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  double sum = 0;
  for(int i =0; i < size; i++)
  {
    sum += arr[i];
  }
  double avg = sum/size;
  cout<<"Entered array : ";
   for(auto it : arr)
   {
     cout<<it<<" ";
   }
  cout<<endl;
  cout<<"Average is : "<<avg;
  return 0;
}