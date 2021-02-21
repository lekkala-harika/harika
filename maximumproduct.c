int maxProduct(int* nums, int numsSize){
    int product;
   int i,j;
    int max=*nums;
    
    
    for(i=0;i<numsSize;i++)
    {
        product=*(nums+i);
        
       for(j=i+1;j<numsSize;j++)
       {
            if(product>max)
                max=product;
           
           product*=nums[j];
            
       }
        
        if(product>max)
                max=product;
          
    }
    
    return max;
}
