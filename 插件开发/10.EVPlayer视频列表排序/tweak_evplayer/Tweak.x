

@interface CourseViewController : UIViewController

@property(strong, nonatomic) NSMutableArray *course_array;

@end

@interface MItem : NSObject

@property(copy, nonatomic) NSString *movie_name;

@end

%hook CourseViewController

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 {

    [self.course_array sortUsingComparator:^NSComparisonResult(MItem *x, MItem *y) {
        return [x.movie_name compare:y.movie_name];
    }];
    return %orig;
}

%end

