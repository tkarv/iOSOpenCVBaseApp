//
//  ViewController.swift
//  iOSOpenCVBaseApp
//
//  Created by Tuukka Karvonen on 2018/01/19.
//  Copyright © 2018 Tuukka Karvonen. All rights reserved.
//

import UIKit

class ViewController: UIViewController, FrameExtractorDelegate {

    @IBOutlet weak var cameraView: UIImageView!
    
    let imageProcessor = OpenCVImageProcessorWrapper()
    let frameExtractor = FrameExtractor()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        frameExtractor.delegate = self
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    func captured(image: UIImage) {
        self.cameraView.image = imageProcessor?.processImage(image)
    }

}

