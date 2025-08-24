#include <iostream>

//generate a ppm image
// ppm is a text based image file, very simple
// first line is encoding
// then dimensions in pixels,
// then color max
// then triplets of RGB

int main() {
    //image properties
    int image_width = 256;
    int image_height = 256;

    //Render
    //first three lines of file!
    std::cout<< "P3\n" << image_width << ' ' << image_height << '\n' <<"255\n";

    for(int j=0;j<image_height; j++){
        std::clog<<"\rScanlines remaining: " << (image_height-j) << ' ' << std::flush;
        
        for(int i=0;i<image_width;i++){
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.0;

            int ir = int(255.999*r);
            int ig = int(255.999*g);
            int ib = int(255.999*b);

            std::cout<<ir<<' '<<ig<<' '<<ib<<'\n';
        }
    }
}