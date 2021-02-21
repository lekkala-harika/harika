int search(int* nums, int numsSize, int target){
    
    int out= -1;
    int i;
    for (i=0;i<numsSize;i++)
    {
        if(*(nums+i)==target)
            out=i;
    }
    return out;
}

