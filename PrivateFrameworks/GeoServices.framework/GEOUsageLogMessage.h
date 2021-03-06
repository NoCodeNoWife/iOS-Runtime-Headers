/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageLogMessage : PBCodable <NSCopying> {
    GEOLongSessionUsageLogMessage *_longSessionUsageLogMessage;
    GEONoSessionUsageLogMessage *_noSessionUsageLogMessage;
    GEOShortSessionUsageLogMessage *_shortSessionUsageLogMessage;
}

@property (nonatomic, readonly) BOOL hasLongSessionUsageLogMessage;
@property (nonatomic, readonly) BOOL hasNoSessionUsageLogMessage;
@property (nonatomic, readonly) BOOL hasShortSessionUsageLogMessage;
@property (nonatomic, retain) GEOLongSessionUsageLogMessage *longSessionUsageLogMessage;
@property (nonatomic, retain) GEONoSessionUsageLogMessage *noSessionUsageLogMessage;
@property (nonatomic, retain) GEOShortSessionUsageLogMessage *shortSessionUsageLogMessage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLongSessionUsageLogMessage;
- (BOOL)hasNoSessionUsageLogMessage;
- (BOOL)hasShortSessionUsageLogMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)longSessionUsageLogMessage;
- (void)mergeFrom:(id)arg1;
- (id)noSessionUsageLogMessage;
- (BOOL)readFrom:(id)arg1;
- (void)setLongSessionUsageLogMessage:(id)arg1;
- (void)setNoSessionUsageLogMessage:(id)arg1;
- (void)setShortSessionUsageLogMessage:(id)arg1;
- (id)shortSessionUsageLogMessage;
- (void)writeTo:(id)arg1;

@end
