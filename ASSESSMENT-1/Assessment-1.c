#include<stdio.h>
#include<string.h>
#include<stdlib.h>

		char string[100];
		char choice;
		int user;

				void string_reverse()
				{
					char str[100];
					int l,i;
					
					printf("\nEnter a string :");
					scanf("%s",&str);
					
					l=strlen(str);
					
					printf("\n\tString reverse is :",l-1);
					
					for(i=l;i>=0;i--)
					{
						printf("%c",str[i]);
					}
					printf("\n");
					
					printf("\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);
				};
				
				void string_concatenation()
				{
					char str_word1[20],str_word2[20];
					
					printf("\nEnter string 1 :");
					scanf("%s",&str_word1);
					
					printf("\nEnter string 2 :");
					scanf("%s",&str_word2);
					
					strcat(str_word1,str_word2);
					
					printf("\n\t--String concatination is :%s\n",str_word1);
				
					printf("\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);
				};
				
				void palindrome()
				{
					char string[30],rev_string[30];
					
					printf("\nEnter a string :");
					scanf("%s",&string);
					
					strcpy(rev_string,string);
					strrev(rev_string);
					
					if(strcmp(string,rev_string)==0)
					{
						printf("\n\t--%s is a string is palindrome.\n",string);
					}
					else
					{
						printf("\n\t--%s is a string is not palindrome.\n",string);
					}
					
					printf("\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);
				};
				
				void string_copy()
				{
					char string1[20],string2[20];
					
					printf("\nEnter a string :");
					scanf("%s",&string1);
					
					printf("\n\t--Enter string 1 =%s",string1);
					strcpy(string2,string1);
					
					printf("\n\t\n\t--Enter string 2 =%s",string2);
					getch();
					
					printf("\n");
					
					printf("\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);
				};
				
				void string_length()
				{
					char str[50];
					int l,i;
					
					printf("\nEnter a string :");
					scanf("%s",&str);
					
					l=strlen(str);
					
					printf("\n\t--String length is :%d\n",l);
					
					printf("\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);	
				};
				
				int frequency_character(char str[],char ch)
				{
					int i;
					int count=0;
					
					for(i=0;str[i]!='\0';i++)
					{
						if(str[i]==ch)
						{
							count++;
						}
					}
					return count;
				};
				
				void vowel_consonants()
				{
					char c;
					
					printf("\nEnter a character :");
					scanf(" %c",&c);
					
					if(c == 'a' || c == 'e' || c == 'i' || c == 'o' ||c == 'u')
					{
						printf("\n\t--Character is vowel");
					}
					else
					{
						printf("\n\t--Character is consonants");
					};
					
					printf("\n\n\tDo you want to continue perform more operation?(y or n) :");
					scanf(" %c",&choice);	
				};
				
				void blank_digit()
				{
					char line[100];
					int blanks=0,digits=0,i;
					
					printf("\nEnter a text :");
					
					fgets(line,sizeof line,stdin);
					fgets(line,sizeof line,stdin);
					
					for(i=0;line[i]!='\0';++i){
						if(isspace(line[i]))
						{
							blanks++;
						}
						else if(isdigit(line[i]))
						{
							digits++;
						}
					
				}
				
		printf("\n\t--Number of blank spaces : %d\n", blanks-1);
		printf("\n\t--Number of digits :%d", digits);
				
				printf("\n\n\tDo you want to continue perform more operation?(y or n) :");
				scanf(" %c",&choice);
}
int main()
{
	char str[100],ch;
	
	do
	{
		printf("\n-------------- Main Menu -------------");
		printf("\n\t1.String Reverse");
		printf("\n\t2.String Concationation");
		printf("\n\t3.Palindrome");
		printf("\n\t4.Copy a String");
		printf("\n\t5.Length Of The String");
		printf("\n\t6.Frequency Of Character In s String");
		printf("\n\t7.Find Number Of Vowels & Consonants");
		printf("\n\t8.Find Number Of Blank Spaces & Digits");
			
		printf("\n\nPlease Enter Your Choice :");
		scanf("%d",&user);
		
		switch(user)
		{
			case 1:
				string_reverse();
				break;
				
			case 2:
				string_concatenation();
				break;
				
			case 3:
				palindrome();
				break;
				
			case 4:
				string_copy();
				break;
				
			case 5:
				string_length();
				break;
			
			case 6:
				printf("\nEnter a Character :");
				scanf("%s",&str);
				
				printf("\nEnter Character Frequency :");
				scanf(" %c",&ch);
				
				printf("\n\t--Your Character %c Frequency Is :%d",ch,frequency_character(str,ch));
				
				printf("\n\n\tDo you want to continue perform more operation?(y or n) :");
				scanf(" %c",&choice);	
				
				break;
			
			case 7:
				vowel_consonants();
				break;
				
			case 8:
				blank_digit();
				break;
				
			default:
				printf("Enter Valid Choice !!!");
		}
	}while(choice == 'y' || choice == 'Y');
}
