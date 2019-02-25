#include<stdio.h>
#include<string.h>
#define N strlen(g)
void crc();
void xor();
char g[20];
char text[100];
char code[100];
int len;
int main()
{
	int i,flag=0;
	printf("\n Enter the message in binary format : \n");
	scanf("%s",text);
	printf("\n Enter the geneartor number : \n");
	scanf("%s",g);
	len=strlen(text);
	for(i=len;i<len+N-1;i++)
		{
			text[i]=0;
		}
	crc();
	for(i=len;i<len+N-1;i++)
		{
			text[i]=code[i-len];
		}
	printf("\n Final codeword is : %s \n",text);
	printf("\n Enter the coded word : ");
	scanf("%s",text);
	crc();
	for(i=0;i<strlen(code);i++)
		{
			if(code[i]=1)
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
	{
		printf("\n ERROR \n");
	}
	else
	{
		printf("\n NO ERROR \n");
	
	}
	return 0;
}
void crc()
{
	int i,j;
	for(i=0;i<N)
