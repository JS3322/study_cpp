//
// Created by js on 2023/07/22.
//

#ifndef PLC_USE_H
#define PLC_USE_H

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

class use {
public:
    use(const std::string &filename);
    void displayImage();
private:
    cv::Mat img;
};

#endif //PLC_USE_H
