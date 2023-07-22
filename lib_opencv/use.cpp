//
// Created by js on 2023/07/22.
//

#include "use.h"
#include <iostream>

use::use(const std::string &filename)
        : img(cv::imread(filename, cv::IMREAD_COLOR)) {
    if(img.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
    }
}

void use::displayImage() {
    cv::namedWindow("image", cv::WINDOW_NORMAL);
    cv::imshow("image", img);
    cv::waitKey(0);
}
