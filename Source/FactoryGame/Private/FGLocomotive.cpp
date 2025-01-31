// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocomotive.h"
#include "FGLocomotiveMovementComponent.h"
#include "FGPowerConnectionComponent.h"
#include "FGPowerInfoComponent.h"

void AFGLocomotive::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGLocomotive, mPowerInfo);
	DOREPLIFETIME(AFGLocomotive, mHasPower);
}
AFGLocomotive::AFGLocomotive() : Super() {
	this->mPowerConsumption = FFloatInterval(0.0, 15.0);
	this->mSlidingShoe = CreateDefaultSubobject<UFGPowerConnectionComponent>(TEXT("SlidingShoe"));
	this->mPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("powerInfo"));
	this->mHasPower = false;
	this->mVehicleMovement = CreateDefaultSubobject<UFGLocomotiveMovementComponent>(TEXT("MovementComp"));
}
void AFGLocomotive::BeginPlay(){ }
void AFGLocomotive::Tick(float dt){ }
bool AFGLocomotive::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGLocomotive::DriverLeave(bool keepDriving){ return bool(); }
void AFGLocomotive::UpdatePower(){ }
EMultipleUnitControl AFGLocomotive::GetMultipleUnitRole() const{ return EMultipleUnitControl(); }
bool AFGLocomotive::CanSetTrainMultipleUnitMaster() const{ return bool(); }
bool AFGLocomotive::SetMultipleUnitControlMaster(bool force){ return bool(); }
void AFGLocomotive::ClearMultipleUnitControlMaster(){ }
void AFGLocomotive::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGLocomotive::GiveHumanDriverControl(){ }
void AFGLocomotive::SetPowerConsumption(float pct){ }
void AFGLocomotive::SetPowerRegeneration(float pct){ }
FName AFGLocomotive::VehicleMovementComponentName = FName();
