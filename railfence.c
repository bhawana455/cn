#include<stdio.h>
#include<string.h>
char *remove_white_spaces(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i]!=' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}
char *decrypt(char * str1 ,char *str2,int n1,int n2, char *str3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        str3[k++] =str1[i++];
        str3[k++]=str2[j++];
    }
    while(i<n1)
    str3[k++]=str1[i++];
    while(j<n2)
    str3[k++]=str1[j++];
}
int main()
{
  char str[22]="all the best for exams", str1[10]="", str2[10]="";
  int i, cnt1=0, cnt2=0;
  printf("Rail Fence - Encryption\n\n");
 remove_white_spaces(str);
  printf("%s\n\n",str);

  for(i=0; i<strlen(str); i++)
  {
    if( i%2 == 0)
    {
      str1[cnt1++]=str[i];
    }
    else
      str2[cnt2++]=str[i];
  }
  printf("Cipher Text: %s%s\n",str1,str2);
  //decryption
  int n1= strlen(str1);
  int n2= strlen(str2);
  char str3[n1+n2];
  decrypt(str1,str2,n1,n2,str3);
  printf("%s\n\n",str3);
  return 0;
}
