//===------------------------------------------------------------*- C++ -*-===//
//
//  string_utilities.cpp
//  HiltmonLibrary
//
//  Created by Hilton Lipschitz on 2019-02-09.
//  Copyright © 2019 Hiltmon.com. All rights reserved.
//
//===----------------------------------------------------------------------===//

#include "string_utilities.hpp"

namespace hmlib::utilities {

  std::string toLower(const std::string& sourceString)
  {
    std::string destString = sourceString; // Copy Mutable
    std::transform(destString.begin(), destString.end(),
      destString.begin(), ::tolower);
    return destString;
  }
  
  std::string toUpper(const std::string& sourceString)
  {
    std::string destString = sourceString; // Copy Mutable
    std::transform(destString.begin(), destString.end(),
      destString.begin(), ::toupper);
    return destString;
  }

} // Namespace hmlib::utilities
