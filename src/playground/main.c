/*
ZEPING Z @Nanjing University, Jan.22,2021
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <dirent.h>


char *paths[10000][256];

int readFileList(char *basePath, int counter)
{
    DIR *dir;
    struct dirent *ptr;
    char base[1000];

    while ((ptr=readdir(dir)) != NULL)
    {
        if(strcmp(ptr->d_name,".")==0 || strcmp(ptr->d_name,"..")==0)
            continue;
        else if(ptr->d_type == 8)
        {
            printf("1111111111111111111111");
            char temp[256];
            memset(temp, '\0', sizeof(temp));
            printf("%s", temp);
            strcat(temp, basePath);
            strcat(temp, "/");
            strcat(temp, ptr->d_name);
            printf("%s", temp);
            strcpy(*paths[counter], temp);
            printf("%s\n", *paths[counter]);
            counter++;
            printf("%d\n", counter);
        }///file
        else if(ptr->d_type == 10)    ///link file
            printf("d_name:%s/%s\n",basePath,ptr->d_name);
        else if(ptr->d_type == 4)    ///dirs
        {
            memset(base,'\0',sizeof(base));
            strcpy(base,basePath);
            strcat(base,"/");
            strcat(base,ptr->d_name);
            readFileList(base, counter);
        }
    }
    closedir(dir);

    return 1;
}

int main()
{
    char *basePath = "/home/ubuntu/Datasets/NLP/px/dummy/negative";
    int size = 256;
    char ps[1000][size];
    int files = 0;

    // use absolute path
    printf("the current dir is : %s\n",basePath);

    DIR *folder;
    struct dirent *entry;

    folder = opendir(basePath);

    if (folder == NULL) {
        puts("Unable to read directory");

        return(1);
    }
    else
    {
        /* code */
        puts("Directory is opened!");
    }

    
    while ( (entry = readdir(folder)) && (files < 10) )
    {
        files++;
        // printf("File %3d: %s\n", files, entry->d_name);

        char tmp[size];

        strcpy(tmp, basePath);
        
        strcat(tmp, "/");
        strcat(tmp, entry->d_name);

        strcpy(ps[files], tmp);
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", ps[i]);
    }

    // int funcReturn = readFileList(basePath, counter);

    // int index = 0;
    // printf("%s, %d\n", *paths[index], index);
    // printf("%s, %d\n", *paths[1+index], 1+index);
    // printf("%s, %d\n", *paths[2+index], 2+index);

    // if (funcReturn == 1)
    //     return 0;

    closedir(folder);
}
