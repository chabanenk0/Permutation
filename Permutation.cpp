#include <cstdlib>
#include <iostream>
#include <ostream>

using namespace std;
class Permutation
{
    protected:
        long n;
        char PermutationString[100];//bukvu ili kod elementa
        char indices[100];//i[K]
        char sortedPermutation[100];//masiv 012
        char sortedPermutationUse[100];// 1-vilne 0-vulu4ene
        long PermutationCode;
    public:
        Permutation();
        Permutation ( long newPermutationCode);
        Permutation (char*newPermutationString);
        Permutation ( char*newIndices, long newN);
        ~Permutation();
        void show();
        void codeToIndices();
        void indicesToCode();
        void stringToIndices();
        long getPermutationCode();
        void setPermutationCode(long newCode);
        char * getPermutationString ();
        void setPermutationString(char*newPermutationString);
        char * getIndices();
        void setIndices (char* newIndices);
};

        Permutation::Permutation (long newPermutationCode)
{
        PermutationCode=newPermutationCode;      
}

        Permutation::Permutation (char*newPermutationString)
{
         int len=strlen(newPermutationString);
         newPermutationString=new char [len+1];
         strncpy(PermutationString,newPermutationString,len);
         PermutationString[len+1]=0;        
}
Permutation::Permutation (char*newIndices,long newN)
{
          for (int i=1;i<newN;i++)
       { 
          char*indices=newIndices;   
       }     
}
Permutation::~Permutation()
{

}

long Permutation::getPermutationCode()
{
     return PermutationCode;
     }
     void Permutation::setPermutationCode(long newPermutationCode)
     {
     PermutationCode=newPermutationCode;
     }
char*Permutation::getPermutationString()
{
char*copyPermutationString;
int len=strlen(PermutationString);
copyPermutationString=new char[len+1];
strncpy(copyPermutationString,PermutationString,len);
copyPermutationString[len]=0;
return copyPermutationString;
}
void Permutation::setPermutationString(char* newPermutationString)
{
if(PermutationString) delete[]PermutationString;
char PermutationString[100];
strncpy(PermutationString,newPermutationString,100);
PermutationString[100]=0;    
}
char * Permutation::getIndices()
{
char*copyIndices;
int len=strlen(indices);
copyIndices=new char[len+1];
strncpy(copyIndices,indices,len);
copyIndices[len]=0;
return copyIndices;
}
void Permutation::setIndices (char* newIndices)
{
if(indices) delete[]indices;
int len=strlen(newIndices);
char*indices=new char[len+1];
strncpy(indices,newIndices,len);
indices[len]=0;    
}

void Permutation::show()
{
cout <<((long) getPermutationCode());
}

int main(int argc, char *argv[])
{

 system("PAUSE");
  return EXIT_SUCCESS;
}
