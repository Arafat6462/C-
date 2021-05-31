#include<iostream>
using namespace std;
int main(){


    //  *..
    //  **.
    //  ***

    // for (int i = 0; i < 3; i++) // column
    // {
    //     for (int j = 0; j < 3; j++) // row
    //     { 
    //         i>=j?cout<<'*':cout<<'.';
    //     }
    //     cout<<endl;
        
    // }



    /*  ***
        .**
        ..*
    */
    
    // for (int i = 0; i < 3; i++) // column
    // {
    //     for (int j = 0; j < 3; j++) // row
    //     { 
    //         i>j?cout<<'.':cout<<'*';
    //     }
    //     cout<<endl;
        
    // }




    /*  ..*..
        .***.
        *****
    */
    
    for (int i = 0; i < 3; i++) // column
    {
        for (int j = 0; j < 3; j++) // row
        { 
            i>j?cout<<'.':cout<<'*';
        }
        cout<<endl;
        
    }
    
}