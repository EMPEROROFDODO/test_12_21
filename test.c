#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++);
//	str1--;
//	str2--;
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] =  "abcdef" ;
//	char arr2[] =  "" ;
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("=\n");
//	}
//	else
//		printf("<\n");
//}


//#include<stdio.h>
//#include<assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "asdadfcf";
//	char arr2[] = "ad";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else
//		printf("yes\n");
//	return 0;
//}


#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = "asdas@fasd,fsa";
	char str[20] = { 0 };
	strcpy(str, arr);
	char* p = "@,";
	char* ret = NULL;
	for (ret = strtok(str, p); ret != NULL; ret=strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	return 0;
}