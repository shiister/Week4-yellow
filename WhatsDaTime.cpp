#include <stdio.h>
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{

 int i =1;
 string url = "http://www.songlyrics.com/barenaked-ladies/7-8-9-lyrics";

 for (;i < argc; i++)
 {
	url = url + string(argv[i]);
	if (i != argc-1) url = url + string("+");
 }

 printf("Why did 7 ate 9?");
 cout << endl << "Don't know but you can find more info here: ";
 cout << url << endl;

 string op = string("open ").append(url);
 system(op.c_str());

 //current date/time
 time_t now = time(0);

 //convert now to string
 char* dt = ctime(&now);

 cout << "The local date and time is: " << dt << endl;

 //covert now to UTC
 tm *gmtm = gmtime(&now);
 dt = asctime(gmtm);
 cout << "The UTC date and time is: " << dt << endl;

 return 0;
}
