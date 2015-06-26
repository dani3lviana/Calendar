//
//  Event.h
//  Calendar
//
//  Created by Daniel Viana Medeiros on 6/24/15.
//  Copyright (c) 2015 Julien Martin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Event : NSObject

@property (nonatomic) NSInteger identifier;
@property (nonatomic) NSInteger resourceId;
@property (nonatomic) NSInteger userId;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (nonatomic, strong) NSString *note;
@property (nonatomic, strong) NSString *location;
@property (nonatomic, strong) NSMutableArray *calendars;
@property (nonatomic, strong) NSMutableArray *assignments;
@property (nonatomic) NSInteger repeat;

@end
