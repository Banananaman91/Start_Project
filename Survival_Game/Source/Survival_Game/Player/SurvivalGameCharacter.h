// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SurvivalGameCharacter.generated.h"

//Used for equipping items to the player
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquippedItemChanged, const EEquippableSlot, slot, const UEquippableItems*, item);

USTRUCT()
struct FInteractionData {
	GENERATED_BODY()
	
	FInteractionData() 
	{
		viewedInteractionComponent = nullptr;
		lastInteractionCheckTime = 0.0f;
		bInteractHeld = false;
	}

	UPROPERTY()
		class UInteractionComponent* viewedInteractionComponent;
	UPROPERTY()
		float lastInteractionCheckTime;
	UPROPERTY()
		bool bInteractHeld;
};

UCLASS()
class SURVIVAL_GAME_API ASurvivalGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASurvivalGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float val);
	void MoveRight(float val);
	void LookUp(float val);
	void Turn(float val);
	void StartCrouching();
	void StopCrouching();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
		class UCameraComponent* camera;

	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* helmetMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* chestMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* legsMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* vestMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* feetMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* handsMesh;
	UPROPERTY(EditAnywhere, Category = "Components")
		class USkeletalMeshComponent* backpackMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
		float sprintSpeed;

	UPROPERTY()
		float walkSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
		bool bSprinting;

	bool CanSprint() const;

	void StartSprinting();
	void StopSprinting();

	void SetSprinting(const bool bNewSprinting);


	// Creating the methods and variables for the player to be able to interact with an object
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
		float interactionCheckFrequency;
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
		float interactionCheckDistance;
	UPROPERTY()
		FInteractionData interactionData;

	FTimerHandle timerHandle_Interact;

	void PerformInteractionCheck();
	void CouldNotFindInteraction();
	void FoundNewInteraction(UInteractionComponent* interactable);
	void BeginInteract();
	void EndInteract();
	void Interact();

	FORCEINLINE class UInteractionComponent* GetInteractable() const {
		return interactionData.viewedInteractionComponent;
	}

public:
	bool IsInteracting() const;
	float GetRemainingInteractionTime() const;

	/////////////////////////////////////////////////////////////////////////////////////////////////
	///////////// Variables and Methods for the looting, inventory and equipping system /////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UInventoryComponent* playerInventory;

	UFUNCTION(BlueprintCallable, Category = "Items")
		void UseItem(class UItem* item);

	UFUNCTION(BlueprintCallable, Category = "Items")
		void DropItem(class UItem* item, const int32 quantity);

	UPROPERTY(EditDefaultsOnly, Category = "Items")
		TSubclassOf<class APickup> pickupClass;

	////////////////////////////////////////////////////////////
	////////// Equippable items Vars and Functions /////////////
	////////////////////////////////////////////////////////////

	UPROPERTY(BlueprintReadOnly, Category = "Mesh")
		TMap<EEquippableSlot, USkeletalMeshComponent*> playerMeshes;

	UPROPERTY(BlueprintReadOnly, Category = "Mesh")
		TMap<EEquippableSlot, USkeletalMesh*> nakedMeshes;

	bool EquipItem(class UEquippableItems* item);
	bool UnEquipItem(class UEquippableItems* item);

	void EquipGear(class UGearItems* gear);
	void UnEquipGear(const EEquippableSlot slot);

	UFUNCTION(BlueprintPure)
		class USkeletalMeshComponent* GetSlotSkeletalMeshComponent(const EEquippableSlot slot);

	UFUNCTION(BlueprintPure)
		FORCEINLINE TMap<EEquippableSlot, UEquippableItems*> GetEquippedItems() const
		{
			return equippedItems;
		};

	UPROPERTY(BlueprintAssignable, Category = "Items")
		FOnEquippedItemChanged OnEquippedItemChanged;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Items")
		TMap<EEquippableSlot, UEquippableItems*> equippedItems;

	/// <summary>
	/// Notification
	/// </summary>
	virtual void Restart() override;
};
