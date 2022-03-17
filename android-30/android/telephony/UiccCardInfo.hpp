#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UiccCardInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject UiccCardInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.UiccCardInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UiccCardInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UiccCardInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint UiccCardInfo::getCardId() const
	{
		return callMethod<jint>(
			"getCardId",
			"()I"
		);
	}
	inline JString UiccCardInfo::getEid() const
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		);
	}
	inline JString UiccCardInfo::getIccId() const
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	inline jint UiccCardInfo::getSlotIndex() const
	{
		return callMethod<jint>(
			"getSlotIndex",
			"()I"
		);
	}
	inline jint UiccCardInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean UiccCardInfo::isEuicc() const
	{
		return callMethod<jboolean>(
			"isEuicc",
			"()Z"
		);
	}
	inline jboolean UiccCardInfo::isRemovable() const
	{
		return callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	inline JString UiccCardInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UiccCardInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
