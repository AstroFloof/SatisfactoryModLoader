// This file has been automatically generated by the Unreal Header Implementation tool

#include "Replication/FGReplicationDetailActor_Storage.h"

AFGReplicationDetailActor_Storage::AFGReplicationDetailActor_Storage() : Super() {
	this->mStorageInventory = nullptr;
}
void AFGReplicationDetailActor_Storage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGReplicationDetailActor_Storage, mStorageInventory);
}
void AFGReplicationDetailActor_Storage::InitReplicationDetailActor( AFGBuildable* owningActor){ }
void AFGReplicationDetailActor_Storage::RemoveDetailActorFromOwner(){ }
void AFGReplicationDetailActor_Storage::FlushReplicationActorStateToOwner(){ }
bool AFGReplicationDetailActor_Storage::HasCompletedInitialReplication() const{ return bool(); }
