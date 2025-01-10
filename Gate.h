// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gate.generated.h"

UCLASS()
class SOULSLIKEGAME_API AGate : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(Category = "Mesh", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Mesh;

	UPROPERTY(Category = "Collision", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* Collision;

public:	
	// Sets default values for this actor's properties
	AGate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
