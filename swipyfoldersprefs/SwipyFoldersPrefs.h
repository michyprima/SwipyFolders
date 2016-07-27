#import "PreferenceHeaders/PSListController.h"
#import "PreferenceHeaders/PSSpecifier.h"
#import "PreferenceHeaders/PSListItemsController.h"
#import "PreferenceHeaders/PSTableCell.h"
//This needs https://github.com/nst/iOS-Runtime-Headers/tree/master/PrivateFrameworks in the $THEOS/sdks/iPhoneOSXXX.sdk/System/Library/PrivateFrameworks


@interface SwipyFoldersPrefs : PSListController
@end

@interface UITableViewLabel : UILabel 
@end

@interface NSArray(Private)
- (id)specifierForID:(id)id;
@end

@interface PSListItemsController (tableView)
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)listItemSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)itemsFromParent;
@end

@interface SFListItemsController : PSListItemsController
@end