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

#import <Nimbus/NimbusCollections.h>

@class EventPlainObject;

/**
 @author Egor Tolstoy
 
 CellObject for AnnouncementGallery module event cell
 */
@interface AnnouncementGalleryEventCollectionViewCellObject : NSObject <NICollectionViewNibCellObject>

@property (nonatomic, strong, readonly) EventPlainObject *event;
@property (nonatomic, strong, readonly) NSString *eventTitle;
@property (nonatomic, strong, readonly) NSString *eventDescription;
@property (nonatomic, strong, readonly) NSString *eventDate;
@property (nonatomic, strong, readonly) NSString *eventTime;
@property (nonatomic, strong, readonly) NSString *eventImageUrl;
@property (nonatomic, strong, readonly) UIColor *primaryColor;

+ (instancetype)objectWithEvent:(EventPlainObject *)event
                   primaryColor:(UIColor *)primaryColor
                      eventDate:(NSString *)eventDate
                      eventTime:(NSString *)eventTime;

@end