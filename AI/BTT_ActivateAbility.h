// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "../Enums.h"
#include "BTT_ActivateAbility.generated.h"

/**
 * 
 */
UCLASS()
class SOULSLIKEGAME_API UBTT_ActivateAbility : public UBTTaskNode
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Value", meta = (AllowPrivateAccess = "true"))
	FGameplayTagContainer TagContainer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Value", meta = (AllowPrivateAccess = "true"))
	EAIState EndState;

	UBTT_ActivateAbility();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
