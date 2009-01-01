//
//  YRSugarRepresentation.h
//  SugarManager
//

#import <Cocoa/Cocoa.h>

@interface YRSugarRepresentation : NSObject {
  NSString *name;
  NSString *author;
  NSString *identifier;
  NSURL *downloadURL;
  NSURL *homeURL;
}

@property (readwrite, copy) NSString *name;
@property (readwrite, copy) NSString *author;
@property (readwrite, copy) NSString *identifier;
@property (readwrite, copy) NSURL *downloadURL;
@property (readwrite, copy) NSURL *homeURL;

+ (id)sugarWithName:(NSString *)aName
             author:(NSString *)anAuthor
         identifier:(NSString *)anIdentifier
        downloadURL:(NSURL *)aDownloadURL
            homeURL:(NSURL *)aHomeURL;

@end