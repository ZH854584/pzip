//Zachary Hansen | pzip.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//prints the output list to file.


void append_i(char* s, int i)
{
char char_string[1024];
sprintf(char_string,"%d", i);
strcat(s,char_string);
}

void append_c(char*s, char i)
{
char char_string[1024];
sprintf(char_string,"%c",i);
strcat(s,char_string);
}

char* countRep(char* in)
{
	int cou = 1;
	char cha = '\0';
	char* output = NULL;
	for(int x = 0; in[x]!= '\0';x++)
	{
		cha = in[x];
		printf("%c", cha);
		while (in[x+1]==cha)
		{
			x++;
			cou++;
		}
	append_i(output, cou);
	append_c(output, cha);
	}
	return output;
}

int main (int argc, char *argv[])
{

	//loop continues until all files are read.
	for(int x = 2; x != (argc);x++)
	{
		
		int tcount = *argv[1];
		FILE *fp = fopen(argv[x],"r");
		FILE *fp_out = fopen("testzip.z","wb");
		char buf [99999];
		//file = Null handler.
		if (fp == NULL)
		{
			printf("cannot open file\n");
			exit(1);
		}
		//file contents = Null
		while(fgets(buf,9999,fp)!=NULL)
		{
		
		char* output =countRep(buf);
		
		
		printf ("%s", buf);
		//loop continues until the end of the buffer.
		// for(int x = 0;buf[x]!= '\0';x++)
		//{
		//	int cou = 1;
		//	char cha = buf[x];
		//	//loop calculates number of chars that are repeated
		//	while((buf[x+1]==cha))
		//	{
		//		x++;
		//		cou++;
		//	}
		//	if(cha != '\0' && cha != '\n')
		//	{
		//		
                        	if(tcount =='1'){
					//printf ("%d",cou);
					//printf ("%c \n",cha);
					fwrite(&output,sizeof(char*),1,fp_out);
				}
				if(tcount == 2){
				}

				if(tcount == 4){

				}
				if(tcount == 8){

				}
				if(tcount == 10){

				}
			//}
		//}
			}
		fclose(fp);

	}
return 0;
}

