// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004-2015 Steve Nygard.

#import "CDLoadCommand.h"

@interface CDLCBuildVersion : CDLoadCommand

@property (nonatomic, readonly) NSString *buildVersionString;
@property (nonatomic, readonly) NSArray *toolStrings;
@end
