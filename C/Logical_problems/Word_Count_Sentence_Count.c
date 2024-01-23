#include <stdio.h>
#include <stdlib.h>

FILE *readFile(char *fileName){
    FILE *fileStream  = fopen(fileName,"r");
    if((fileStream = fopen(fileName,"r")) == NULL){
        printf("File not found");
        return NULL;
    }
    return fileStream;
}

int main(){
    
    
    char *filename = "adviceForPublic.txt";
    FILE *getFile = readFile(filename);

    //get the size of the file
    fseek(getFile,0,2);  //get to end of the file
    int size = ftell(getFile); 
    char *data =  malloc(sizeof(char)*size); //worst case scenerio

    //move the cursor back to initial position
    fseek(getFile,0,0);
    
    int wordCount = 0;
    int sentenceCount = 0;
    int currentPos =0;
    //read from the stream 
    while(fgets(data,size,getFile) != NULL){
        //count words
        printf("%s \n",data);
        int counter=0;
        while(data[counter] != '\0'){
            if(data[counter]!=' '){
                if(data[counter+1] == ' ' || data[counter+1]=='\0'){
                    wordCount++;
                }
            }
            counter++;
        }
        sentenceCount++;

        }
        currentPos = ftell(getFile);

    
    printf("Number of words are %d and number of sentences are %d",wordCount,sentenceCount);
    
    
    


    //read the file stream and store it in array
   
    return 0;

    
}
