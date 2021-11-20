// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGBuildableHologram.h"

void AFGBuildableHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}
AFGBuildableHologram::AFGBuildableHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35.0;
	this->mLegs = nullptr;
	this->mUseGradualFoundationRotations = false;
	this->mGridSnapSize = 100.0;
	this->mComplexClearanceComponent = nullptr;
	this->mInstancedGuidelineMeshComponent = nullptr;
	this->mSnappedBuilding = nullptr;
	this->mSnappedClearanceBox = nullptr;
	this->mNeedsValidFloor = true;
	this->mMustSnapToAttachmentPoint = false;
	this->mCanSnapWithAttachmentPoints = true;
	this->mAttachmentPointSnapDistanceThreshold = 500.0;
	this->mCustomizationData.SwatchDesc = nullptr;
	this->mCustomizationData.PatternDesc = nullptr;
	this->mCustomizationData.MaterialDesc = nullptr;
	this->mCustomizationData.OverrideColorData.Metallic = 0.0;
	this->mCustomizationData.OverrideColorData.Roughness = 0.0;
	this->mCustomizationData.PatternRotation = 0;
	this->mCustomizationData.ColorSlot = 0;
	this->mCustomizationData.HasPower = 0;
	this->mDefaultSwatch = nullptr;
	this->mUseBuildClearanceOverlapSnapp = true;
}
void AFGBuildableHologram::BeginPlay(){ }
void AFGBuildableHologram::SetBuildableClass(TSubclassOf<  AFGBuildable > buildableClass){ }
void AFGBuildableHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
bool AFGBuildableHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGBuildableHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGBuildableHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGBuildableHologram::PreHologramPlacement(){ }
void AFGBuildableHologram::PostHologramPlacement(){ }
void AFGBuildableHologram::ScrollRotate(int32 delta, int32 step){ }
void AFGBuildableHologram::AdjustForGround(FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
AActor* AFGBuildableHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
void AFGBuildableHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
bool AFGBuildableHologram::ShouldBuildableBeConsideredForGuidelines( AFGBuildable* buildable) const{ return bool(); }
bool AFGBuildableHologram::AreConnectionsAlignedForGuidelines( UFGConnectionComponent* connection,  UFGConnectionComponent* otherConnection, const FVector& connectionOffset, float allowedAngleDeviation) const{ return bool(); }
bool AFGBuildableHologram::IsClearPathForGuidelines(const FVector& start, const FVector& end, TSet<  AActor* > excludedActors) const{ return bool(); }
void AFGBuildableHologram::SweepForNearbyGuidelines(const FVector& hologramLocation, TArray< FFGHologramGuidelineData >& out_guidelineData, float allowedAngleDeviation) const{ }
FFGHologramGuidelineSnapResult AFGBuildableHologram::SnapHologramLocationToGuidelines(const FVector& hologramLocation){ return FFGHologramGuidelineSnapResult(); }
void AFGBuildableHologram::UpdateGuidelineVisuals(const TArray< FFGHologramGuidelineData >& guidelineData){ }
void AFGBuildableHologram::ClearGuidelineVisuals(){ }
void AFGBuildableHologram::FilterAttachmentPoints(TArray< const FFGAttachmentPoint* >& Points,  AFGBuildable* pBuildable, const FHitResult& HitResult) const{ }
USceneComponent* AFGBuildableHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGBuildableHologram::CheckValidPlacement(){ }
int32 AFGBuildableHologram::GetRotationStep() const{ return int32(); }
void AFGBuildableHologram::SnapToFloor( AFGBuildable* floor, FVector& location, FRotator& rotation){ }
void AFGBuildableHologram::SnapToFoundationSide( AFGBuildableFoundation* foundation, const FVector& localSideNormal, EAxis::Type snapAxis, FVector& location, FRotator& rotation){ }
void AFGBuildableHologram::SnapToWall( AFGBuildableWall* wall,
	    const FVector& aimDirection,
	    const FVector& aimLocation,
	    EAxis::Type snapAxis,
	    const FVector& snapOffsetOnWall,
	    float snapRotationOnWall,
	    FVector& out_location,
	    FRotator& out_rotation){ }
void AFGBuildableHologram::CheckValidFloor(){ }
void AFGBuildableHologram::HandleClearanceSnapping(FVector& newLocation, FRotator& newRotation, const FHitResult& hitResult){ }
void AFGBuildableHologram::SnapToClearanceBox(const UFGClearanceComponent* targetSnapClearanceComponent, FVector& newLocation, FRotator& newRotation){ }
bool AFGBuildableHologram::IsHologramIdenticalToBuildable( AFGBuildable* buildable, const FVector& hologramLocationOffset) const{ return bool(); }
void AFGBuildableHologram::PreConfigureActor( AFGBuildable* inBuildable){ }
void AFGBuildableHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGBuildableHologram::ConfigureBuildEffect( AFGBuildable* inBuildable){ }
void AFGBuildableHologram::SetupClearance( UFGClearanceComponent* clearanceComponent){ }
void AFGBuildableHologram::HandleClearanceOverlap(const FOverlapResult& overlap, const FVector& locationOffset, bool HologramHasSoftClearance){ }
void AFGBuildableHologram::SetMaterial( UMaterialInterface* material){ }
UPrimitiveComponent* AFGBuildableHologram::GetClearanceOverlapCheckComponent() const{ return nullptr; }
void AFGBuildableHologram::SetHologramClearanceTransformAndExtent(const FVector& newRelativeLocation, const FRotator& newRelativeRotation, const FVector& newExtent){ }
void AFGBuildableHologram::SetupFactoryConnectionMesh( UFGFactoryConnectionComponent* connectionComponent){ }
void AFGBuildableHologram::SetupPowerConnectionMesh( UFGPowerConnectionComponent* connectionComponent){ }
void AFGBuildableHologram::SetupPipeConnectionMesh( UFGPipeConnectionComponentBase* connectionComponent){ }
const FFGAttachmentPoint* AFGBuildableHologram::SelectCandidateForAttachment(const TArray< const FFGAttachmentPoint* >& Candidates,  AFGBuildable* pBuildable, const FFGAttachmentPoint& BuildablePoint, const FHitResult& HitResult){ return nullptr; }
void AFGBuildableHologram::CreateAttachmentPointTransform(FTransform& out_transformResult, const FHitResult& HitResult,  AFGBuildable* pBuildable, const FFGAttachmentPoint& BuildablePoint, const FFGAttachmentPoint& LocalPoint){ }
void AFGBuildableHologram::DelayApplyPrimitiveData(){ }
void AFGBuildableHologram::ApplyMeshPrimitiveData(const FFactoryCustomizationData& customizationData){ }
FName AFGBuildableHologram::mInputConnectionMeshTag = FName();
FName AFGBuildableHologram::mOutputConnectionMeshTag = FName();
FName AFGBuildableHologram::mNeutralConnectionMeshTag = FName();
FName AFGBuildableHologram::mPowerConnectionMeshTag = FName();
