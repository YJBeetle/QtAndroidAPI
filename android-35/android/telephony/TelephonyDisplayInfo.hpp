#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TelephonyDisplayInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject TelephonyDisplayInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyDisplayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_LTE_CA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_LTE_CA"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NONE"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_ADVANCED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_ADVANCED"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_NSA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_NSA"
		);
	}
	inline jint TelephonyDisplayInfo::OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyDisplayInfo",
			"OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TelephonyDisplayInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TelephonyDisplayInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TelephonyDisplayInfo::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint TelephonyDisplayInfo::getOverrideNetworkType() const
	{
		return callMethod<jint>(
			"getOverrideNetworkType",
			"()I"
		);
	}
	inline jint TelephonyDisplayInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TelephonyDisplayInfo::isRoaming() const
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	inline JString TelephonyDisplayInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TelephonyDisplayInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
