#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define width 80
#define height 24
#define frameCount 120
#define delay 10000

int main()
{
    float A = 0, B = 0, i, j;
    int z[frameCount];
    char b[width * height];
    
    printf("\x1b[2J");

    while (1)
    {
        memset(b, 32, width * height);
        memset(z, 0, sizeof(z));

        for (j = 0; j < 6.28; j += 0.07)
        {
            for (i = 0; i < 6.28; i += 0.02)
            {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;

                int x = width / 2 + 40 * D * (l * h * m - t * n);
                int y = height / 2 + 12 * D * (l * h * n + t * m);
                int o = x + width * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                if (height > y && y > 0 && x > 0 && width > x && D > z[o])
                {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        printf("\x1b[H");
        for (int k = 0; k < width * height; k++)
        {
            putchar(k % width ? b[k] : 10);
        }

        A += 0.04;
        B += 0.02;
        usleep(delay);
    }

    return 0;
}
