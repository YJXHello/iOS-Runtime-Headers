/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface SKSequence : SKAction {
    NSArray *_actions;
    unsigned long _animIndex;
    struct SKCSequence { int (**x1)(); float x2; id x3; boolx4; double x5; double x6; float x7; float x8; double x9; boolx10; boolx11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; int x14; float x15; float x16; float x17; float x18; struct vector<SKCAction *, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_19_1_1; struct SKCAction {} **x_19_1_2; struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_3_2_1; } x_19_1_3; } x19; unsigned long x20; } *_mycaction;
}

+ (id)sequenceWithActions:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end