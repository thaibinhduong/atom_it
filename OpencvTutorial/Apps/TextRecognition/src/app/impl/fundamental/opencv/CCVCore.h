#ifndef TEXTRECOGNITION_APP_IMPL_FUNDAMENTAL_OPENCV_CCVCORE_H_
#define TEXTRECOGNITION_APP_IMPL_FUNDAMENTAL_OPENCV_CCVCORE_H_

#include "app/interface/fundamental/opencv/ICVCore.h"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

class CCVCore : public ICVCore
{
public:
    CCVCore();
    virtual ~CCVCore() {};

    void scanImgPixels(cv::Mat& I);
    void scanImgPixels_Iterator_(cv::Mat& I);
    void scanImgPixels_Reference(cv::Mat& I);
    
    void filter2D(cv::InputArray src, 
                            cv::OutputArray dst, 
                            int ddepth,
                            cv::InputArray kernel,
                            cv::Point anchor,
                            double delta = 0,
                            int borderType = cv::BORDER_DEFAULT);
};

#endif
