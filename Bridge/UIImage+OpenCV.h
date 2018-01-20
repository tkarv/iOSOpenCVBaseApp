//
//  UIImage+OpenCV.h
//  iOSOpenCVBaseApp
//
//  Created by Tuukka Karvonen on 2018/01/20.
//  Copyright © 2018 Tuukka Karvonen. All rights reserved.
//

#import <opencv2/opencv.hpp>
#import <UIKit/UIKit.h>

@interface UIImage (OpenCV)

+ (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;

+ (cv::Mat)cvMatFromUIImage:(UIImage *)image;
+ (cv::Mat)rgbCVMatFromUIImage:(UIImage *)image;
+ (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;

@end
