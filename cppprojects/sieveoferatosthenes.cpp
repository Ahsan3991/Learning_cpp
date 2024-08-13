// // Following code is inspired from sieve of erathosthenes algorithm. Basic idea is to select an upper limit and then check till
// // that limit how many prime numbers are there. The entire code takes around 18 o 21 ms to run with the the upper limit of 10000.




// #include <iostream>
// #include <vector>

// bool isprime(int num){
//     bool prime = true;

//     for ( int i = 2; i < num; i++)
//     {
//        if (num % i == 0){
//         return false;
//         break;
//        } 

//     } 
//     if (prime)
//         {return true;}
//     else 
//         return false;
    
// }



// int main (){

//     int upperlimit = 10000;
//     // std::cout<< "Enter a number equal to or greater than 2: "<<std::endl;
//     // std::cin >> upperlimit;

//     std::vector<int> primeNumbers;
//     std::vector<int> nonprimeNumbers;

//     for(int i=1; i<=upperlimit; i++){
    
//     bool primeCheck = isprime(i);
    
//     if(primeCheck){
//         primeNumbers.push_back(i);
//     }else
//         nonprimeNumbers.push_back(i);
 
//     }

//     std::cout<<"total number of prime numbers: "<<primeNumbers.size()<<std::endl;

//     std::cout<<"total number of non-prime numbers: "<<nonprimeNumbers.size()<<std::endl;
        

//     //Following code can be used to print the actual prime numbers, will increase the runtime
//     // for(int i=0; i<primeNumbers.size(); i++)
//     // {
//     //     std::cout<< primeNumbers[i]<<",";
//     // }

//     //     for(int i=0; i<nonprimeNumbers.size(); i++)
//     // {
//     //     std::cout<< nonprimeNumbers[i]<<",";
//     // }

//     return 0;
// }

