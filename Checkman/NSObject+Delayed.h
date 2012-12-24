#import <Foundation/Foundation.h>

@interface NSObject (Delayed)
- (void)performSelectorOnNextTick:(SEL)selector;
- (void)performSelectorOnNextTick:(SEL)selector afterDelay:(NSTimeInterval)delay;
@end
