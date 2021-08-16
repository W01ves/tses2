#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 100; i++)
//	{
//		printf("%d ",i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//
//	return 0;
//
//}




//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <10; i++)
//	{
//		arr[i] = i;
//		printf("hehe\n");
//	}
//	{
//		int b = 0;
//	}
//	return 0;
//}	


//int main()
//{
//	int i = 0;
//	int sum = 0;                    //保存最终结果
//	int n = 0;                       //保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 1;
//		printf("hehe\n");
//	}
//	return 0;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (1)
//	{
//		*dest = *src;
//		if (*src == '\0')
//		{
//			break;
//		}
//		dest++;
//		src++;
//	}
//	
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)                    //判断条件是赋值结果 即 *src  当*src =='\0'时，循环结束
//		{
//			;
//		}
//
//	}
//	
//
//}

//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)                    //判断条件是赋值结果 即 *src  当*src =='\0'时，循环结束
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}



//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)                    
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;   
//	p = &n;
//	printf("%d", num);
//	return 0;
//}



//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)                    
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int my_strlen(const char* str)                        
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;                   
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);                  
//	printf("len = %d\n", len);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int  a = 2*pow(10,2);
//	printf("%d", a);
//	return 0;
//
//}


//#include <math.h>
//int reverse(int x)
//{
//	int i, j = 0;
//	long long sum = 0;
//	int arr[10] = { 0 };
//	int y = abs(x);
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = y % 10;
//		if (y < 10)
//			break;
//		y = y / 10;
//	}
//
//	j = i;
//
//
//	if (x > 0 && x <= pow(2, 31) - 1)
//	{
//		for (i = 0; j >= 0; i++)
//		{
//			sum = sum + arr[i] * pow(10, j);
//			j--;
//		}
//		if (sum > pow(2, 31) - 1)
//		{
//			sum = 0;
//		}
//		return sum;
//	}
//	else if (x < 0 && x >= -pow(2, 31))
//	{
//		for (i = 0; j >= 0; i++)
//		{
//			sum = sum + arr[i] * pow(10, j);
//			j--;
//		}
//		if (sum > pow(2, 31))
//		{
//			sum = 0;
//		}
//		return -sum;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 15342;
//	printf("%d", reverse(a));
//	return 0;
//}


////整数反转////
//#include <math.h>
//int reverse(int x)
//{
//	int i, j = 0;
//	long long sum = 0;
//	int arr[10] = { 0 };
//	int y = abs(x);
//	if (x > 0 && x <= pow(2, 31) - 1)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			arr[i] = x % 10;
//			if (x < 10)
//				break;
//			x = x / 10;
//		}
//		j = i;
//
//		for (i = 0; j >= 0; i++)
//		{
//			sum = sum + arr[i] * pow(10, j);
//			j--;
//		}
//		if (sum > pow(2, 31) - 1)
//		{
//			sum = 0;
//		}
//		return sum;
//	}
//	else if (x < 0 && x >= -pow(2, 31))
//	{
//		for (i = 0; i < 10; i++)
//		{
//			arr[i] = x % 10;
//			if (x > -10)
//				break;
//			x = x / 10;
//		}
//		j = i;
//
//		for (i = 0; j >= 0; i++)
//		{
//			sum = sum + arr[i] * pow(10, j);
//			j--;
//		}
//		if (sum < -pow(2, 31))
//		{
//			sum = 0;
//		}
//		return sum;
//	}
//	else
//		return 0;
//}




