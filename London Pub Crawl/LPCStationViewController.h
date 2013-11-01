#import <UIKit/UIKit.h>

#import <MapKit/MapKit.h>
#import <MBXMapKit/MBXMapKit.h>

@interface LPCStationViewController : UIViewController

@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) NSString *stationName;
@property (strong, nonatomic) NSString *lineCode;
@property (strong, nonatomic) UIColor *lineColour;
@property (assign, nonatomic) BOOL firstStop;
@property (assign, nonatomic) BOOL lastStop;
@property (strong, nonatomic) IBOutlet UILabel *stationNameLabel;
@property (strong, nonatomic) IBOutlet UIView *view;
@property (strong, nonatomic) UIImage *lineImagePng;
@property (strong, nonatomic) NSString *pubName;
@property (weak, nonatomic) IBOutlet UILabel *pubNameLabel;
@property (strong, nonatomic) NSString *distance;
@property (weak, nonatomic) IBOutlet UILabel *distanceLabel;
//@property (strong, nonatomic) IBOutlet MBXMapView *pubMapView;
@property (strong, nonatomic) MBXMapView *mapView;
@property (strong, nonatomic) NSArray *pubLocation;
@property (strong, nonatomic) NSArray *stationLocation;
@property (weak, nonatomic) IBOutlet UIView *loadingView;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UIView *footerView;
@property (weak, nonatomic) IBOutlet UIView *leftLineView;
@property (weak, nonatomic) IBOutlet UIView *rightLineView;
@property (weak, nonatomic) IBOutlet UIView *fullWidthLineView;
@property (weak, nonatomic) IBOutlet UIView *circleRectView;
- (IBAction)changeLine:(id)sender;

@end
