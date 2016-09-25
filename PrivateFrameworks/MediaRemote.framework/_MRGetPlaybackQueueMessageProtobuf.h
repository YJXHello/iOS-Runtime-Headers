/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGetPlaybackQueueMessageProtobuf : PBCodable <NSCopying> {
    double  _artworkHeight;
    double  _artworkWidth;
    struct { 
        unsigned int artworkHeight : 1; 
        unsigned int artworkWidth : 1; 
        unsigned int length : 1; 
        unsigned int location : 1; 
        unsigned int includeMetadata : 1; 
    }  _has;
    BOOL  _includeMetadata;
    int  _length;
    int  _location;
}

@property (nonatomic) double artworkHeight;
@property (nonatomic) double artworkWidth;
@property (nonatomic) BOOL hasArtworkHeight;
@property (nonatomic) BOOL hasArtworkWidth;
@property (nonatomic) BOOL hasIncludeMetadata;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL includeMetadata;
@property (nonatomic) int length;
@property (nonatomic) int location;

- (double)artworkHeight;
- (double)artworkWidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkHeight;
- (BOOL)hasArtworkWidth;
- (BOOL)hasIncludeMetadata;
- (BOOL)hasLength;
- (BOOL)hasLocation;
- (unsigned int)hash;
- (BOOL)includeMetadata;
- (BOOL)isEqual:(id)arg1;
- (int)length;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkHeight:(double)arg1;
- (void)setArtworkWidth:(double)arg1;
- (void)setHasArtworkHeight:(BOOL)arg1;
- (void)setHasArtworkWidth:(BOOL)arg1;
- (void)setHasIncludeMetadata:(BOOL)arg1;
- (void)setHasLength:(BOOL)arg1;
- (void)setHasLocation:(BOOL)arg1;
- (void)setIncludeMetadata:(BOOL)arg1;
- (void)setLength:(int)arg1;
- (void)setLocation:(int)arg1;
- (void)writeTo:(id)arg1;

@end