#include <iostream>
#include "Image_Class.h"
using namespace std;
int main() {
    Image I("C:/Users/ASUS/Downloads/wallpaperflare.com_wallpaper (10).jpg");
    for (int i=0; i<I.width; i++) {
        for (int j=0; j<I.height; j++) {
            unsigned int avg = 0;
            for (int k=0; k<I.channels; k++ ) {
                avg += I(i,j,k) ;

            }
            avg = avg / 3 ;

            for (int k=0; k<I.channels; k++ ) {
                I(i, j , k ) = avg;
            }

        }
    }
    I.saveImage("C:/Users/ASUS/CLionProjects/untitled/J.png");
    cout << "filter applied successfully " << endl;
    return 0;
}