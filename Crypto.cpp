#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

void encode(unsigned char *str, unsigned char *encodedstr)
{
    int i, j, k, l;
    k=0;
for (j=0; j<3; ++j)
{
    i=j;
    while ((str[i]>0))
{
   encodedstr[k] = str[i];
   i=i+3;
   ++k;
}


}

l=0;
   while ((encodedstr[l]>0))
{
   cout << encodedstr[l];
   ++l;
}
}


void decode(unsigned char *encodedstr, unsigned char *str)
{
    int i, j, k, l, countelem, firstmod;
    countelem=0;
   while ((encodedstr[countelem]>0))
{
   ++countelem;
}


i=0;
if (countelem % 3 != 0)
{
    firstmod=1;
}
else
{
       firstmod=0;
}
for (l=0; l<((countelem / 3) + firstmod); ++l)
{
    str[i] = encodedstr[l];
    i=i+3;
}
i=1;
for (l=((countelem / 3) + firstmod); l<(2*(countelem / 3) + ((countelem) % 3)); ++l)
{
    str[i] = encodedstr[l];
    i=i+3;
}
i=2;
for (l=(2*(countelem / 3) + ((countelem) % 3)); l<countelem; ++l)
{
    str[i] = encodedstr[l];
    i=i+3;
}



l=0;
   while ((str[l]>0))
{
   cout << str[l];
   ++l;
}
}

main()
{
    int a, l;
unsigned char *str = new unsigned char[666];
unsigned char *encodedstr = new unsigned char[666];
cout << "Please write a string (max 666 chars) for encoding:" << endl;

for (l=0; l<667; ++l) // чистка мусора, без неё одни проблемы
{
str[l] = 0;
encodedstr[l] = 0;
}


cin.getline((char*)str, 666);
cout << "Encoded string:" << endl;

encode(str, encodedstr);


cout << endl ;

cout << "Decoded string:" << endl;

decode(encodedstr, str);

}


