#include "tgaimage.h"

void line(int x0,int y0,int x1,int y1,TGAImage &image,TGAColor color)
{
    for(float t=0.0f;t<1;t+=0.01f)
    {
        int x=x0+(x1-x0)*t;
        int y=y0+(y1-y0)*t;
        image.set(x,y,color);
    }
}

int main()
{
    TGAImage image(100,100,TGAImage::RGB);
    line(12,20,80,40,image,TGAColor(255,255,255,255));
    image.flip_vertically();
    image.write_tga_file("output.tga");
    return 0;
}