// Copyright (c) 2015 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

#import "AnnouncementGalleryViewInput.h"
#import "AnnouncementGalleryDataDisplayManager.h"

@protocol AnnouncementGalleryViewOutput;
@class AnnouncementGalleryBackgroundColorAnimator;
@class AnnouncementGalleryDataDisplayManager;
@class AnnouncementGalleryCollectionViewFlowLayout;

@interface AnnouncementGalleryViewController : UIViewController <AnnouncementGalleryViewInput, AnnouncementGalleryDataDisplayManagerDelegate>

#pragma mark - Interface

@property (nonatomic, weak) IBOutlet UIView *backgroundAdditionalView;
@property (nonatomic, weak) IBOutlet UICollectionView *collectionView;

#pragma mark - Dependencies

@property (nonatomic, strong) id<AnnouncementGalleryViewOutput> output;
@property (nonatomic, strong) AnnouncementGalleryDataDisplayManager *dataDisplayManager;
@property (nonatomic, strong) AnnouncementGalleryBackgroundColorAnimator *backgroundColorAnimator;
@property (nonatomic, strong) AnnouncementGalleryCollectionViewFlowLayout *collectionViewFlowLayout;

@end