#include <stdio.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

#define BLOCKS 32768        //fixed size of blocks
#ifndef _DT_
#define _DT_

#define DT_SECTOR_SIZE (1024)   //is fixed on a single exp 
DT_DESCRIPTOR dt;          
    dt.file_id ;
    dt.ind_startblock;
    dt.file_length;



struct fsystem {
    
    
    struct file_system_type *s_type;       
};

create_file(file_id, file_length){              // if there is not enough space return warning message

  if (ind_startblock+file_length<BLOCKS) {   //check there is enough space to store the file than update 
            return entry->*s_type;
  } else {
      int createrejection;
        throw new ArgumentException("There is no enough space to store the file");   //warning message 
        createrejection++;
        }
 }

    


access(file_id,  byte_offset){             
    long int pos,byte_offset;
int file_id,returnlocation;
returnlocation = access (file_id,  byte_offset);

loff_t returnlocation;

        mutex_lock(&file->f_dentry->d_inode->i_mutex);
        rval = access(file_id,  byte_offset);
        mutex_unlock(&file->f_dentry->d_inode->i_mutex);

        return returnlocation;
}

extend(file_id, extension){
    for (file_id = start; file_id != end; ind_startblock += file_length){
        if (ind_startblock+file_length<BLOCKS){
            ind_startblock++;                   //add after the last one on the file
        }
        else{     //if there is no enough space 
           int extenderejection;
            throw new Error('No enough space');
            reject(Error);                      //reject with warning mesaage
            extenderejection++;
        }
    }
}

shrink(file_id, shrinking){

int *ptr = (int*) malloc(file_length);                 //deallocate  last blocks of file
     realloc(ptr,file_length-1 );                //no more last on the block use  to store new data
}  
}

int main(int argc, const char *argv[])
{
    create_file(file_id, file_length);

    access(file_id,  byte_offset);

    extend(file_id, extension);

    shrink(file_id, shrinking);

    printf("Number of that their creation is rejected = %d\n", createrejection);   //number of files that their creation is rejected
    printf("Number of that their extension is rejected = %d\n", extenderejection);   //The number of files that their extension is rejected
    printf("The average running time = %d\n", totaltime);
}