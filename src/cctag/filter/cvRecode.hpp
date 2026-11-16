/*
 * Copyright 2016, Simula Research Laboratory
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _CCTAG_CVRECODE_HPP_
#define _CCTAG_CVRECODE_HPP_

#include <opencv2/core/core.hpp>

// OpenCV 5 removed the C API headers along with CV_CANNY_L2_GRADIENT.
// The value is part of the historical cv::Canny flag ABI and is still used
// internally to select the Euclidean gradient magnitude below.
#ifndef CV_CANNY_L2_GRADIENT
#define CV_CANNY_L2_GRADIENT 2
#endif

namespace cctag {
struct Parameters;
};

void cvRecodedCanny(
  const cv::Mat & imgGraySrc,
  cv::Mat& imgCanny,
  cv::Mat& imgDX,
  cv::Mat& imgDY,
  float low_thresh,
  float high_thresh,
  int aperture_size,
  int debug_info_level,
  const cctag::Parameters* params );
#endif

