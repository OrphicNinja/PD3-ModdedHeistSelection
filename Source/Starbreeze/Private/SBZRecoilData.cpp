#include "SBZRecoilData.h"

USBZRecoilData::USBZRecoilData() {
    this->DisplacementListMultiplier = 1.00f;
    this->GunKickBackAlpha = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZRecoilData::StaticClass();
}

void USBZRecoilData::GetGunKickVerticalTop(float& OutMin, float& OutMax) const {
}

void USBZRecoilData::GetGunKickVerticalBottom(float& OutMin, float& OutMax) const {
}

void USBZRecoilData::GetGunKickHorizontalRight(float& OutMin, float& OutMax) const {
}

void USBZRecoilData::GetGunKickHorizontalLeft(float& OutMin, float& OutMax) const {
}


