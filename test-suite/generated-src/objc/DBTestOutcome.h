// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

#import "DBNestedOutcome.h"
#import "DJOutcome.h"
#import <Foundation/Foundation.h>


@interface DBTestOutcome : NSObject

+ (nonnull DJOutcome<NSString *, NSNumber *> *)getSuccessOutcome;

+ (nonnull DJOutcome<NSString *, NSNumber *> *)getErrorOutcome;

+ (nonnull NSString *)putSuccessOutcome:(nonnull DJOutcome<NSString *, NSNumber *> *)x;

+ (int32_t)putErrorOutcome:(nonnull DJOutcome<NSString *, NSNumber *> *)x;

+ (nonnull DBNestedOutcome *)getNestedSuccessOutcome;

+ (nonnull DBNestedOutcome *)getNestedErrorOutcome;

+ (int32_t)putNestedSuccessOutcome:(nonnull DBNestedOutcome *)x;

+ (nonnull NSString *)putNestedErrorOutcome:(nonnull DBNestedOutcome *)x;

@end
