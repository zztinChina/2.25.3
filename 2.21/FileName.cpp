#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tem = 0;
		tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}
}
void fan(char* arr1, int k)
{
	int len = strlen(arr1);
	reverse(arr1, arr1 + k - 1);
	reverse(arr1+k, arr1+len-1);
	reverse(arr1, arr1+len-1);
	printf("%s", arr1);
}
int main()
{
	char arr1[] = { "abcdefg" };
	int k = 0;
	scanf_s("%d", &k);
	fan(arr1, k);
	return 0;
}
