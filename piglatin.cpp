#include <bits/stdc++.h>

using namespace std;

string toPigLatin(string word)
{
    int i = 0;
    while(i < word.size())
    {
        i++;
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' 
        || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') 
        {
            break;
        }
    }
    
    string temp = word.substr(0,i);
    string piglatin = word.substr(i,word.size() - i) + temp;
    piglatin += "ay";
    
    return piglatin;
}
int main()
{
    string line;
    while(getline(cin,line))
    {
        istringstream iss(line);
        string ans;
        string word;
        iss >> word;
        while(iss)
        {
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' 
            || word[0] == 'o' || word[0] == 'u' || word[0] == 'y')
            {
                ans += word + "yay ";
            }
            else
            {
                ans += toPigLatin(word) + " ";
            }
            iss >> word;
        }
    
        cout << ans << endl;
    }
    return 0;
}
