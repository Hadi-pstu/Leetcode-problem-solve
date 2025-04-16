class Solution {
    public:
        int romanToInt(string s) {
            int sum = 0 ;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='I')
                {
                    sum += 1;
                }
                else if(s[i]=='V')
                {
                    sum += 5;
                }
                else if(s[i]=='X')
                {
                    sum += 10;
                }
                else if(s[i]=='L')
                {
                    sum += 50;
                }
                else if(s[i]=='C')
                {
                    sum += 100;
                }
                 else if(s[i]=='D')
                {
                    sum += 500;
                }
                else
                {
                    sum += 1000;
                }
    
            }
            int sub = 0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='I' && s[i+1]=='V'|| s[i]=='I' && s[i+1]=='X'  )
                 {
                     sub += 2;
                 }
                
                else if(s[i]=='C' && s[i+1]=='M' || s[i]=='C' && s[i+1]=='D' )
                 {
                     sub += 200;
                 }
                else if(s[i]=='X' && s[i+1]=='C' || s[i]=='X' && s[i+1]=='L')
                {
                    sub += 20;
                }
                else
                {
                    continue;
                }
    
            }
            return sum - sub;
      }
      
    };