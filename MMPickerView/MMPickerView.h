//
//  MMPickerView.h
//  MMPickerView
//
//  Created by Madjid Mahdjoubi on 6/5/13.
//  Copyright (c) 2013 GG. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const MMbackgroundColor;
extern NSString * const MMtextColor;
extern NSString * const MMtoolbarColor;
extern NSString * const MMbuttonColor;
extern NSString * const MMfont;
extern NSString * const MMvalueY;
extern NSString * const MMselectedObject;
extern NSString * const MMtoolbarBackgroundImage;

@interface MMPickerView: UIView

+(void)showPickerViewInView:(UIView *)view
  withArrayOfArrayOfStrings:(NSArray *)strings
                withOptions:(NSDictionary *)options
                 completion:(void (^)(NSArray *))completion;

+(void)showPickerViewInView:(UIView *)view
  withArrayOfArrayOfObjects:(NSArray *)objects
                withOptions:(NSDictionary *)options
    objectToStringConverter:(NSString *(^)(id))converter
                 completion:(void (^)(NSArray* objects))completion;

+(void)dismissWithCompletion:(void (^)(NSArray *))completion;

@end
