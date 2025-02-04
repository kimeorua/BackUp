// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "../Enums.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SOULSLIKEGAME_API AEnemyCharacter : public ABaseCharacter
{
	GENERATED_BODY()

private:
	// 락온 용 콜리전
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LockOnCollision", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* LockOnColliison;

	// 락온 UI
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lock On UI", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* LockOnUI;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponType | Default", meta = (AllowPrivateAccess = "true"))
	EWeaponType Type;

public:
	AEnemyCharacter();

	void WeaponSetting();

	void LockOnUI_On_Off(bool OnOff);

	virtual void GuardBreak() override;

	UFUNCTION(BlueprintCallable)
	void EnemyLockOff();

protected:
	/// <summary>
	/// 게임 시작 시 호출
	/// </summary>
	virtual void BeginPlay() override;
};
