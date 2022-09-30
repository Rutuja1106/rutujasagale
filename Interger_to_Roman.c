
char output[20]={0};
char * intToRoman(int num)
{
	int num_dec[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
	char *sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
	 
	int i=12;	
	int k =0; 
    
    memset(output, 0, 20);
	while(num>0)
	{
	    
	    int div = num/num_dec[i];

    	num = num%num_dec[i];
   
    	while(div--)
    	{
    	    if(*sym[i] != '0' || sym[i] != " ")
    	    {
    	       strcat(output,sym[i]);
    	     //  k++;
    	    }
	    }
	    i--;
	   
	}
   // output[k] = '\0';

     return  output; 
}