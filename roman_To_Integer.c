// Program to convert Roman
// Numerals to Numbers
#include <stdio.h>
#include <string.h>

// This function returns value
// of a Roman symbol

int getvalue(char *s)
{
    int value=0;
    switch(*s)
        {
            case 'I': 
            value=1;
            break;
            case 'V':
                      value=5;                
            break;
            case'X':
                value=10;
            break;
            case'L':
                value=50;
                break;
            case'C':
                value=100;
                break;
            case'D':
                value=500;
                break;
            case'M':
                value=1000;
                break;
                
        }
    return value;
}
int romanToInt(char * s)
{
    int result = 0;
    int val1 = 0;
    int val2 =0 ;
    printf("%c ", *s);
    while(*s)
    {
        val1 = getvalue(s);
        printf("val1 = %d\n ", val1);
        s++;
        val2 = getvalue(s);
        printf("val2 = %d\n", val2);
            
        if(val1 >= val2 )
        {
            result+= val1;
        }
        else
        {
            result+= val2 - val1;
            s++;    
            
        }
         
          
        
    }
    
    return result;


}

// Driver Code
int main()
{
	// Considering inputs given are valid
	char str[10] = "XCIV";
	printf("Integer form of Roman Numeral is %d",romanToInt(str));


	return 0;
}
