//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-json/src/main/java/com/goodow/realtime/json/JsonFactory.java
//
//  Created by retechretech.
//

#include "com/goodow/realtime/json/JsonArray.h"
#include "com/goodow/realtime/json/JsonFactory.h"
#include "com/goodow/realtime/json/JsonObject.h"


@interface GDJsonFactory : NSObject
@end

@implementation GDJsonFactory

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "createArray", NULL, "LGDJsonArray", 0x401, NULL },
    { "createObject", NULL, "LGDJsonObject", 0x401, NULL },
    { "parseWithNSString:", NULL, "TT", 0x401, NULL },
  };
  static J2ObjcClassInfo _GDJsonFactory = { "JsonFactory", "com.goodow.realtime.json", NULL, 0x201, 3, methods, 0, NULL, 0, NULL};
  return &_GDJsonFactory;
}

@end