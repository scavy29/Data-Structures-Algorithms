class Solution {
private:
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return 0;
            }
        }
            return 1;
    }
public:
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return 0;
            }
        }
            return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};

        // Character Count
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        // traverse in window of size s1 length & Compare
        int i=0;
        int count2[26]={0}; 
        int windowsize=s1.length();
        // Running for first window
        while(i<windowsize)
        {
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }

        if( checkequal(count1,count2))
        {
            return 1;
        }

        while(i<s2.length())
        {
            char newChar=s2[i];
            int index=newChar-'a';
            count2[index]++;

            char oldChar=s2[i-windowsize];
            index=oldChar-'a';
            count2[index]--; 

            i++; 
            
            if(checkequal(count1,count2))
            {
                return 1;
            }
        }
        return 0;
    }
};