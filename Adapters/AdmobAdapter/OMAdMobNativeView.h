// Copyright 2020 ADTIMING TECHNOLOGY COMPANY LIMITED
// Licensed under the GNU Lesser General Public License Version 3

#import <UIKit/UIKit.h>
#import "OMNativeViewCustomEvent.h"
#import "OMAdMobNativeClass.h"
#import "OMAdMobNativeAd.h"
NS_ASSUME_NONNULL_BEGIN

@interface OMAdMobNativeView : UIView<OMNativeViewCustomEvent>
@property (nonatomic, strong) OMAdMobNativeAd *nativeAd;
@property (nonatomic, strong) GADUnifiedNativeAdView *gadNativeView;
@property (nonatomic, strong) GADMediaView *mediaView;
@property(nonatomic, strong) NSLayoutConstraint *heightConstraint;
- (instancetype)initWithFrame:(CGRect)frame;


@end

NS_ASSUME_NONNULL_END
