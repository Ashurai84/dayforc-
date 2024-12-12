//  // Wap to identify the asscci code or casting char into int 

// # include <iostream>
// using namespace std;
// int main ()
// {
//     char c = 'A';
//     int asciiValue = static_cast<int>(c);  
//     cout << "ASCII value of character 'A' is: " << asciiValue << endl;  
//     return 0; 
// }




// // casting  int into char 

// # include <iostream>
// using namespace std;
// int main ()
// {
//     int asciiValue = 75;
//     char c = static_cast<char>(asciiValue);  
//     cout << "Character corresponding to ASCII value '66' is: " << c << endl;  
//     return 0; 
// }


// // conditonal stament 

// #include <iostream>
// using namespace std;
// int main(){
//    int A=20;
//     if(A>18){
//         cout<<" you are the adult "<<endl;

//     }
//     else{
//         cout<<"you are small"<<endl;
//     }
// }

// // wap to identify the signal 

// #include <iostream>
// using namespace std;
//  int main(){
//     string signal;
//     cout<<"enter signal value" ; 
//     cin>>signal;
//     if(signal=="red"){
//         cout<<"you  can stop now"<<endl;
//     }
//     else{
//         cout<<"you can go "<<endl;
//     }
// }




// // wap for positve number and negative number 



// #include <iostream>
// using namespace std;
//  int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;

//     if(num>=0){
//         cout<<"the number is positive"<<endl;

//     }
//     else{
//         cout<<"this is a negative number"<<endl;
//     }
//  }




// // taxiation  
 #include <iostream>
using namespace std;
 int main(){
    int amt;
    cout<<"enter your amonut"<<endl;
    cin>>amt;
    if(amt<=100000){
        cout<<"no need to pay the tax"<<endl;


    }
    else if(amt>100000&& amt<=500000)
    {
       int tax = amt*10/100;
        cout<<"tax amount is :"<<tax<<endl;
        }
    
    else{
        int tax=amt*20/100;
        cout<<"tax amount is :"<<tax<<endl;


    }
 }



