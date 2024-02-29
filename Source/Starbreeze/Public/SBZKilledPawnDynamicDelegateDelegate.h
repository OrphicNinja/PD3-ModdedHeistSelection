#pragma once
#include "CoreMinimal.h"
#include "SBZKilledPawnDynamicDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZKilledPawnDynamicDelegate, APawn*, DeadPawn);

