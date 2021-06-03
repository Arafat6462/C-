#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int arr[5][5], ii, jj;

    for(int i=0; i<5; i++){
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
             {
                ii = i;
                jj = j;
                 break;
            }
            
        }               
    }

    ii = fabs(2-ii);
    jj = fabs(2-jj);

    cout<<ii+jj<<endl;
}