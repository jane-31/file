#include <iostream>
#include <windows.h>
#include <fstream>

int main()
{
	using namespace std;
	char filename[50];
	printf("Enter the file name:");
	cin.getline(filename,50);

	FILE *inp_file=fopen(filename, "rb");
	if (inp_file == NULL) printf ("Error\n");
	else {
	    FILE *out_file=fopen("file_out","wb");
	
	    BYTE byte;
	    char sim;
	
	    while(!feof(inp_file))
	    {
	        fread(&byte,1,1,inp_file);
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	
	        if(byte>=128)sim='1';
	        else sim='0';
	        fwrite(&sim,1,1,out_file);
	        byte=byte<<1;
	    }
	
	    fclose(inp_file);
	    fclose(out_file);
	}
}

