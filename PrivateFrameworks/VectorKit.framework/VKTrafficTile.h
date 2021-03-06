/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficTile : VKVectorTile {
    struct TrafficMeshStyle { 
        int _style[4]; 
    } _builtTrafficStyle;
    NSData *_data;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _dataKey;
    VKTileKeyMap *_dynamicTiles;
    NSMutableArray *_incidents;
    struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > >, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > > > > { struct __hash_table<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, std::__1::__unordered_map_hasher<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, std::__1::hash<vk::TrafficBatchKey>, true>, std::__1::__unordered_map_equal<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, std::__1::equal_to<vk::TrafficBatchKey>, true>, std::__1::allocator<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, std::__1::hash<vk::TrafficBatchKey>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > >, std::__1::equal_to<vk::TrafficBatchKey>, true> > { float x_4_2_1; } x_1_1_4; } x1; } *_pilledTrafficCollection;
    struct unique_ptr<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor> > > { 
        struct __compressed_pair<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor> *, std::__1::default_delete<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor> > > { 
            struct TrafficLayer<ggl::PilledTrafficRibbonDescriptor> {} *__first_; 
        } __ptr_; 
    } _pilledTrafficLayer;
    struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > >, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > > > > { struct __hash_table<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, std::__1::__unordered_map_hasher<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, std::__1::hash<vk::TrafficBatchKey>, true>, std::__1::__unordered_map_equal<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, std::__1::equal_to<vk::TrafficBatchKey>, true>, std::__1::allocator<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> *> { struct __hash_node<std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, std::__1::hash<vk::TrafficBatchKey>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<vk::TrafficBatchKey, std::__1::__hash_value_type<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > >, std::__1::equal_to<vk::TrafficBatchKey>, true> > { float x_4_2_1; } x_1_1_4; } x1; } *_solidTrafficCollection;
    struct unique_ptr<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor> > > { 
        struct __compressed_pair<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor> *, std::__1::default_delete<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor> > > { 
            struct TrafficLayer<ggl::SolidTrafficRibbonDescriptor> {} *__first_; 
        } __ptr_; 
    } _solidTrafficLayer;
    struct FeatureAttributeSet { 
        struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { 
            struct FeatureAttributePair {} *__begin_; 
            struct FeatureAttributePair {} *__end_; 
            struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { 
                struct FeatureAttributePair {} *__first_; 
            } __end_cap_; 
        } _attributes; 
    } _styleAttributes;
    struct TrafficSkeletonTile { 
        struct vector<zilch::TrafficSkeletonTile::Record, std::__1::allocator<zilch::TrafficSkeletonTile::Record> > { 
            struct Record {} *__begin_; 
            struct Record {} *__end_; 
            struct __compressed_pair<zilch::TrafficSkeletonTile::Record *, std::__1::allocator<zilch::TrafficSkeletonTile::Record> > { 
                struct Record {} *__first_; 
            } __end_cap_; 
        } m_records; 
    } _trafficData;
}

@property (nonatomic) const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*dataKey;
@property (nonatomic, readonly) VKTileKeyMap *dynamicTiles;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TrafficLayer<ggl::PilledTrafficRibbonDescriptor>=^^?{vector<vk::PilledTrafficBatch *' */ struct *pilledTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> >=^^{BaseMesh}}}[1^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}[1{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}]I^{TrafficManager<ggl::PilledTrafficRibbonDescriptor>}@} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TrafficLayer<ggl::SolidTrafficRibbonDescriptor>=^^?{vector<vk::SolidTrafficBatch *' */ struct *solidTrafficLayer; /* unknown property attribute:  std::__1::allocator<ggl::TrafficBase::BaseMesh *> >=^^{BaseMesh}}}[2^{RenderState}]{shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >=^{ConstantDataTyped<ggl::Tile::View>}^{__shared_weak_count}}[2{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}]I^{TrafficManager<ggl::SolidTrafficRibbonDescriptor>}@} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<gss::FeatureAttributePair' */ struct *styleAttributes; /* unknown property attribute:  std::__1::allocator<gss::FeatureAttributePair> >=^{FeatureAttributePair}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_buildStartOffset:(float*)arg1 endOffset:(float*)arg2 forLine:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*)arg3 forSkeleton:(const struct Record { unsigned int x1; unsigned int x2; float x3; float x4; long long x5; int x6; float x7; float x8; int x9; }*)arg4 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 forFlow:(const struct Flow { long long x1; float x2; float x3; int x4; }*)arg6 forPoints:(struct Matrix<float, 2, 1> { float x1[2]; }*)arg7;
- (void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2;
- (void)buildSkeletonMap;
- (void)buildTrafficIncidentsWithRoadData:(id)arg1;
- (void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 trafficAccum:(struct TrafficAccum { int x1; struct vector<gm::Matrix<float, 2, 1>, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> {} *x_2_1_1; struct Matrix<float, 2, 1> {} *x_2_1_2; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> {} *x_3_2_1; } x_2_1_3; } x2; unsigned char x3; int x4; int x5; struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > >, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon> > > > > > > {} *x6; struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > >, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> >, std::__1::allocator<std::__1::unique_ptr<vk::SolidTrafficRibbon, std::__1::default_delete<vk::SolidTrafficRibbon> > > > > > > {} *x7; int x8; struct { /* ? */ } *x9; struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; int x11; float x12; }*)arg3 styleSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > { struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct unordered_map<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; bool x3; unsigned char x4; }*)arg4 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg5;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withLoader:(struct Loader { struct unique_ptr<ggl::LoaderImpl, std::__1::default_delete<ggl::LoaderImpl> > { struct __compressed_pair<ggl::LoaderImpl *, std::__1::default_delete<ggl::LoaderImpl> > { struct LoaderImpl {} *x_1_2_1; } x_1_1_1; } x1; }*)arg2 trafficMeshStyle:(const struct TrafficMeshStyle { int x1[4]; }*)arg3;
- (const struct TrafficMeshStyle { int x1[4]; }*)builtTrafficStyle;
- (const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)dataKey;
- (void)dealloc;
- (id)dynamicTiles;
- (void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const struct function<void (const vk::RoadPiece &)>={type=[12C] {}*)arg2;
- (id)incidents;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 data:(id)arg3 styleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device { int (**x1)(); int x2; }*)arg7;
- (struct TrafficLayer<ggl::PilledTrafficRibbonDescriptor> { int (**x1)(); struct vector<vk::PilledTrafficBatch *, std::__1::allocator<vk::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_2_1_1; struct PilledTrafficBatch {} **x_2_1_2; struct __compressed_pair<vk::PilledTrafficBatch **, std::__1::allocator<vk::PilledTrafficBatch *> > { struct PilledTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::OptimizedTraffic::BaseMesh *, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::OptimizedTraffic::BaseMesh **, std::__1::allocator<ggl::OptimizedTraffic::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[1]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct shared_ptr<ggl::RenderState> { struct RenderState {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6[1]; unsigned int x7; struct TrafficManager<ggl::PilledTrafficRibbonDescriptor> {} *x8; id x9; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; int x25; void*x26; in void*x27; void*x28; void*x29; unsigned long long x30; void*x31; void*x32; void*x33; void*x34; void*x35; const void*x36; void*x37; void*x38; void*x39; void*x40; struct x41; void*x42; }*)pilledTrafficLayer;
- (void)setDataKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setupStyleAttributesWithRoadData:(id)arg1;
- (struct TrafficLayer<ggl::SolidTrafficRibbonDescriptor> { int (**x1)(); struct vector<vk::SolidTrafficBatch *, std::__1::allocator<vk::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_2_1_1; struct SolidTrafficBatch {} **x_2_1_2; struct __compressed_pair<vk::SolidTrafficBatch **, std::__1::allocator<vk::SolidTrafficBatch *> > { struct SolidTrafficBatch {} **x_3_2_1; } x_2_1_3; } x2; struct vector<ggl::TrafficBase::BaseMesh *, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_1_1; struct BaseMesh {} **x_3_1_2; struct __compressed_pair<ggl::TrafficBase::BaseMesh **, std::__1::allocator<ggl::TrafficBase::BaseMesh *> > { struct BaseMesh {} **x_3_2_1; } x_3_1_3; } x3; struct RenderState {} *x4[2]; struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct shared_ptr<ggl::RenderState> { struct RenderState {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6[2]; unsigned int x7; struct TrafficManager<ggl::SolidTrafficRibbonDescriptor> {} *x8; id x9; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; short x24; void*x25; void*x26; void*x27; const void*x28; void*x29; void*x30; BOOL x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; in void*x41; double x42; void*x43; int x44; void*x45; in void*x46; void*x47; void*x48; unsigned long long x49; void*x50; void*x51; void*x52; void*x53; void*x54; const void*x55; void*x56; void*x57; void*x58; void*x59; struct x60; void*x61; }*)solidTrafficLayer;
- (struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)styleAttributes;

@end
