#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <locale>
#include <sstream>
using namespace std;



int myCompare(string X, string Y)
{
    string XY = X.append(Y);

    string YX = Y.append(X);

    
    return XY.compare(YX) < 0 ? 1: 0;
}

void printSmallest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);

    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}


int main()
{	
	int n, a, temp, i;
	cout<<"Enter total numbers";
	cin>>n;
	vector<string> arr;
	for(i=0;i<n;i++)
	{
		cout<<"Enter your no."<<endl;
		cin>>temp;
		       
		string Result;          // string which will contain the result

		ostringstream convert;   // stream used for the conversion

		convert << temp;      // insert the textual representation of 'Number' in the characters in the stream

		Result = convert.str(); // set 'Result' to the contents of the stream

		arr.push_back(Result);
	}
    

    
    printSmallest(arr);

   

   return 0;
}
