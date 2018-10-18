#include<stdio.h>
#include<stdint.h>
#include<io.h>
#include<fcntl.h>

#define PIC_WIDTH 64
#define PIC_HEIGHT 32
#define PIC_SIZE (PIC_WIDTH * PIC_HEIGHT * 3)

int main()
{
    _setmode(_fileno(stdin),_O_BINARY);
    uint8_t buffer[PIC_SIZE];
    fread(buffer, PIC_SIZE, 1, stdin);

    while(!feof(stdin) && !ferror(stdin))
    {
        uint8_t output_buffer[8 * 32] = {0};
        for(size_t x = 0; x < 64; x++)
        {
            for(size_t y = 0; y < 32; y++)
            {
                int sum = 0;

                sum += buffer[64 * 3 * y + x];                      //red
                sum += buffer[64 * 3 * y + x + 1];                  //green
                sum += buffer[64 * 3 * y + x + 2];                  //blue

                if(sum >= 256 * 3/2)                                //when white
                {
                    output_buffer[8 * y + (x / 8)] |= 1 << (x % 8);
                }
            }
        }
        fwrite(output_buffer, 8 * 32, 1, stdout);

        fread(buffer, PIC_SIZE, 1, stdin);                          //read next line
    }
    return 0;
}
