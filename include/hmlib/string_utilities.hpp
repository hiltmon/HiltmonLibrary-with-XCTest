//===------------------------------------------------------------*- C++ -*-===//
//
//  string_utilities.hpp
//  HiltmonLibrary
//
//  Created by Hilton Lipschitz on 2019-02-09.
//  Copyright © 2019 Hiltmon.com. All rights reserved.
//
//===----------------------------------------------------------------------===//

#ifndef hmlib_string_utilities_hpp
#define hmlib_string_utilities_hpp

#include <algorithm>
#include <string>

namespace hmlib::utilities {

  /// @brief Copy a string to a lower case string
  /// NOTE: The copy is intentional
  std::string toLower(
    const std::string& sourceString
  );

  /// @brief Copy a string to an upper case string
  /// NOTE: The copy is intentional
  std::string toUpper(
    const std::string& sourceString
  );

} // Namespace hmlib::utilities

#endif // hmlib_string_utilities_hpp
