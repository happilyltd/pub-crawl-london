#import <Foundation/Foundation.h>
#import "LPCFork.h"
#import "LPCLinePosition.h"
#import "LPCStation.h"

@interface LPCLine : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *localPrice;
@property (strong, nonatomic) NSArray *leafStations;
// allStations is an array of all the stations on the line, only vaguely ordered but not to be taken as an accurate order
@property (strong, nonatomic) NSArray *allStations;
// stationPositions is a dictionary mapping the index of the station in allStations to a key path which is the value of the position's description
@property (strong, nonatomic) NSDictionary *stationPositions;
@property (strong, nonatomic) UIColor *lineColour;
@property (strong, nonatomic) NSString *topOfLineDirection;
@property (strong, nonatomic) NSString *bottomOfLineDirection;
@property (strong, nonatomic) NSString *iapProductIdentifier;

- (id)initWithLine:(NSDictionary *)line andStations:(NSDictionary *)stations;

- (BOOL)isForkBeforePosition:(LPCLinePosition *)position;
- (LPCStation *)stationBeforePosition:(LPCLinePosition *)position;
- (LPCFork *)forkBeforePosition:(LPCLinePosition *)position;

- (BOOL)isForkAfterPosition:(LPCLinePosition *)position;
- (LPCStation *)stationAfterPosition:(LPCLinePosition *)position;
- (LPCFork *)forkAfterPosition:(LPCLinePosition *)position;

- (BOOL)isStationAfterFork:(LPCFork *)fork;

- (LPCStation *)stationWithCode:(NSString *)nestoriaCode;
- (LPCStation *)stationAtIndex:(NSUInteger)index;

@end