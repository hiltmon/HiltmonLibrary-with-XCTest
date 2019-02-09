//===---------------------------------------------------------*- objC++ -*-===//
//
//  TestNumericUtilities.mm
//  TestHiltmonLibrary
//
//  Created by Hilton Lipschitz on 2019-02-09.
//  Copyright © 2019 Hiltmon.com. All rights reserved.
//
//===----------------------------------------------------------------------===//

#import <XCTest/XCTest.h>

#include "numeric_utilities.hpp"

@interface TestNumericUtilities : XCTestCase

@end

@implementation TestNumericUtilities

- (void)testRounding {

  double number = 0.123456789;
  XCTAssert(hmlib::utilities::roundTo<2>(number) == 0.12);
  XCTAssert(hmlib::utilities::roundTo<3>(number) == 0.123);
  XCTAssert(hmlib::utilities::roundTo<4>(number) == 0.1235);
  XCTAssert(hmlib::utilities::roundTo<5>(number) == 0.12346);

}

@end
