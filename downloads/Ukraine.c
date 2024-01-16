#include <stdio.h>
#include <gd.h>
#include <math.h>

int main() {
    int width = 600;  // 设置国旗宽度
    int height = 300; // 设置国旗高度

    gdImagePtr im;
    FILE *pngout;

    im = gdImageCreateTrueColor(width, height);

    // 设置蓝色横条
    int blue = gdImageColorAllocate(im, 0, 0, 255);
    // 设置黄色横条
    int yellow = gdImageColorAllocate(im, 255, 255, 0);

    // 上半部分为蓝色横条
    for (int i = 0; i < height / 2; i++) {
        gdImageFilledRectangle(im, 0, i, width - 1, i, blue);
    }

    // 下半部分为黄色横条
    for (int i = height / 2; i < height; i++) {
        gdImageFilledRectangle(im, 0, i, width - 1, i, yellow);
    }

    pngout = fopen("ukraine_flag.png", "wb");
    gdImagePng(im, pngout);
    fclose(pngout);

    gdImageDestroy(im);

    return 0;
}
