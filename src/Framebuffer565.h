#ifndef _FRAMEBUFFER565FAST_H
#define _FRAMEBUFFER565FAST_H

#include <Cariad.h>

class Framebuffer565 : public Image {
    private:
        color_t *_buf;

    public:
        Framebuffer565(int w, int h, color_t *b);

        void initializeDevice();

        void setPixel(int x, int y, color_t c);
        void fillScreen(color_t c);

        void draw(Cariad *dev, int x, int y);
        void draw(Cariad *dev, int x, int y, color_t t);
        void drawTransformed(Cariad *dev, int x, int y, int transform);
        void drawTransformed(Cariad *dev, int x, int y, int transform, color_t t);

        void draw(Cariad &dev, int x, int y) { draw(&dev, x, y); }
        void draw(Cariad &dev, int x, int y, color_t t) { draw(&dev, x, y, t); }
        void drawTransformed(Cariad &dev, int x, int y, int transform) { drawTransformed(&dev, x, y, transform); }
        void drawTransformed(Cariad &dev, int x, int y, int transform, color_t t) { drawTransformed(&dev, x, y, t); }

        void draw(Cariad *dev) { draw(dev, 0, 0); }
        void draw(Cariad &dev) { draw(&dev, 0, 0); }

        color_t colorAt(int x, int y);


};

#endif
