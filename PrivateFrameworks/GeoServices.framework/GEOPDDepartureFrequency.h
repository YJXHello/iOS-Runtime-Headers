/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {
    unsigned int  _displayDepartureFrequency;
    unsigned int  _earliestDepartureTime;
    struct { 
        unsigned int displayDepartureFrequency : 1; 
        unsigned int earliestDepartureTime : 1; 
        unsigned int latestDepartureTime : 1; 
        unsigned int maxDepartureFrequency : 1; 
        unsigned int minDepartureFrequency : 1; 
        unsigned int isEstimated : 1; 
    }  _has;
    BOOL  _isEstimated;
    unsigned int  _latestDepartureTime;
    unsigned int  _maxDepartureFrequency;
    unsigned int  _minDepartureFrequency;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (nonatomic, readonly) int displayFrequency;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic, readonly) NSDate *firstTimeInFrequency;
@property (nonatomic, readonly) double frequencyForSorting;
@property (nonatomic, readonly) int frequencyType;
@property (nonatomic) BOOL hasDisplayDepartureFrequency;
@property (nonatomic) BOOL hasEarliestDepartureTime;
@property (nonatomic) BOOL hasIsEstimated;
@property (nonatomic) BOOL hasLatestDepartureTime;
@property (nonatomic) BOOL hasMaxDepartureFrequency;
@property (nonatomic) BOOL hasMinDepartureFrequency;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEstimate;
@property (nonatomic) BOOL isEstimated;
@property (nonatomic, readonly) NSDate *lastTimeInFrequency;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic, readonly) int maxFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic, readonly) int minFrequency;
@property (readonly) Class superclass;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)displayDepartureFrequency;
- (int)displayFrequency;
- (unsigned int)earliestDepartureTime;
- (id)firstTimeInFrequency;
- (double)frequencyForSorting;
- (int)frequencyType;
- (BOOL)hasDisplayDepartureFrequency;
- (BOOL)hasEarliestDepartureTime;
- (BOOL)hasIsEstimated;
- (BOOL)hasLatestDepartureTime;
- (BOOL)hasMaxDepartureFrequency;
- (BOOL)hasMinDepartureFrequency;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEstimate;
- (BOOL)isEstimated;
- (BOOL)isValidAtDate:(id)arg1;
- (id)lastTimeInFrequency;
- (unsigned int)latestDepartureTime;
- (unsigned int)maxDepartureFrequency;
- (int)maxFrequency;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minDepartureFrequency;
- (int)minFrequency;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayDepartureFrequency:(unsigned int)arg1;
- (void)setEarliestDepartureTime:(unsigned int)arg1;
- (void)setHasDisplayDepartureFrequency:(BOOL)arg1;
- (void)setHasEarliestDepartureTime:(BOOL)arg1;
- (void)setHasIsEstimated:(BOOL)arg1;
- (void)setHasLatestDepartureTime:(BOOL)arg1;
- (void)setHasMaxDepartureFrequency:(BOOL)arg1;
- (void)setHasMinDepartureFrequency:(BOOL)arg1;
- (void)setIsEstimated:(BOOL)arg1;
- (void)setLatestDepartureTime:(unsigned int)arg1;
- (void)setMaxDepartureFrequency:(unsigned int)arg1;
- (void)setMinDepartureFrequency:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
