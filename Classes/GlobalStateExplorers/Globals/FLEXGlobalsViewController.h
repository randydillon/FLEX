//
//  FLEXGlobalsViewController.h
//  Flipboard
//
//  Created by Ryan Olson on 2014-05-03.
//  Copyright (c) 2014 Flipboard. All rights reserved.
//

#import "FLEXTableViewController.h"
@protocol FLEXGlobalsTableViewControllerDelegate;

typedef NS_ENUM(NSUInteger, FLEXGlobalsSectionKind) {
    /// NSProcessInfo, Network history, system log,
    /// heap, address explorer, libraries, app classes
    FLEXGlobalsSectionProcessAndEvents,
    /// Browse container, browse bundle, NSBundle.main,
    /// NSUserDefaults.standard, UIApplication,
    /// app delegate, key window, root VC, cookies
    FLEXGlobalsSectionAppShortcuts,
    /// UIPasteBoard.general, UIScreen, UIDevice
    FLEXGlobalsSectionMisc,
    FLEXGlobalsSectionCustom,
    FLEXGlobalsSectionCount
};

@interface FLEXGlobalsViewController : FLEXTableViewController

@end