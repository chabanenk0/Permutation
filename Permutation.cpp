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
        Permutation ( long new Permutation Code);
        Permutation (char*Permutation string);
        Permutation ( char* indices, long n);
        ~Permutation();

        Void codeToIndices();
        void indicesToCode():
        void stringToIndices();
        long getPermutationCode();
        void setPermutationCode(long newCode);
        char * getPermutationString (char*newPermutationString);
        char * getIndices();
        void setIndices (char* newIndices);
};

