/*

name Mark Thuranira

reg no CT100/G/26254/25

DES file handling

*/

#include<stdio.h>

void writeintegerstoFile()

{

FILE * file=fopen("input.txt","w");

if (file == NULL)

{

printf ("Error: could not open input.txt for writing.\n");

return;

}

printf("Please enter 10 integers \n");

for (int i = 0; i < 10; i++)

{

int num;

printf("integer %d", i+1);

scanf("%d",&num) ;

fprintf(file,"%d\n",num);

}

}

void processfile()

{

FILE*inputfile=fopen("input.txt","r");

FILE*outputfile=fopen("output.txt","w");

if (inputfile==NULL)

{

printf("Error: could not open input.txt for reading.\n");

return;

}

if (outputfile == NULL)

{

printf("Error:couldnot open outputfile.txt for writing.\n");

fclose(inputfile);

return;

}

int num, sum =0, count=0;

while(fscanf(inputfile, "%d", &num)==1){
sum+=num;

count ++;

}

if(count>0)

{

float average = (float)sum/count;

fprintf(outputfile, "Sum:%d\n",sum);

fprintf (outputfile,"Average:%.2f",average);

}

else

{

fprintf(outputfile, "no integers found in input.txt\n");

}

fclose(inputfile);

fclose(outputfile);

printf("Sum and average has been written to output.txt\n");

}

void displayfiles()

{

FILE * inputfile = fopen("input.txt","r");

FILE * outputfile =fopen("output.txt","r");

char ch;

if (inputfile ==NULL)

{

printf("Error could not open input.txt for reading\n");

}

else

{

printf("\n--- content from input.txt---\n");

while((ch = fgetc(inputfile)) != EOF)

{

printf("%c", ch);

}

fclose(inputfile);

}

if (outputfile == NULL)
{
    printf("\nError: could not open output.txt for reading.\n");
}


else

{

printf("\n---contents for output.txt---\n");

while ((ch = fgetc(outputfile)) !=EOF)

{

printf("%c",ch);

}

fclose(outputfile);

}

}

int main()

{

writeintegerstoFile();

processfile();

displayfiles();

return 0;

}

