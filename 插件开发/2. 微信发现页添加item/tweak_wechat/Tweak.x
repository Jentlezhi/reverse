
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FindFriendEntryViewController : UITableViewController

- (long long)numberOfSectionsInTableView:(id)arg1;

@end

#define ZJFile(path) @"/Library/PreferenceLoader/Preferences/jentle_wechat/" #path


%hook FindFriendEntryViewController

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2{

	if (arg2 == [self numberOfSectionsInTableView:arg1] - 1)
	{
		return 2;
	}
	return %orig;
}
- (long long)numberOfSectionsInTableView:(id)arg1{
	return %orig + 1;
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2{
   
   if ([arg2 section] != [self numberOfSectionsInTableView:arg1] - 1)
	{
		return %orig;
	}

	UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
    cell.textLabel.text = [arg2 row] == 0 ? @"自动抢红包" : @"退出微信";
    cell.backgroundColor = [UIColor whiteColor];
    cell.imageView.image = [UIImage imageWithContentsOfFile:ZJFile(skull.png)];
	return cell;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 {

	if ([arg2 section] != [self numberOfSectionsInTableView:arg1] - 1)
	{
		%orig;
		return;
	}
	[arg1 deselectRowAtIndexPath:arg2 animated:YES];
	if([arg2 row] == 1){
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:@"确定要退出微信吗？" preferredStyle:UIAlertControllerStyleActionSheet];
    [alertController addAction: [UIAlertAction actionWithTitle:@"确定" style: UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        abort();
    }]];
    [alertController addAction: [UIAlertAction actionWithTitle: @"取消" style: UIAlertActionStyleCancel handler:nil]];
    [self presentViewController: alertController animated: YES completion: nil];
   }

}


%end

