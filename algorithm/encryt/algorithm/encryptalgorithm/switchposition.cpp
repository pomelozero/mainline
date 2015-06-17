//ªªŒªº”Ω‚√‹

#include <string.h>
#include <stdlib.h>

char* switchEncrpty(char* src, int n)
{
	int block = n * n;
	int i,j,k,d,m;
	int len;
	char *temp,*miwen,*mtemp;
	
	len = strlen(src);
	if((d=len%block)!=0){
		len = len+block-d;
	}
	if((temp=(char*)malloc(len+1))==NULL){
		return NULL;
	}
	if((miwen=(char*)malloc(len+1))==NULL){
		return NULL;
	}
	else{
		mtemp = miwen;
	}
	strcpy(temp,src);
	for(i=strlen(src);i<len;i++){
		temp[i]=32;
	}
	temp[len] = '\0';
	for(m=0; m < len/block; m++){
		for(k = 0; k < n; k++){
			for(j = 0;j < n; j++){
				*mtemp = temp[k+j*n+m*block];
				mtemp++;
			}
		}
	}
	*mtemp = '\0';
	free(temp);
	return miwen;
}

char* switchDiscrpty(char* src, int n)
{
	int block = n * n;
	int i,j,k,d,m;
	int len;
	char *temp,*mingwen,*mtemp;
	
	len = strlen(src);
	if((d=len%block)!=0){
		len = len+block-d;
	}
	if((temp=(char*)malloc(len+1))==NULL){
		return NULL;
	}
	if((mingwen=(char*)malloc(len+1))==NULL){
		return NULL;
	}
	else{
		mtemp = mingwen;
	}
	strcpy(temp,src);
	for(i=strlen(src);i<len;i++){
		temp[i]=32;
	}
	temp[len] = '\0';
	for(m=0; m < len/block; m++){
		for(k = 0; k < n; k++){
			for(j = 0;j < n; j++){
				*mtemp = temp[k+j*n+m*block];
				mtemp++;
			}
		}
	}
	while(*(--mtemp)==32);
	mtemp++;
	*mtemp = '\0';
	return mingwen;
}