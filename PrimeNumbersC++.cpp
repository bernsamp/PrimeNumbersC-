#include <iostream>
#include<math.h>
using namespace std;

int main(){

	int startingRange;
  int endingRange;
  int fnd=0;
  int ctr=0;

  cout << "\n\nList all Prime numbers within a given range:\n";
	cout << "--------------------------------------\n";
	cout << "Input number for starting range: ";
	cin >> startingRange;
	cout << "Input number for ending range: ";
	cin >> endingRange;		

	cout << "\nThe Prime numbers between " <<startingRange<< " and " <<endingRange<< " are:"<<endl;
    for(int i=startingRange;i<=endingRange;i++)
       {
           for(int j=2;j<=sqrt(i);j++){
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1){
                fnd++;
                cout<<i<<" ";
               }
               ctr=0;
       }
 cout<<"\n\nThe total number of Prime numbers between " <<startingRange<< " to " <<endingRange<< " is: "<<fnd<<endl;
 return 1;
}