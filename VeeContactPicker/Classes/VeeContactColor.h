//
//  VeeContactColor.h
//  VeeContactPicker
//
//  Created by Andrea Cipriani on 14/03/16.
//  Copyright © 2016 Code Atlas SRL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VeeContactProt.h"

//When a veeContact doesn't have an image show its initials with a circle. The background color of the circle should always be the same for a contact and it's generated by this class

@interface VeeContactColor : NSObject

@property (nonatomic,strong) NSArray<UIColor*>* veecontactColorsPalette; //If you don't set a color palette, only lightGrayColor will be used

- (UIColor*)colorForVeeContact:(id<VeeContactProt>)veeContact;
//The color will be chosen from the color palette by the djb2 algorithm, that is used to generate an unsigned long hash from a given string with the composite name of the veeContact

@end
