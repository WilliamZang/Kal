/* 
 * Copyright (c) 2009 Keith Lazuka
 * License: http://www.opensource.org/licenses/mit-license.html
 */

#import <Foundation/Foundation.h>

@interface NSDate (KalAdditions)

// All of the following methods use [NSCalendar myCalendar] to perform
// their calculations.

- (NSDate *)cc_dateByMovingToBeginningOfDay;
- (NSDate *)cc_dateByMovingToEndOfDay;
- (NSDate *)cc_dateByMovingToFirstDayOfTheMonth;
- (NSDate *)cc_dateByMovingToFirstDayOfThePreviousMonth;
- (NSDate *)cc_dateByMovingToEndDayOfThePreviousMonth;
- (NSDate *)cc_dateByMovingToFirstDayOfTheFollowingMonth;
- (NSDate *)cc_dateByMovingToEndDayOfTheFollowingMonth;
- (NSDateComponents *)cc_componentsForMonthDayAndYear;
- (NSUInteger)cc_weekday;
- (NSUInteger)cc_numberOfDaysInMonth;

@end