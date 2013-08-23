#import <Foundation/Foundation.h>
#import "GestureUtils.h"
#import "GestureStroke.h"

@interface GestureTemplate : NSObject <NSCopying, NSCoding> {
    GestureStroke *stroke;
    GestureStroke *originalStroke;
    GesturePoint *startUnitVector;
}
@property (assign) GestureStroke *stroke;
@property (assign) GestureStroke *originalStroke;
@property (assign) GesturePoint *startUnitVector;

- (id) initWithPoints:(GestureStroke *)_points;
- (void) encodeWithCoder:(NSCoder *)coder;
- (id) initWithCoder:(NSCoder *)coder;
- (id) copyWithZone:(NSZone *)zone;
- (NSString *) description;

@end
