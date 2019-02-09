//===---------------------------------------------------------*- objC++ -*-===//
//
//  TestStringUtilities.mm
//  TestHiltmonLibrary
//
//  Created by Hilton Lipschitz on 2019-02-09.
//  Copyright © 2019 Hiltmon.com. All rights reserved.
//
//===----------------------------------------------------------------------===//

#import <XCTest/XCTest.h>

#include "string_utilities.hpp"

@interface TestStringUtilities : XCTestCase

@end

@implementation TestStringUtilities

- (void)setUp {
    // Put setup code here. This method is called before the
    // invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the
    // invocation of each test method in the class.
}

- (void)testCaseChanges {
  std::string upper1 = "HILTMON.COM";
  XCTAssert(hmlib::utilities::toLower(upper1) == "hiltmon.com");

  std::string lower1 = "hiltmon.com";
  XCTAssert(hmlib::utilities::toUpper(lower1) == "HILTMON.COM");

}

@end
