Example: Find substring withing the full text string regardless the letter is uppercase or lowercase.

1. Functions and libraries used in this example:
1.1) Check the input string is empty or not. 
string::empty() 
1.2) Read input string from the user input.
getline(cin, string) 
1.3) Clean the user input string.
string::erase() and std::remove(): 
1.4) Find substring within the full text string.
string::find() and string::npos()
1.5) Convert the string to uppercase.
std::toupper()

2. Output examples:

Test case 1:

Please enter the full text string: 
racecaracecaracecar
Please enter the substring: 
ra
[RA] found at: 0
[RA] found at: 6
[RA] found at: 12
[RA] found 3 times.
Program ended with exit code: 0

Test case 2:

Please enter the full text string: 
Papper1pancil2pan3.
Please enter the substring: 
pa
[PA] found at: 0
[PA] found at: 7
[PA] found at: 14
[PA] found 3 times.
Program ended with exit code: 0
