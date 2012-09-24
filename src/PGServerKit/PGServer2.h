
#import <Foundation/Foundation.h>
#import "PGServerKit.h"

extern NSUInteger PGServerDefaultPort;

@interface PGServer2 : NSObject {
	PGServerState _state;
	NSString* _hostname;
	NSUInteger _port;
	NSString* _dataPath;
}

// properties
@property id delegate;
@property (readonly) NSString* version;
@property (readonly)PGServerState state;
@property (readonly) NSString* hostname;
@property (readonly) NSUInteger port;
@property (readonly) NSString* dataPath;

// return shared server object
+(PGServer2* )sharedServer;

// start the server
-(BOOL)startWithDataPath:(NSString* )thePath;
-(BOOL)startWithDataPath:(NSString* )thePath hostname:(NSString* )hostname port:(NSUInteger)port;

// stop, reload and restart server
-(BOOL)stop;
-(BOOL)restart;
-(BOOL)reload;

// utility methods
+(NSString* )stateAsString:(PGServerState)theState;

@end
