//
//  WeiboDetail.h
//  SocialFusion
//
//  Created by He Ruoyun on 11-11-18.
//  Copyright (c) 2011年 Tongji Apple Club. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "DetailInformation.h"


@interface WeiboDetail : DetailInformation

@property (nonatomic, retain) NSString * profileImageURL;
@property (nonatomic, retain) NSString * followersCount;
@property (nonatomic, retain) NSNumber * verified;
@property (nonatomic, retain) NSString * province;
@property (nonatomic, retain) NSDate * createAt;
@property (nonatomic, retain) NSString * friendsCount;
@property (nonatomic, retain) NSString * favouritesCount;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, retain) NSString * domainURL;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSNumber * following;
@property (nonatomic, retain) NSString * selfDescription;
@property (nonatomic, retain) NSString * blogURL;
@property (nonatomic, retain) NSString * gender;
@property (nonatomic, retain) NSString * statusesCount;

@end
