//  Created by Oleg on 8/15/16.
//  Copyright © 2016 Oleg Hnidets. All rights reserved.
//

#import "OHMySQL.h"

@interface OHTestPerson : NSObject<OHMappingProtocol>

@property (nonatomic, strong) NSNumber *ID;
@property (nonatomic, strong) id name;
@property (nonatomic, strong) id surname;
@property (nonatomic, strong) id age;

@end

@interface OHTestPerson (MockObject)

+ (instancetype)mockObject;

@end
