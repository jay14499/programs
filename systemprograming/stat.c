#include<unistd.h>
#include<stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include<sys/sysmacros.h>
#include<stdlib.h>

int main() 
 {
  struct stat data;
  stat("1.txt",&data);
    printf("inode             :   %d\n", data.st_ino);
    printf("file type         :   %o\n", data.st_mode);
    printf("no. of links      :   %d\n", data.st_nlink);
    printf("user id           :   %d\n", data.st_uid);
    printf("group id          :   %d\n", data.st_gid);
    printf("size of file      :   %d\n", data.st_size);
    printf("file last accesed :   %s\n", ctime(&data.st_atim));
    printf("file last modifies:   %s\n", ctime(&data.st_mtim));
    printf("file status change:   %s\n", ctime(&data.st_ctim));
  }

