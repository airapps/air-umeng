

#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"

@interface RCTUmeng : NSObject <RCTBridgeModule>
- (void) startWithAppkey:(NSString *) appkey;
- (void) setDebugMode:(BOOL)value;
- (void) onEvent:(NSString *)eventId;
@end
