//
//  FWKDBManager.h
//  nickeltracker
//
//  Created by Edmundo Fuentes on 16/5/14.
//  Copyright (c) 2014 FuentesWorks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FWKDBManager : NSObject
{
    NSString *databasePath;
}

+(FWKDBManager*)getSharedInstance;
-(BOOL)createDB;
-(BOOL) saveData:
@end
