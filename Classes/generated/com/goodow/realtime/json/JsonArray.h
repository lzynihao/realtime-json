//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-json/src/main/java/com/goodow/realtime/json/JsonArray.java
//
//  Created by retechretech.
//

#ifndef _GDJsonArray_H_
#define _GDJsonArray_H_

@class GDJsonTypeEnum;
@protocol GDJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/json/JsonElement.h"

@protocol GDJsonArray < GDJsonElement, NSObject, JavaObject >
- (id)getWithInt:(int)index;
- (id<GDJsonArray>)getArray:(int)index;
- (BOOL)getBoolean:(int)index;
- (double)getNumber:(int)index;
- (id<GDJsonObject>)getObject:(int)index;
- (NSString *)getString:(int)index;
- (GDJsonTypeEnum *)getType:(int)index;
- (int)indexOfObject:(id)value;
- (id<GDJsonArray>)insert:(int)index value:(id)value;
- (int)count;
- (id<GDJsonArray>)pushBoolean:(BOOL)bool_;
- (id<GDJsonArray>)pushNumber:(double)number;
- (id<GDJsonArray>)push:(id)value;
- (id<GDJsonArray>)remove:(int)index;
@end

#define ComGoodowRealtimeJsonJsonArray GDJsonArray

#endif // _GDJsonArray_H_