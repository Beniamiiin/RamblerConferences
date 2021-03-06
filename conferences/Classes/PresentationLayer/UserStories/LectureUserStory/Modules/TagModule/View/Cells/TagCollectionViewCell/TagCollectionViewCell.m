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

#import "TagCollectionViewCell.h"
#import "TagCollectionViewCellObject.h"
#import "TagCellDelegate.h"
#import <PureLayout/PureLayout.h>

const CGFloat kRightSpace = 10;
const CGFloat kButtonWidth = 10;
const CGFloat kRightSpaceWithButton = 22;

NSString *const kDeleteTagButtonImageName = @"delete-tag-icon";

@interface TagCollectionViewCell ()

@property (nonatomic, strong) TagCollectionViewCellObject *cellObject;
@property (nonatomic, strong) UIButton *removeButton;

@end

@implementation TagCollectionViewCell

- (BOOL)shouldUpdateCellWithObject:(TagCollectionViewCellObject *)object {

    if ([self.cellObject isEqual:object]) {
        return NO;
    }

    self.cellObject = object;
    self.tagLabel.text = object.tagName;

    if (self.cellObject.enableRemoveButton) {
        [self createRemoveButton];
    }
    else {
        [self deleteRemoveButton];
    }

    return YES;
}

- (void)createRemoveButton {
    
    if (self.removeButton) {
        return;
    }
    
    self.removeButton = [UIButton buttonWithType:UIButtonTypeCustom];
    UIImage *image = [UIImage imageNamed:kDeleteTagButtonImageName];
    [self.removeButton setImage:image
                       forState:UIControlStateNormal];

    [self.removeButton addTarget:self
                          action:@selector(didTapRemoveButton:)
                forControlEvents:UIControlEventTouchUpInside];

    self.removeButton.translatesAutoresizingMaskIntoConstraints = NO;
    [self addSubview:self.removeButton];

    // Constraints
    [self.removeButton autoPinEdge:ALEdgeTrailing
                            toEdge:ALEdgeTrailing
                            ofView:self
                        withOffset:-kRightSpace];

    [self.removeButton autoSetDimension:ALDimensionWidth
                                 toSize:kButtonWidth];

    self.trailingTagLabelConstraint.constant = kRightSpaceWithButton;
}

- (void)deleteRemoveButton {
    
    if (!self.removeButton) {
        return;
    }
    
    [self.removeButton removeFromSuperview];
    self.removeButton = nil;
    self.trailingTagLabelConstraint.constant = kRightSpace;
}

- (IBAction)didTapRemoveButton:(id)sender {
    [self.cellObject.delegate didTapRemoveTag:self.cellObject];
}

@end