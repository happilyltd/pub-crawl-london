#import <UIKit/UIKit.h>

#import <MapKit/MapKit.h>
#import <MBXMapKit/MBXMapKit.h>
#import "LPCStation.h"

@protocol LPCStationViewControllerDelegate <NSObject>

- (void)didClickChangeLine;

@end

@interface LPCStationViewController : UIViewController

extern NSString *const kLPCMapBoxURLTemplate;
extern NSString *const kLPCGoogleMapsURLTemplate;

@property (weak, nonatomic) id<LPCStationViewControllerDelegate> topLevelDelegate;

@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) NSString *stationName;
@property (strong, nonatomic) NSString *lineCode;
@property (strong, nonatomic) UIColor *lineColour;
@property (strong, nonatomic) NSArray *tips;
@property (assign, nonatomic) BOOL firstStop;
@property (assign, nonatomic) BOOL lastStop;
@property (strong, atomic) MBXMapView *mapView;
@property (strong, nonatomic) NSArray *pubLocation;
@property (strong, nonatomic) NSArray *stationLocation;
@property (strong, nonatomic) NSString *branchName;
@property (assign, nonatomic) BOOL branchStationIsAhead;
@property (strong, nonatomic) NSString *directionForward;
@property (strong, nonatomic) NSString *directionBackward;
@property (strong, nonatomic) LPCStation *station;

- (void)updateVenues:(NSArray *)coreDataVenues;
- (void)updateVenuesAndRefresh:(NSArray *)coreDataVenues;

@property (strong, nonatomic) IBOutlet UILabel *stationNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *pubNameLabel;
@property (strong, nonatomic) IBOutlet UIView *view;
@property (weak, nonatomic) IBOutlet UILabel *distanceLabel;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UIView *footerView;
@property (weak, nonatomic) IBOutlet UIView *leftLineView;
@property (weak, nonatomic) IBOutlet UIView *rightLineView;
@property (weak, nonatomic) IBOutlet UIView *fullWidthLineView;
@property (weak, nonatomic) IBOutlet UIView *circleRectView;
@property (weak, nonatomic) IBOutlet UIImageView *mapImageView;
@property (weak, nonatomic) IBOutlet UILabel *tipAuthorLabel;
@property (weak, nonatomic) IBOutlet UILabel *tipLabel;
@property (weak, nonatomic) IBOutlet UILabel *destinationRightLabel;
@property (weak, nonatomic) IBOutlet UILabel *destinationLeftLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UIButton *nextPubButton;

- (IBAction)changeLine:(id)sender;
- (IBAction)changePub:(id)sender;
@property (weak, nonatomic) IBOutlet UIToolbar *toolbar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *wayOutButton;

@end
