#if TARGET_OS_IOS || TARGET_OS_TV
#import <Flutter/Flutter.h>
#elif TARGET_OS_OSX
#import <FlutterMacOS/FlutterMacOS.h>
#endif

@interface ConnectivityPlusPlugin : NSObject <FlutterPlugin>
@end
