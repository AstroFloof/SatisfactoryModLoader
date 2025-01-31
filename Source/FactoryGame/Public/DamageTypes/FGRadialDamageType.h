// Copyright 2016-2021 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"

#include "DamageTypes/FGDamageType.h"
#include "Engine/EngineTypes.h"

#include "FGRadialDamageType.generated.h"

/**
 *
 */
UCLASS()
class FACTORYGAME_API UFGRadialDamageType : public UFGDamageType
{
	GENERATED_BODY()
public:
	virtual void ProcessDamage( const FHitResult& hitResult, AController* instigator, AActor* damageCauser, float damageAmount, TArray<AActor*> ignoredActors ) override;

	/** radius in which the damage of this type will be dealt */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "DamageType" )
	float mDamageRadius = 100;

	/** Should this damage remove foliage when applied? */
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "DamageType" )
	bool mShouldRemoveFoliage = false;
};
