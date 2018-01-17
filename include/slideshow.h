#ifndef SLIDESHOW_H_
#define SLIDESHOW_H_

#include <algorithm>
#include <memory>
#include <vector>
#include "font_manager.h"
#include "image_manager.h"
#include "slide.h"

struct Slideshow {
    std::vector<Slide> slides;
    uint32_t current_slide = 0;
    FontManager *font_manager;
    ImageManager *image_manager;

    Slideshow(FontManager &font_manager, ImageManager &image_manager);
    void add(const Slide &slide);
    void render_current_slide(std::unique_ptr<sf::RenderWindow> &window);
    Slide *last();
    void recenter_content();
    bool is_empty() const;

    void next_slide();
    void previous_slide();

    void print_current(int current_slide);
};

#endif  // SLIDESHOW_H_
