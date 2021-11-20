// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocomotiveMovementComponent.h"

UFGLocomotiveMovementComponent::UFGLocomotiveMovementComponent() : Super() {
	this->mRawReverserInput = 0;
	this->mRawSteeringInput = 0;
	this->mRawThrottleInput = 0.0;
	this->mRawDynamicBrakeInput = 0.0;
	this->mRawAirBrakeInput = 0.0;
	this->mRawHornInput = false;
	this->mThrottleInputRate.RiseRate = 5.0;
	this->mThrottleInputRate.FallRate = 5.0;
	this->mDynamicBrakeInputRate.RiseRate = 5.0;
	this->mDynamicBrakeInputRate.FallRate = 5.0;
	this->mDynamicBrakeVelocityThreshold = 0.0;
	this->mAirBrakeInputRate.RiseRate = 5.0;
	this->mAirBrakeInputRate.FallRate = 5.0;
	this->mReverserInput = 0;
	this->mSteeringInput = 0.0;
	this->mThrottleInput = 0.0;
	this->mAirBrakeInput = 0.0;
	this->mDynamicBrakeInput = 0.0;
	this->mHornInput = false;
	this->mTractiveEffortCurve.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mTractiveEffortCurve.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mTractiveEffortCurve.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mTractiveEffortCurve.ExternalCurve = nullptr;
	this->mDynamicBrakingEffortCurve.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mDynamicBrakingEffortCurve.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mDynamicBrakingEffortCurve.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mDynamicBrakingEffortCurve.ExternalCurve = nullptr;
	this->mRegenerativePowerCurve.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mRegenerativePowerCurve.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mRegenerativePowerCurve.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mRegenerativePowerCurve.ExternalCurve = nullptr;
	this->PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryComponentTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryComponentTick.bTickEvenWhenPaused = false;
	this->PrimaryComponentTick.bCanEverTick = true;
	this->PrimaryComponentTick.bStartWithTickEnabled = true;
	this->PrimaryComponentTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryComponentTick.TickInterval = 0.0;
}
void UFGLocomotiveMovementComponent::TickComponent(float dt, enum ELevelTick tickType, FActorComponentTickFunction *thisTickFunction){ }
void UFGLocomotiveMovementComponent::ComputeConstants(){ }
void UFGLocomotiveMovementComponent::TickSlaveInput(float dt, const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::TickTractionAndFriction(float dt){ }
void UFGLocomotiveMovementComponent::TickMasterInput(float dt){ }
void UFGLocomotiveMovementComponent::SetReverserInput(int32 reverser){ }
void UFGLocomotiveMovementComponent::SetThrottleInput(float throttle){ }
void UFGLocomotiveMovementComponent::SetSteeringInput(int32 steering){ }
void UFGLocomotiveMovementComponent::SetAirBrakeInput(float brake){ }
void UFGLocomotiveMovementComponent::SetEmergencyBrake(){ }
void UFGLocomotiveMovementComponent::SetHornInput(bool horn){ }
int32 UFGLocomotiveMovementComponent::GetSteering(bool clear){ return int32(); }
float UFGLocomotiveMovementComponent::GetRegenerativePowerFactor() const{ return float(); }
float UFGLocomotiveMovementComponent::CalcDynamicBrakeInput(){ return float(); }
float UFGLocomotiveMovementComponent::CalcAirBrakeInput(){ return float(); }
float UFGLocomotiveMovementComponent::CalcThrottleInput(){ return float(); }
void UFGLocomotiveMovementComponent::ClearInput(){ }
void UFGLocomotiveMovementComponent::UpdateState(float dt, const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::ServerUpdateState_Implementation(int32 inReverserInput, int32 inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput, bool inHornInput){ }
bool UFGLocomotiveMovementComponent::ServerUpdateState_Validate(int32 inReverserInput, int32 inSteeringInput, float inThrottleInput, float inDynamicBrakeInput, float inAirBrakeInput, bool inHornInput){ return bool(); }
void UFGLocomotiveMovementComponent::UseReplicatedState(){ }
void UFGLocomotiveMovementComponent::UseMultipleUnitMasterState(const UFGLocomotiveMovementComponent* master){ }
void UFGLocomotiveMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGLocomotiveMovementComponent, mReplicatedState);
}
