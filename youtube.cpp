#include<iostream> // lode/give cout,cin..... 
#include<cmath>
#include<climits>
#include<float.h> // max trust for data type. (float 10/3=3.333542)
using namespace std; //define all in all "std::" using directive.


double power(double, double); // declaring a function
void print_power(double,double);
 


int main() // parameter is empty. (Argument -->> Parameter)
{
   /*
   std::cout<<"hello there"<<std::endl; // for without using namespace std; ">>" = operator and "4,45 ,cout... " = operand.
   
   int slices; // declar and 
   slices = 5; //initilization hard coading.
   slices = 5 + 1; // expression
   cout<<"YO fatty how many pieces fo pizza you eat ? : ";
   cin>>slices;
   cout<<"you have "<<slices<<" slices of pizza."<<endl;
   printf("you have %i slice of pizza.\n", slices); // like 'cout' . came from 'c'
   */





/*
  int base, exponent;
  cout<<"what is the base : ";
  cin>>base;
  cout<<"what is the exponent : ";
  cin>>exponent;
  cout<<pow(base,exponent)<<endl; // pass two argument
*/
 


/*
   print_power(3,3); // passed value '3' and '10' are Argument here.
*/



   
/*
   short a;
   int b;
   long c;
   long long d;

   unsigned short aa;
   unsigned int bb;
   unsigned long cc;
   unsigned long long dd;
   cout<<"a : "<<sizeof(a)<<"\nb : "<<sizeof(b)<<"\nc : "<<sizeof(c)<<"\nd : "<<sizeof(d)<<"\naa :"<<sizeof(aa)<<"\nbb :"<<sizeof(bb)<<"\ncc :"<<sizeof(cc)<<"\ndd :"<<sizeof(dd)<<endl;
   cout<<"max of short : "<<SHRT_MAX<<endl;
   cout<<"max of int16 : "<<INT16_MAX<<endl;
   cout<<"max of Uint16 : "<<UINT16_MAX<<endl;
   cout<<"max of long long : "<<LONG_LONG_MAX<<endl;
   cout<<"max of long long : "<<LONG_LONG_MIN<<endl;
*/





/* // char
   char c = 'a'; //single ('') cote for char and double cote ("") for string
   char c2 = '2';
   cout<<c<<" : "<<c2<<endl;
   cout<<(int)c<<endl; // if u convert/cast to (char -> int). it will show ASCII value.
   cout<<(char)65<<endl; // if u convert/cast to (int -> char). it will show Char of ASCII value.
   int x = 97;
   char cc = 55; // cc stort ascii value of 55. that is '7'
   unsigned char ucc = 155;
   cout<<"97 to : "<<(char)x<<endl;
   cout<<"55 to : "<< (int)cc <<endl; // print ascii value of '7' = 55
   cout<<"55 to : "<<cc <<endl; // print ascii value that store = 7
   cout<<"155 to : "<<(int)ucc<<endl; // unsigned for 255 char. and signed char 127 max.
   cout<<"155 to : "<<ucc<<endl; //  it's and extended ascii value. after 127.

   int value = (int)'A';
   cout<<"ASCII value of 'A' is : "<<value<<endl;
   cout<<"ASCII value of 'B' is : "<<value+1;
*/





/*
   cout<<"hello \nthere1\n";
   cout<<"hello \t there2\n";
   cout<<"hello \b there3\n";
   cout<<"hello \v there4\n";
   cout<<"hello \a\a\a\a\a\a\a\a\a there5\n";
   cout<<"hello \0 there6\n"; // end of string.
   cout<<"\"Hi\""<<endl;
   cout<<"\\HI\\"<<endl;
*/


/*
   int a = (char)48; // here   48 ---> (char)48 ---> 0  ---> (int a = 0 ) ---> 48
   bool pizza_is_good = (int)NULL; // everything is "true/1" else "0/false"
   cout<<pizza_is_good<<endl;
   cout<<(int)NULL<<endl;
   bool alpha = 1;
   cout<<"data manipulate : "<<boolalpha<<alpha<<endl; // 'boolalpha' convert 0-->false and 1-->true.
   alpha = 0;
   cout<<"data manipulate : "<<boolalpha<<alpha<<endl; // 'boolalpha' convert 0-->false and 1-->true.
*/


   

/*
   float a = 10.0 / 3;;
   double b =  1.0e4;//  77000 = 7.7e4;
   long double c = 1844674407370955161; // 12 byte

   a = a * 10000000000000000;
   b = (b / 3) * 10000000000000;
   cout<<"float a : "<<a<<endl;
   cout<<"float a fixed : "<<fixed<<a<<endl; // fixed will convert 3.33333e+16 -->  33333333526052864.000000. look for float it's not 3.333.. its 3.333532.. :(
   cout<<"float trust limit : "<<FLT_DIG<<endl; // trust float for only 6 
   cout<<"double b : "<<b<<endl;
   cout<<"double b fixed : "<<fixed<<b<<endl;
   cout<<"double trust limit : "<<DBL_DIG<<endl; // trust double for only 15 digit
   cout<<"long double trust limit : "<<LDBL_DIG<<endl; // trust long double for only 18 digit
    cout<<"long double byte : " <<sizeof(long double)<<endl;
   cout<<"----" <<c<<endl;
*/











   return 0; // main function return type is int. so, return int type 0/
} 



/*
void print_power(double base, double ex)
{
   cout<<power(base, ex)<<endl;
}
 
double power(double base, double exponent) //  defining function . Received value 'base' and 'exponent' are parameter here
{
   double result = 1; 
   for (int i = 0; i < exponent; i++)
   {
      result *= base;
   }
   
   return result;
}
*/



// time   2.02 /10.28.15 minute....