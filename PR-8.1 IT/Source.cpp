#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str,const char* str1);
char* Change(char* str);
int main()
{
	char str[101];
	char str1[6] = {"BASIC"};
	cout << "Enter string:" << endl;  
	cin.getline(str, 100);
	cout << "String contained " << Count(str,str1) << " elements of 'BASIC'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
int Count(char* str,const char* str1)
{
	int k = 0;
	for (int j = 0; str[j + 1] != 0; j++)
	{
		for (int i = 0; str1[i + 1] != 0; i++)
		{
			if (str[j] == str1[i]) 
			{
				k++;
				break;
			}
		}
	}
	return k-1;
}
char* Change(char* str)
{
    int len = 0;
    while (str[len] != '\0') len++;

    char* tmp = new char[len * 2 + 1]; 
    int pos = 0; 
    int i = 0;   

    while (i < len)
    {
        if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' &&
            str[i + 3] == 'I' && str[i + 4] == 'C')
        {
 
            tmp[pos++] = 'D';
            tmp[pos++] = 'e';
            tmp[pos++] = 'l';
            tmp[pos++] = 'p';
            tmp[pos++] = 'h';
            tmp[pos++] = 'i';
            i += 5; 
        }
        else
        {
            tmp[pos++] = str[i++];
        }
    }

    tmp[pos] = '\0'; 

    for (int j = 0; tmp[j] != '\0'; j++) {
        str[j] = tmp[j];
    }
    str[pos] = '\0';

    return tmp;
}