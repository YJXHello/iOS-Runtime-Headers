/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying> {
    float  _approachCurvature;
    float  _approachEnd;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _approachFeedback;
    float  _approachStart;
    float  _approachVolumeMax;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _thresholdFeedback;
}

@property (nonatomic) float approachCurvature;
@property (nonatomic) float approachEnd;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback;
@property (nonatomic) float approachStart;
@property (nonatomic) float approachVolumeMax;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback;

- (void).cxx_destruct;
- (float)approachCurvature;
- (float)approachEnd;
- (id)approachFeedback;
- (float)approachStart;
- (float)approachVolumeMax;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setApproachCurvature:(float)arg1;
- (void)setApproachEnd:(float)arg1;
- (void)setApproachFeedback:(id)arg1;
- (void)setApproachStart:(float)arg1;
- (void)setApproachVolumeMax:(float)arg1;
- (void)setThresholdFeedback:(id)arg1;
- (id)thresholdFeedback;

@end
