#include<iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;


string reverse(string &s)
{
    for(int i=0; i<s.size()/2; i++)
    {
        char t = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = t;
    }
    // cout<<"Reverse : "<<s;
    return s;
}

void palindrome(string &s)
{
    for(int i=0; i<s.size()/2; i++)
    {
        if(s[i] != s[s.size()-1-i]) 
        {
            cout<<"\nNot Palindrome...";
            return;
        }
    }
    cout<<"\nPalindrome...";
    return;
}

void anagram(string &s)
{
    string t;
    cout << "\nEnter 2nd String : ";
    cin >> t;

    if (s.length() != t.length()) 
    {
        cout<<"\nNot Anagram...";
        return;   
    }

    unordered_map<char, int> m1;
    for(char c : s)
    {
        m1[c]++;
    }

    unordered_map<char, int> m2;
    for(char c : t)
    {
        m2[c]++;
    }

    for(char c : t)
    {
        if(m1[c] != m2[c])
        {
            cout << "\nNot Anagram...";
            return;
        }
    }

    cout << "\nAnagram...";
    return;
}

void count_vowels_consonants_digits(string &s)
{
    int v = 0;
    int co = 0;
    int d = 0;

    for(char c : s)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            v++;
        }
        else if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
        {
            d++;
        }
        else
        {
            c++;
        }
    }

    cout << "\nVowels : "<<v<<"\nConsonents : "<<co<<"\nDigits : "<<d;
    return;
}

void toUpperCase(string &s)
{
    for(int i=0; i<s.size(); i++)
    {
        s[i] -= 32;
    }

    cout << "\nUpper Case : "<<s;
    return;
}

void remove_duplicates(string &s)
{
    unordered_set<char> st;
    for(char c : s)
    {
        st.insert(c);
    }
    string r = "";
    for(char c : s)
    {
        if(st.count(c))
        {
            st.erase(c);
            r += c;
        }
    }
    cout << "Result after removing Duplicates : "<< r;

    return;
}

void print_freq(string &s)
{
    unordered_map<char, int> m;
    for(char c : s)
    {
        m[c]++;
    }
    for(const pair<char,int> p : m)
    {
        cout<<"\n"<<p.first<<" "<<p.second;
    }

    return;
}

void reverse_each_word(string &s)
{
    string r = "";
    string t = "";
    int i=0;
    while(i<s.size())
    {
        if(s[i] == ' ') 
        {
            r += reverse(t);
            r += " ";
            t = "";
        }
        else{
            t += s[i];
        }
        i++;
        if(i == s.size()) r += reverse(t);
    }

    cout << "\nResult : "<<r;
    return;
}



int main()
{
    string s;
    cout << "\nEnter String : " ;
    // cin >> s;
    getline(cin, s);
    cout << "Original String : "<<s;
    
    // reverse(s);
    
    // palindrome(s);
    
    // anagram(s);

    // count_vowels_consonants_digits(s);

    // toUpperCase(s);

    // remove_duplicates(s);

    // print_freq(s);

    reverse_each_word(s);

    return 0;
}
