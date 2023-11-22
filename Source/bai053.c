// HỌC C CÙNG MÌNH
// Bài 53: Đảo ngược chuỗi dùng ham strrev
// và tự xây dụng hàm đảo ngược chuỗi
#include <stdio.h>
#include <string.h>

// chúng ta thử tự xây dựng hàm đảo chuõi nhé
void my_strrev(char str[])
{
	// lay ra do dai chuoi str
	size_t len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
int main()
{
	char str[50] = "Ga Tap Code";
	printf("Truoc Khi Dao Chuoi str = %s ", str);
	// ham strrev ham dao nguoc chuoi co san trong c
	// strrev(str);

	my_strrev(str);
	printf("\nSau Khi Dao Chuoi str = %s", str);
	return 0;
}