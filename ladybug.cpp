#include<stdio.h>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int len;
        int flag=0;
        cin>>len;
        string str;
        cin>>str;
        int alphabet[27];
        memset(alphabet,0,sizeof(alphabet)); // calculating the frequency of different alphabet
        for(int i=0;i<len;i++)
        {
            if(str[i]=='_')
                alphabet[26]++;
            else
                alphabet[str[i]-'A']++;
        }
        if(alphabet[26]==0)
        {
            for(int i=0;i<len;i++)
            {
                if(i==0)
                {
                    if(str[i]!=str[i+1])
                        flag++;
                }
                else if(i==len-1)
                {
                    if(str[i]!=str[i-1])
                        flag++;
                }
                else
                {
                    if(str[i]!=str[i-1] && str[i]!=str[i+1])
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<26;i++)
            {
                if(alphabet[i]==1)
                {
                    cout<<"NO"<<endl;
                    flag++;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES"<<endl;

        }
    }
    return 0;
}
