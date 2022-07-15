#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s)
{
	string a = s;
	reverse(s.begin(), s.end());

	return s == a;
}
int PalindromicStrings(string arr[], int N)
{
	int ans = 0;
	for (int i = 0; i < N; i++) {

		if (isPalindrome(arr[i])) {
			ans++;
		}
	}
	return ans;
}

// Driver Code
int main()
{

	string arr[]
		= { "palindrome", "ind" };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Print required answer
	cout << PalindromicStrings(arr, N);

	return 0;
}