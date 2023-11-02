#include <stdio.h>
#include <stdlib.h>
#include<iostream>
//#include <chrono>
using namespace std;
int main() {
    for  (int i=1; i<400; i++ ){
            for (int j=1;j<800; j++){
                cout << j << " - ";
            }
            cout<<endl;
    }
//	auto duration = duration_cast<microseconds>(stop - start);
 
// To get the value of duration use the count()
// member function on the duration object
//cout << duration.count() << endl;
  return 0;
}