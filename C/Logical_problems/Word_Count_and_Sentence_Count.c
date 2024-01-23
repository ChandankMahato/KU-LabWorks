#include <stdio.h>
#include <string.h>
int words(char data[3000]);
int sentences(char data[3000]);
int main()
{
    FILE *file;
    char data[3000];
    int word,sentence,c1 = 0,c2 = 0,i = 0;
    file = fopen("Covid-19.txt","r");
    if (file == NULL)
    {
      printf("File doesn't exist");
    }
    else
    {
      printf("File opened");

      while (fgets(data,3000,file)!=NULL)
      {
        printf("%s\n",data);
        word=words(data);
        sentence=sentences(data);
        c1+=word;
        c2+=sentence;
      }

      fclose(file);
      printf("\nData retrived successfully\n");
    }


    printf("The word count is:%d\n",c1);
    printf("The sentence count is:%d\n",c2);
    return 0;
}

int words(char data[3000])
{
    int count = 0, i;
    for (i = 0;data[i] != '\0';i++)
    {
        if (data[i] == ' ' && data[i+1] != ' ')
            count++;
    }
    return count;
}

int sentences(char data[3000])
{
    int count=0, i=0;
    while(data[i] != '\0')
    {
        if(data[i] == '.' || data[i] == '?' || data[i] == '!')
            count++;
        i++;
    }
    return count;
}


