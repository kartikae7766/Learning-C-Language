#include <stdio.h>
unsigned char ByteFromText(char* text, FILE * im)
{
    unsigned char result = 0;
    for (int i = 0; i < 8; i++)
    {
    if (text[i] == '1') 
    {
    result &= ( 1 << (7-i) );
    fputc(result, im);
    }
    }
    return result;
}
int main ()
{
  FILE * pFile;
  FILE * image;
  int c;
  pFile=fopen ("bitstream.txt","r");
  image=fopen ("kk.jpeg","w");
  if (pFile==NULL) perror ("Error opening file");
  else
  {
  c = fgetc(pFile); 
    while (c != EOF)
    {
    ByteFromText((char*)c, image);
    c = fgetc(pFile); 
    
    } 
    }
  
  return 0;
}