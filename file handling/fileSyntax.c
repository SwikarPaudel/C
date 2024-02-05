// working with files
#include<stdio.h>

// fgetc(<pointer_to_a_file>);
// fputc(<character>, <pointer_to_a_file>);
// fprintf(<pointer_to_a_file>, <placeholders>, <parameters>);			--> fprintf() returns the number of bytes it has written to a file
// fscanf(<pointer_to_a_file>, <placeholders>, <parameters>);
// fputs(<string>, <pointer_to_a_file>);
// fgets(<string>, <length_limit>, <pointer_to_a_file>);

// fgetc(stdout) = getchar()
// fputc(stdin) = putchar(<character>)
// fprintf(stdout, <format_specifiers>, <parameter>) = printf(<format_specifiers>, <parameters>)
// fscanf(stdin, <format_specifiers>, <parameters>) = scanf(<format_specifiers>, <parameters>)
// fputs(<string>, stdin) = puts(<string>);

// in case r+ w+ and a+ don't work use rewind(<pointer_to_a_file>) after one half of the program ends
/*
	for ex.:
		FILE *fp;
		fp=fopen("test.txt", "r+");			--> first reads then writes
		...									--> block of codes for read
		rewind(fp);							--> restarts the program in write mode now
		...									--> block of codes for write
		fclose(fp);
*/
		

int main()
{
	// 1. Create a pointer that points to a FILE type
	FILE *fp;
	
	// 2. open/access to a file
	// fp = fopen(<file_name>, <type_of_operation>);
	/*
	types of operations:
					- "w" for write
					- "r" for read
					- "a" for append
					- "r+" for read and write
					- "w+" for write and read
					- "a+" for append and read
	*/
	// 3. Check whether file was opened successfully
	if (fp==NULL) return 0;
	// 5. Working with the file...
	/*
	Set of codes associated with the file
	.
	.
	.
	*/
	// 4. Close the file
	fclose(fp);
	
	return 0;
}
