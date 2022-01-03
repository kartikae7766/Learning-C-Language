#include<stdio.h>  
 main()
 {  
int i=1,j=1;//initializing a local variable    
for(i=1;i<=4;i++){      
for(j=1;j<=4;j++){    
printf("%d%d\n",i,j);
if(i==2&&j==2)
{    
break;//will break loop of j only  
   
}//end of for loop  
}
}
return 0;  
}  

