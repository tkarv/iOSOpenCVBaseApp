//
//  OpenCVImageProcessorWrapper.m
//  iOSOpenCVBaseApp
//
//  Created by Tuukka Karvonen on 2018/01/20.
//  Copyright © 2018 Tuukka Karvonen. All rights reserved.
//

#import <opencv2/opencv.hpp>
#import "iOSOpenCVBaseApp-Bridging-Header.h"
#import "UIImage+OpenCV.h"
#import "OpenCVImageProcessor.hpp"

@implementation OpenCVImageProcessorWrapper: NSObject

OpenCVImageProcessor *openCVImageProcessor = NULL;

- (id) init
{
    self = [super init];
    openCVImageProcessor = new OpenCVImageProcessor::OpenCVImageProcessor();
    return self;
}

- (UIImage *)processImage:(UIImage *)image
{
    cv::Mat matImg = [UIImage rgbCVMatFromUIImage:image];
    openCVImageProcessor->processImage(matImg);
    return [UIImage UIImageFromCVMat:matImg];
}

@end
