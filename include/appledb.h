//
//  appledb.h
//  libgrabkernel2
//
//  Created by Dhinak G on 3/4/24.
//

#ifndef appledb_h
#define appledb_h

#import <Foundation/Foundation.h>

NSString *getFirmwareURLFor(NSString *osStr, NSString *build, NSString *modelIdentifier, bool *isOTA);
NSString *getFirmwareURL(bool *isOTA);

#endif /* appledb_h */
