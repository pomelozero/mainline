#include <stdio.h>
#include <string.h>

#include "include.h"

//ʹ��Nά����ӽ��ܡ�
void testSwitchPosition(){
	char str[20000];
	gets(str);
	int n=5;

	char *mi = switchEncrpty(str,n);

	char *ming = switchDiscrpty(mi,n);
	printf("orginal  str:%s\n",str);
	printf("discrpyt str:%s\n",ming);
	printf("encrpty str:%s\n",mi);
}
void main()
{
	testSwitchPosition();
	getchar();
}