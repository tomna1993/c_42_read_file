#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Create file pointer
	FILE* file_pointer;

	// Check if file exist and open it for reading
	file_pointer = fopen("user_informations.txt", "r");

	if(file_pointer == NULL)
	{
		printf("Error: file doesn't exist!\n");
		return 1;
	}

	// Read a line from the file
	string file_read_string;
	
	// Stop reading the file if there is an EOF, a newline character
	// or we reach 150 characters read
	fgets(file_read_string, 150, file_pointer);

	// Close the file and remove it from the memory
	fclose(file_pointer);

	// Print read string
	printf("%s", file_read_string);

	return 0;
}