#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[27]={0};// INITIATES ALL THE 27 ELEMENTS OF THE ARRAY A AS 0.
	int n;
	cin >>n;
	string s;
	cin >>s;
	
	for (int i = 0; i < n; i++)
	{
		if (s[i] >='A' && s[i] <='Z')
		{
			a[s[i]-'A']++;// BY this we are incrementing the element at that index.suppose we have intially 0 stored there then if the character comes once then the value of the element at that index is incremented by 1.
		}
		if (s[i] >='a' && s[i] <='z')
		{
			a[s[i]-'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (a[i]==0)
		{
			cout <<"NO";
			return 0;
		}
	}
	cout <<"YES";
	return 0;
}
