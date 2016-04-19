//
//  TestModel.h
//  Benchmark
//
//  Created by ly on 4/19/16.
//  Copyright © 2016 ly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TestModel : NSObject
{
  @public
  NSString  *_stringValue;
  NSInteger _integerValue;
}

@property (nonatomic, strong) NSString *stringValue;
@property (nonatomic, assign) NSInteger integerValue;

@end
