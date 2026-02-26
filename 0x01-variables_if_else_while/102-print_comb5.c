#include <stdio.h>

        int main(void)
{
	    int num1;   
            int num2;   
	    int tens1;  
		       
	    int ones1;  
	    int tens2;  
	    int ones2;  
				    
				    
	    for (num1 = 0; num1 <= 98; num1++)  {
							
							                      for (num2 = num1 + 1; num2 <= 99; num2++) {
											        
										tens1 = num1 / 10;    
												             

		ones1 = num1 % 10;    													        tens2 = num2 / 10;
															                        ones2 = num2 % 10;
																	            
																	            
																	            putchar(tens1 + '0');
																		                putchar(ones1 + '0');
																				     putchar(' ');

																					                
																      putchar(tens2 + '0');
																							               putchar(ones2 + '0');
																								                
									   if (num1 != 98 || num2 != 99)
																									 {
																									    putchar(',');
																															                    putchar(' ');
																																	                }
																									  }
								    }
				        
		 putchar('\n');
		  return (0);
}

