// first programme

// #include<iostream>
// using  namespace std;

// int main()
// {

//     cout << "hello world!";
//     return 0;
// }

// replacement of using namespace std; line

// #include<iostream>

// int main(){
//     std::cout<<"hello world!";

//     return 0;
// }

/*Another way to insert a new line, is with the endl manipulator:*/

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World!" << endl;
//   cout << "I am learning C++";
//   return 0;
// }

// Create a variable called myNum of type int and assign it the value 15:

// #include<iostream>

// using namespace std;

// int main(){
//     int myName;
//     myName=15;
//     cout<<myName;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main(){

//     int myNum = 5;               // Integer (whole number without decimals)
//     double myFloatNum = 5.99;    // Floating point number (with decimals)
//     char myLetter = 'D';         // Character
//     string myText = "Hello";     // String (text)
//     bool myBoolean = true;       // Boolean (true or false)

//     cout<< myNum<<"\n";
//     cout<< myFloatNum<<"\n";
//     cout<<myLetter<<"\n";
//     cout<<myText<<"\n";
//     cout<<myBoolean<<"\n";
//     return 0;
// }

// add variable together

// #include<iostream>

// using namespace std;

// int main(){

//     int x=5;
//     int y=6;
//     int sum =x+y;
//     cout<<sum;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main(){

//     const int myNum = 15;  // myNum will always be 15
//     myNum = 10;  // error: assignment of read-only variable 'myNum'
//     return 0;
// }

// taking input from user

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter a number:"<<"\n";
//     cin>>x;
//     cout<<"the number is:"<<"\n"<<x<<"\n";
//     return 0;

// }

// simple sum calculator
// #include<iostream>
// using namespace std;
// int main(){
// 	int x,y;
//     int sum;

//     cout<<"enter first number";
//     cin>>x;
//     cout<<"enter second number";
//     cin>>y;
//     sum =x+y;
//     cout<<"the sum is"<<sum;
//     return 0;
//     }

// string
//  append
// #include <iostream>
// #include <string>
// using namespace std;

// int main () {
//   string firstName = "John ";
//   string lastName = "Doe";
//   string fullName = firstName.append(lastName);
//   cout << fullName;
//   return 0;
// }

// length or size

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string txt ="abcdefghijklmnopqrstuvwxyz";
//     cout<<"the length of the text is:"<<txt.length();
//     return 0;

// }

// or

// #include<iostream>

// using namespace std;

// int main(){
//     string txt ="abcdefghijklmnopqrstuvwxyz";
//     cout<<txt.size();

//     return 0;
// }

// User Input Strings

// #include<iostream>

// using namespace std;

// int main(){

//     string firstName;
//     cout << "Type your first name: ";
//     cin >> firstName; // get user input from the keyboard
//     cout << "Your name is: " << firstName;

//     return 0;
// }

// read line of a text

// #include<iostream>

// using namespace std;

// int main(){

//     string fullName;
//     cout<<"enter your full name: ";
//     getline(cin,fullName);
//     cout<<"your full name is : "<<fullName;
//     return 0;
// }

// using cmath

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//   cout << sqrt(64) << "\n";
//   cout << round(2.6) << "\n";
//   cout << log(2) << "\n";
//   return 0;
// }

// voting programme

// #include<iostream>

// using namespace std;

// int main(){

//     int myAge;
//     cout<<"Enter your age";
//     cin>>myAge;
//     if(myAge>18){
//         cout<<"old enough to vote";
//     }
//     else{
//         cout<<"Not old enough to vote";
//     }
//     return 0;
// }

//
// else if

// #include <iostream>
// using namespace std;

// int main() {
//   int time = 22;
//   if (time < 10) {
//     cout << "Good morning.";
//   } else if (time < 20) {
//     cout << "Good day.";
//   } else {
//     cout << "Good evening.";
//   }
//   return 0;
// }

// ternary operator

// #include<iostream>

// using namespace std;

// int main(){

//     int time;
//     cout<<"Enter time";
//     cin>>time;

//     string result=(time<12)?"Good morning":"Good evening";
//     cout<<result;

//     return 0;
// }

// switch

// #include<iostream>

// using namespace std;

// int main(){

//     int day;
//     cout<<"enter day number: ";
//     cin>>day;
// switch (day) {
//   case 1:
//     cout << "Monday";
//     break;
//   case 2:
//     cout << "Tuesday";
//     break;
//   case 3:
//     cout << "Wednesday";
//     break;
//   case 4:
//     cout << "Thursday";
//     break;
//   case 5:
//     cout << "Friday";
//     break;
//   case 6:
//     cout << "Saturday";
//     break;
//   case 7:
//     cout << "Sunday";
//     break;
//     default:
//     cout<<"invalid";

// }
//     return 0;
// }

// loops

// #include<iostream>

// using namespace std;

// int main(){

//   int i=0;
//   while(i<10){
//     cout<<i<<"\n";
//     i++;

//   }
//   return 0;
// }

// The Do/While Loop

// int i = 0;
// do {
//   cout << i << "\n";
//   i++;
// }
// while (i < 5);

// for loop

// for (int i = 0; i < 5; i++) {
//   cout << i << "\n";
// }

// Nested Loops

// Outer loop
// for (int i = 1; i <= 2; ++i) {
//   cout << "Outer: " << i << "\n"; // Executes 2 times

//   // Inner loop
//   for (int j = 1; j <= 3; ++j) {
//     cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
//   }
// }

// The foreach Loop

// int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout << i << "\n";
// }

// break

// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   cout << i << "\n";
// }

// array with for loop

// #include<iostream>

// using namespace std;

// int main(){

//     string cars[5]={"volvo","maruti","bmw","jaguar","bugati"};
//     int i;
//     for(i=0;i<5;i++){
//         cout<< cars[i] << "\n";

//     }
//     return 0;
// }

// size of operator

// #include<iostream>

// using namespace std;

// int main(){

//     int myNumbers[5] = {10, 20, 30, 40, 50};
// cout << sizeof(myNumbers);
//     return 0;
// }

// get size of array :

// #include<iostream>

// using namespace std;

// int main(){
//     int myNumbers[5] = {10, 20, 30, 40, 50};
//     int getArrayLength = sizeof(myNumbers) / sizeof(int);
//     cout << getArrayLength;
//     return 0;
// }

// foreach loop

// #include<iostream>

// using namespace std;

// int main(){

//     int myNumbers[5] = {10, 20, 30, 40, 50};
//     for (int i : myNumbers) {
//     cout << i << "\n";
// }
//     return 0;
// }

// access of multidimentional array

// #include<iostream>

// using namespace std;

// int main(){

//     string letters[2][4] = {
//         { "A", "B", "C", "D" },
//         { "E", "F", "G", "H" }
//         };
//         cout << letters[0][2];
//     return 0;
// }

// loop through multi-dimentional __ARRAY
// #include <iostream>

// using namespace std;

// int main()
// {

//     int myNum[2][4] = {
//         {10, 20, 30, 40},
//         {50, 60, 70, 80}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << myNum[i][j] << "\n";
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//   string letters[2][4] = {
//     { "A", "B", "C", "D" },
//     { "E", "F", "G", "H" }
//   };

//   for (int i = 0; i < 2; i++) {
//     for (int j = 0; j < 4; j++) {
//       cout << letters[i][j] << "\n";
//     }
//   }
//   return 0;
// }


// #include<iostream>

// using namespace std;

// int main(){

//     string letters[2][2][2] = {
//   {
//     { "A", "B" },
//     { "C", "D" }
//   },
//   {
//     { "E", "F" },
//     { "G", "H" }
//   }
// };

// for (int i = 0; i < 2; i++) {
//   for (int j = 0; j < 2; j++) {
//     for (int k = 0; k < 2; k++) {
//       cout << letters[i][j][k] << "\n";
//     }
//   }
// } 
//     return 0;
// }



// structures



// #include<iostream>

// using namespace std;

// int main(){

//     // Create a structure variable called myStructure
// struct {
//   int myNum;
//   string myString;
// } myStructure;

// // Assign values to members of myStructure
// myStructure.myNum = 1;
// myStructure.myString = "Hello World!";

// // Print members of myStructure
// cout << myStructure.myNum << "\n";
// cout << myStructure.myString << "\n";
//     return 0;
// }


// One Structure in Multiple Variables



// #include<iostream>

// using namespace std;

// int main(){

//     struct {
//   string brand;
//   string model;
//   int year;
// } myCar1, myCar2; // We can add variables by separating them with a comma here

// // Put data into the first structure
// myCar1.brand = "BMW";
// myCar1.model = "X5";
// myCar1.year = 1999;

// // Put data into the second structure
// myCar2.brand = "Ford";
// myCar2.model = "Mustang";
// myCar2.year = 1969;

// // Print the structure members
// cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
// cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//     return 0;
// }


// Named Structures


// #include<iostream>
// using namespace std;

// struct car
//     {
//         string brand;
//         string model;
//         int year;
//     };
// int main(){
//     car mycar1;
//     mycar1.brand="bmw";
//     mycar1.model="x5";
//     mycar1.year=1999;
//     car mycar2;
//     mycar2.brand="ford";
//     mycar2.model="mustang";
//     mycar2.year=1960;

//     cout<<mycar1.brand<<" "<<mycar1.model<<" "<<mycar1.year<<"\n";
//     cout<<mycar2.brand<<" "<<mycar2.model<<" "<<mycar2.year<<"\n";
//     return 0;

    
// }
    

