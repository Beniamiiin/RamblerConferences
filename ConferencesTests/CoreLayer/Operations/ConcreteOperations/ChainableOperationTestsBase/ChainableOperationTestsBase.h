// Copyright (c) 2015 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <XCTest/XCTest.h>
#import <OCMock/OCMock.h>
#import "XCTestCase+RCFHelpers.h"
#import "TestConstants.h"

@protocol ChainableOperation;

/**
 @author Egor Tolstoy
 
 The base class for ChainableOperation tests
 */
@interface ChainableOperationTestsBase : XCTestCase

/**
 @author Egor Tolstoy
 
 The method setups input data for an operation
 */
- (void)setInputData:(id)data
        forOperation:(NSOperation <ChainableOperation> *)operation;

/**
 @author Egor Tolstoy
 
 The method setups output data for an operation
 */
- (void)setOutputData:(id)data
         forOperation:(NSOperation <ChainableOperation> *)operation;

/**
 @author Egor Tolstoy
 
 The method checks output data of an operation
 
 @param operation Chainable operation
 */
- (void)verifyNotNilResultForOperation:(NSOperation <ChainableOperation> *)operation;

@end
