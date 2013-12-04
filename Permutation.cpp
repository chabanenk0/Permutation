#include <cstdlib>
#include <iostream>

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
        Permutation ( char*indices, long newN);
        ~Permutation();
        void codeToIndices();
       // void indicesToCode():
        void stringToIndices();
        long getPermutationCode();
        void setPermutationCode(long newCode);
        char * getPermutationString (char*newPermutationString);
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

 system("PAUSE");
  return EXIT_SUCCESS;
}
