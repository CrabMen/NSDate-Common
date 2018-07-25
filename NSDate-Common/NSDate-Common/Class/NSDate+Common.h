//
//  NSDate+Add.h
//  CMDateManager
//
//  Created by 智借iOS on 2018/7/23.
//  Copyright © 2018年 CrabMan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Common)

@property (nonatomic, readonly) NSInteger cm_year; ///< Year component
@property (nonatomic, readonly) NSInteger cm_month; ///< Month component (1~12)
@property (nonatomic, readonly) NSInteger cm_day; ///< Day component (1~31)
@property (nonatomic, readonly) NSInteger cm_hour; ///< Hour component (0~23)
@property (nonatomic, readonly) NSInteger cm_minute; ///< Minute component (0~59)
@property (nonatomic, readonly) NSInteger cm_second; ///< Second component (0~59)
@property (nonatomic, readonly) NSInteger cm_nanosecond; ///< Nanosecond component
@property (nonatomic, readonly) NSInteger cm_weekday; ///< Weekday component (1~7, first day is based on user setting)
@property (nonatomic, readonly) NSInteger cm_weekdayOrdinal; ///< WeekdayOrdinal component
@property (nonatomic, readonly) NSInteger cm_weekOfMonth; ///< WeekOfMonth component (1~5)
@property (nonatomic, readonly) NSInteger cm_weekOfYear; ///< WeekOfYear component (1~53)
@property (nonatomic, readonly) NSInteger cm_yearForWeekOfYear; ///< YearForWeekOfYear component
@property (nonatomic, readonly) NSInteger cm_quarter; ///< Quarter component
@property (nonatomic, readonly) BOOL cm_isLeapMonth; ///< whether the month is leap month
@property (nonatomic, readonly) BOOL cm_isLeapYear; ///< whether the year is leap year
@property (nonatomic, readonly) BOOL cm_isToday; ///< whether date is today (based on current locale)
@property (nonatomic, readonly) BOOL cm_isYesterday;


#pragma mark --- Add

- (nullable NSDate *)cm_dateByAddingYears:(NSInteger)years;


- (NSDate *) cm_dateBySubtractingMonths: (NSInteger)Months;
- (nullable NSDate *)cm_dateByAddingMonths:(NSInteger)months;

- (nullable NSDate *)cm_dateByAddingWeeks:(NSInteger)weeks;

- (NSDate *) cm_dateBySubtractingDays: (NSInteger)Days;
- (nullable NSDate *)cm_dateByAddingDays:(NSInteger)days;

- (NSDate *) cm_dateBySubtractingHours: (NSInteger)Hours;
- (nullable NSDate *)cm_dateByAddingHours:(NSInteger)hours;

- (NSDate *) cm_dateBySubtractingMinutes: (NSInteger)Minutes;
- (nullable NSDate *)cm_dateByAddingMinutes:(NSInteger)minutes;

- (nullable NSDate *)cm_dateByAddingSeconds:(NSInteger)seconds;





#pragma mark - Date Format

/**
 Returns a formatted string representing this date.
 @param format   String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 
 @return NSString representing the formatted date string.
 */
- (nullable NSString *)cm_stringWithFormat:(NSString *)format;

/**
 Returns a formatted string representing this date.
 @param format    String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"

 @param timeZone  Desired time zone.
 
 @param locale    Desired locale.
 
 @return NSString representing the formatted date string.
 */
- (nullable NSString *)cm_stringWithFormat:(NSString *)format
                               timeZone:(nullable NSTimeZone *)timeZone
                                 locale:(nullable NSLocale *)locale;


@end
