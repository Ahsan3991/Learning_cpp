
// C++ is a statically-typed language, type of variable e.g int does not change throughtout the lifetime of our program 
// TYPE          Bytes       Range
// short          2        -32,768 to 32,767
// int            4          -2B to 2B
// long           4          same (use suffix L at the end like 1000L to force the compiler to take it as long and not int)
// long long      8          
// float          4        -3.4E38 to 3,4E38 (when working with float always type f like 2.3f otherwise compiler will take it as double which may result in memory leak)
// double         8        -1.7E308 to 1.7E308
// long double    8        -3.4E392 to 1.7E4832
// bool           1           true/false
// char           1           single characters
// we can use auto keyword with variables and let compiler decide its type e.g auto isValid = true means isValid is bool automatically.
// In programming we use Hexadecimal numbers to represent colors --- Hexadecimal(HD) is base 16 (0-9,A-F)
//Number systems: Binary we use 0b prefix, 0b11111111 = 255 in decimal, for HD we use 0x prefix so, 0xFF or 0xff = 255 in decimal. 



 #include <iostream>    // standard input-output stream cpp library
 #include <cmath>       // standard math library for cpp for functions like power, ceiling etc
 #include <cstdlib>     // standard cpp library for dynamic mem management or random number generator
 #include <ctime>       // standard cpp library for time related functions
 #include <vector>      // standard cpp library for vectors (vectors are arrays that can dynamically change size)
 #include <cstdio>

 using namespace std;  //   this is just to ensure that i
 // focus on important concepts rather than wrting same thing again and again. For actual projects i avoid this.


 //Playing with functions. They are good to remove repetition in your code and make it more optimized.
 //Functions can be defined before main. or else declare the function before main and then define it after.


 //void sayHi(string Name, int Age);
 //double cube(double num);
 //int getMax(int firstNumber, int secondNumber);
 //double calculator(int firstNum, int secondNum, char op);

 int main(){


// playing with strings

//    string Phrase = "Hello World";  //writing to string variable
//    cout << Phrase <<endl; // printing the variable on the screen
//    cout << Phrase.length() <<endl; //printing the length of the string on the screen
//    cout << Phrase[4] <<endl; //printing the third letter of the string on the screen, index starts at 0.
//    Phrase[0] = 'Y';          //changing a single letter in the string
//    cout << Phrase << endl;
//    cout << Phrase.find("llo",0)<<endl; //find the index position for string "llo" in Yello World starting index 0
//    cout << Phrase.substr(2, 4)<<endl;  // printing a substring starting from position 8 and go till 4 characters. Space is also a character

// Learning how to take string as an input

   // string YourName;
   // cout<<"Enter your name: ";
   // getline (cin,YourName);
   // cout<<"Hello, nice to meet you "<<YourName<<endl;

// Playing with swapping numbers. Takiing two numbers as input, incrementing them by one and then swapping them.
// Operation between a decimal number and interger number will return a decimal number.
/*     cout << "Enter first number: ";
    int Number1;
    cin >> Number1;
    Number1++;
    cout<< "Enter second number: ";
    int Number2;
    cin>>Number2;
    Number2++;

    int Temp = Number1;
    Number1 = Number2;
    Number2 = Temp;

    cout<<"Numbers after swapping are "<<Number1<<" and "<<Number2<<endl;
 */


 // understanding reading and writing to console and basic arithmatic operations
   //  cout << "enter the amount of sales: "; 
   
   //  double Sales;
   //  cin  >> Sales;

   //  cout << "Total Sales: $" << Sales << endl;
   

   //  const double StateTax = 0.04;                           //Calculating tax rates for the state and county tax
   //  const double CountyTax = 0.02;
   //  double TotalTax = StateTax+CountyTax;
   //  cout << "State Tax Rate =  $" <<  Sales*StateTax << endl;
   //  cout << "County Tax Rate =  $" << Sales*CountyTax << endl;
   

   //  double TotalTaxPaid = Sales * TotalTax;                 //Calculating the total tax paid
   //  cout << "Total Tax Paid = $" << TotalTaxPaid << endl;


   //  double NetIncome = Sales-TotalTaxPaid;                  //Calculating net income
   //  cout << "Net Income = $" << NetIncome << endl;



// Making a temperature converter
   // cout << "enter the temperature in Farenheit: ";

   // double Farenheit;
   // cin >> Farenheit;

   // double Celsius = (5*(Farenheit-32))/9;
   // cout << "Temperature in Celsius: " << Celsius <<endl;



// Understanding cmath library

   // cout << "Enter radius of a circle: ";

   // double Radius;
   // cin >> Radius;

   // double AreaOfCircle = M_PI*pow(Radius,2);    // M_Pi is value of Pi from cpp lib and pow calculates power of first argument.

   // cout << AreaOfCircle <<endl;



// Gemerating random numbers

//     const short MaxValue = 6;
//     const short MinValue = 1;

// //Generating a seed for random variable using time function(contains time since jan 1970 in seconds)
//    srand(time(nullptr));      
  
//   //Generating random value for the dice throw b/w 1 to 6
//    short Die = (rand() %((MaxValue-MinValue+1))+MinValue); 
//    short SecondDie = (rand() %((MaxValue-MinValue+1))+MinValue);
  
//    cout << Die <<","<< SecondDie << endl;

// Creating madlibs game

/* string Noun, PluralNoun, Verb, Verb2;

cout << "Enter a Noun: ";
getline (cin, Noun);

cout << "Enter a PluralNoun: ";
getline (cin, PluralNoun);

cout << "Enter a Verb: ";
getline (cin, Verb);

cout << "Enter another Verb: ";
getline (cin, Verb2);

cout << "Today, every student has a computer small enough to fit into his "<<Noun<<"."<<endl;
cout << "He can solve any math problem by simply pushing the computer's little "<<PluralNoun<<"."<<endl;
cout << "Computers can add, multiply divide, and "<<Verb<<"."<<"They can also "<<Verb2<<" better than a human."<<endl;

 */


// Playing with functions

   // sayHi("Ahsan",30);      //string parameter is passed to the function. will print "Hello Ahsan" next line You are 30
   // sayHi("Danish",29);
 
/*       double answer = cube(3.0);  // gives value to the cube function and stores it in answer
      cout << answer << endl;     // print out the the answer
      cout<<cube(5)<<endl;             // Function can also be directed printed out */


// Playing with calling functions and understanding if-else statements

// int max = getMax(40,20);

//    if (max == 2){                   //"=" is the assignment operator and "==" is the comparison operator 
//       cout<<"Error code; "<< max <<endl <<" Either numbers are same or invalid type "<<endl;
//    }else{
//       cout<<max<<endl;              // if numbers are valid print the maximum number
//    }


// Learning to build calculator using switch case and function call

// int firstNum;
// int secondNum;
// char operand;
// cout<<"Enter first number: " <<endl;
// cin >> firstNum;
// cout << "Enter Second number: " <<endl;
// cin>> secondNum;
// cout << "Enter Operator " <<endl;
// cin>>operand;

// double result = calculator(firstNum,secondNum,operand);

// if (result == 2){
//    cout<<"Invalid operator"<<endl;
//    }
// else {
//    cout<<"The answer is "<<result<<endl;
//    }


// Learning to build a secret number guessing game using while loop

/* int secretNum = 7;
int guessNum;
int guessLimit = 3;
int guessCount = 1;

while(guessNum != secretNum && guessCount <= guessLimit)
  {
   cout<<"Guess the secret Number: "<<endl;
   cin >> guessNum;
   guessCount++;

   cout<<"Oops! your guess is wrong, please try again!"<<endl;
}
if (guessNum == secretNum){
   cout<<"Congrats! you guessed it"<<endl;
}
else{
   cout<<"Sorry you ran out of guesses!"<<endl;
}
 */
 
// Playing with loops. Almost similar amount of time of execution 

// for(int i=0; i<5; i++){
//    cout<<"check time!";
// }

// int i = 0;
// while (i<5){
//    cout<<"check time!";
//    i++;
// }

/* vector<int> evennumbers = {2,4,6,8}; 
int a[] = {10,12,14,16};
cout<<evennumbers.size()<<endl;
cout<<evennumbers.capacity()<<endl;

evennumbers.assign(a,a+3);
for(int i = 0; i<evennumbers.size();i++){
cout<<evennumbers[i]<<" ";
}

cout<<'\n'<<evennumbers.capacity()<<endl;

evennumbers.push_back(16);
cout<<evennumbers.back()<<endl;;

evennumbers.pop_back();
cout<<evennumbers.back()<<endl;
cout<<evennumbers.front()<<endl;
 */



// int a[]={1,2,3,4,5};
// int sizeofa = sizeof(a)/sizeof(int); 
//  string foods[5];
//  int sizeoffood = sizeof(foods)/sizeof(string);        //different ways to calculate array size, size of returns in bytes hence the division
// int sizeoffoods = sizeof(foods)/sizeof(foods[0]);     //different ways to calculate array size

// cout<<size<<endl;
// cout<<size1<<endl;

// for(int i = 0; i< sizeoffood; i++){
//    cout<<"Enter your top 5 food, number "<< i+1 << ":";
//    getline(cin, foods[i]);
// }

// cout<< "Your 5 favourite foods are: "<<'\n';

// for(string food : foods){
//    cout<< food << endl;
// }

// Playing with number pyramids and patterns 
// for(int i = 0; i<sizeofa; i++){
// for (int j= 0; j<=i; j++){

//    cout<<a[j];
// }

// cout<<'\n';
// } 


//playing with vectors with user input

// vector <string> food;   //initialization of an empty vector
// string q;
// string temp;
    

// while(true){

//    cout<<"Enter your favourite food, or 'q' to quit, number "<<food.size()+1<< ":";
//    getline(cin, temp);
//    if(temp == "q"){break;}
//    else{food.push_back(temp);}
   

// }
// int size=food.size();                     // for a vector we cant use sizeof because it uses memory dynamically so size() is the right choice

// cout<<"Your favourite foods are: "<<endl;

// for(int i=0; i<size; i++){             // print the foods depending on how many user has entered
//    cout<<food[i]<<endl;
// }



// for(int i=0; !food[i].empty(); i++){            //run the for loop until it has an empty entry so it does not have to check all the way to the end;
//    cout<<food[i]<<endl;
// }



 return 0; 
 } 



 /* void sayHi(string Name, int Age){        //Brackets define which parameter will be passed to the function and void defines what is function returning in this case nothing.

   cout<<"Hello "<<Name<<endl<<"You are "<<Age<<endl; */

 //}


/* double cube(double num){

   return pow(num, 3);     // funciton takes a number and cube it and return it back to function call
  
} */


/* int getMax(int firstNumber, int secondNumber){

      int result;

      if (firstNumber>secondNumber){ 
         result = firstNumber;
      }else if (secondNumber>firstNumber){
         result = secondNumber;
      }else {
           result = 2;   // block of code to be executed if the condition1 is false and condition2 is false
           }
      return result;


} */


// Building a calculator function using switch case

// double calculator(int firstNum, int secondNum, char op){
// double result;
// switch (op)
// {
// case '+'/* constant-expression */:
//    result=firstNum+secondNum;/* code */
//    break;
// case '-'/* constant-expression */:
//    result=firstNum-secondNum;/* code */
//    break;
// case '*'/* constant-expression */:
//    result=firstNum*secondNum;/* code */
//    break;
// case '/'/* constant-expression */:
//    result=firstNum/secondNum;/* code */
//    break;

// default:
//    result = 2;
//    break;
// }
// return result;

// }