//===------------------------------------------------------------*- C++ -*-===//
//
//  numeric_utilities.hpp
//  HiltmonLibrary
//
//  Created by Hilton Lipschitz on 2019-02-09.
//  Copyright © 2019 Hiltmon.com. All rights reserved.
//
//===----------------------------------------------------------------------===//

#ifndef hmlib_numeric_utilities_hpp
#define hmlib_numeric_utilities_hpp

#include <iostream>
#include <cmath>

namespace hmlib::utilities {

  /// @brief Generate a static round function at compile time to get
  /// a given precision. Not bankers, relies on C++ round.
  template <int precision>
  double roundTo(double value) {

    static_assert(precision > 0, "Precision must be > 0");

    double factor = std::pow(10.0, static_cast<double>(precision));
    return std::round(value * factor) / factor;
  }

} // Namespace hmlib::utilities

#endif // hmlib_numeric_utilities_hpp
