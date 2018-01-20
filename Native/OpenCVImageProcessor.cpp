//
//  OpenCVImageProcessor.cpp
//  iOSOpenCVBaseApp
//
//  Created by Tuukka Karvonen on 2018/01/20.
//  Copyright © 2018 Tuukka Karvonen. All rights reserved.
//

#include "OpenCVImageProcessor.hpp"

void OpenCVImageProcessor::processImage(cv::Mat &image) {
    // your code here
    cv::putText(image, cv::String("Hello, OpenCV!"), cv::Point(image.cols/2, image.rows/2), cv::FONT_HERSHEY_SIMPLEX, 2.0, cv::Scalar(0, 255, 0));
}
