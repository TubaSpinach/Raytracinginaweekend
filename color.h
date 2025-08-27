#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

using color=vec3;

//component values assumed to be in [0,1]
void write_color(std::ostream& out, const color& pixel_color){
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    //convert to bytes
    int ir = int(255.999)*r;
    int ig = int(255.999*g);
    int ib = int(255.999*b);

    out<<ir<<' '<<ig<<' '<<ib<<'\n';
}

#endif