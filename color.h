#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "interval.h"

using color=vec3;

//component values assumed to be in [0,1]
void write_color(std::ostream& out, const color& pixel_color){
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    //convert to bytes
    static const interval intensity(0.000,0.999);
    int ir = int(256*intensity.clamp(r));
    int ig = int(256*intensity.clamp(g));
    int ib = int(256*intensity.clamp(b));

    out<<ir<<' '<<ig<<' '<<ib<<'\n';
}

#endif