#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UiccPortInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject UiccPortInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.UiccPortInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString UiccPortInfo::ICCID_REDACTED()
	{
		return getStaticObjectField(
			"android.telephony.UiccPortInfo",
			"ICCID_REDACTED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UiccPortInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UiccPortInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString UiccPortInfo::getIccId() const
	{
		return callObjectMethod(
			"getIccId",
			"()Ljava/lang/String;"
		);
	}
	inline jint UiccPortInfo::getLogicalSlotIndex() const
	{
		return callMethod<jint>(
			"getLogicalSlotIndex",
			"()I"
		);
	}
	inline jint UiccPortInfo::getPortIndex() const
	{
		return callMethod<jint>(
			"getPortIndex",
			"()I"
		);
	}
	inline jint UiccPortInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean UiccPortInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline JString UiccPortInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UiccPortInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
