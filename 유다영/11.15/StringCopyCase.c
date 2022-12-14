#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20]="1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3)-1); // str1을 str3에 복사하는데, 이때 공간의 크기는 sizeof(str3)-1만큼 하겠음(==배열의 크기 : 4)
  // 배열의 실제길이보다 하나 작은 값을 전달해 널 문자가 삽입될 공간을 남겨두고 복사진행.
  // 배열의 끝에 널문자 삽입
	str3[sizeof(str3)-1]=0; 
	puts(str3);
	return 0;
}
