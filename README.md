Example: Find substring withing the full text string regardless the letter is uppercase or lowercase.

1. Functions and libraries used in this example: <br />
1.1) Check the input string is empty or not. <br />
string::empty() <br />
1.2) Read input string from the user input.<br />
getline(cin, string) <br />
1.3) Clean the user input string.<br />
string::erase() and std::remove(): <br />
1.4) Find substring within the full text string.<br />
string::find() and string::npos()<br />
1.5) Convert the string to uppercase.<br />
std::toupper()<br />

2. Output examples:<br />

Test case 1:<br />

Please enter the full text string: <br />
racecaracecaracecar<br />
Please enter the substring: <br />
ra<br />
[RA] found at: 0<br />
[RA] found at: 6<br />
[RA] found at: 12<br />
[RA] found 3 times.<br />

Test case 2:<br />

Please enter the full text string: <br />
Papper1pancil2pan3.<br />
Please enter the substring: <br />
pa<br />
[PA] found at: 0<br />
[PA] found at: 7<br />
[PA] found at: 14<br />
[PA] found 3 times.<br />
Program ended with exit code: 0<br />
