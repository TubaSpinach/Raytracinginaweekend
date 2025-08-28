#include "rtweekend.h"
#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"

int main() {
    //image properties
    int image_width = 400;
    auto aspect_ratio = 16.0 / 9.0;

    camera Camera;
    Camera.image_width = image_width;
    Camera.aspect_ratio = aspect_ratio;
    Camera.samples_per_pixel = 100;

    //world

    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1),0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1),100));

    Camera.render(world);

}