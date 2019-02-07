// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolComponent.generated.h"

/*A "Route card" to help AI choose their next waypoint */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S5_TESTINGGROUNDS_API UPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPatrolComponent();

	
	TArray<AActor*> GetPatrolPoints() const;

	

protected:
	
private:	
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
		TArray<AActor*> PatrolPoints;

	
};
