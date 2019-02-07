// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/PatrollingGuard.h"
#include "Public/PatrolComponent.h"

APatrollingGuard::APatrollingGuard()
{
	
}


void APatrollingGuard::BeginPlay()
{
	Super::BeginPlay();


}


TArray<AActor*> APatrollingGuard::GetPatrolPoints()
{
	return PatrolPointsCPP;
}
