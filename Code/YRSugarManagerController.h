//
//  YRSugarManagerController.h
//  SugarManager
//

#import <Cocoa/Cocoa.h>

@interface YRSugarManagerController : NSWindowController {
  NSMutableSet *sugars;
  IBOutlet NSArrayController *sugarsController;
}
- (IBAction)updateSugarsFromCoffeeHouse:(id)sender;
- (IBAction)downloadSugar:(id)sender;
@end
