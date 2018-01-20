//
//  OpenCVImageProcessor.hpp
//  iOSOpenCVBaseApp
//
//  Created by Tuukka Karvonen on 2018/01/20.
//  Copyright © 2018 Tuukka Karvonen. All rights reserved.
//

#pragma once

#include <opencv2/opencv.hpp>

class OpenCVImageProcessor {
public:
    void processImage(cv::Mat &image);
};

