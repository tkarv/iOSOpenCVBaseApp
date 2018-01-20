//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface OpenCVImageProcessorWrapper: NSObject

- (id) init;
- (UIImage *) processImage:(UIImage *) image;

@end
