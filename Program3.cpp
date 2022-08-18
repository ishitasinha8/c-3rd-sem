
#include <iostream>
#include <string.h>
#define MAX 15
using namespace std;

class STRING
{
    char p[MAX];
    
    public:
        /*STRING(char s[MAX])
        {
            strcpy(p,s);
            cout << "first constructor"<<endl;
        }
        */
       STRING()
       {
           strcpy(p," ");
       }
       STRING(char *s)
        {
            strcpy(p,s);
            cout << "first constructor"<<endl;
        }
        
        STRING(const STRING &s)
        {
            cout << "second constructor"<<endl;

            strcpy(p,s.p);
        }
        void display(const STRING s)
        {
            cout<<s.p<<endl;
        }
        friend STRING operator +(const STRING &s1, const STRING &s2)
        {
            STRING temp;
            strcpy(temp.p, s1.p);
            strcat(temp.p, s2.p);
            return temp;
        }
};
int main()
{
    //char *d;
    //char g[5];

    //char *a="ABC";
    //char b[5]="ABC";

    STRING s1 = (char *)"SMIT ";
    STRING s2 = (char *)"MAJITAR";
    STRING s3 = s1 + s2;
    
    s1.display(s1);
    s2.display(s2);
    s3.display(s3);
}