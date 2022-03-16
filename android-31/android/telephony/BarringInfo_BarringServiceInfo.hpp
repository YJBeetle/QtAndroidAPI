#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./BarringInfo_BarringServiceInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint BarringInfo_BarringServiceInfo::BARRING_TYPE_CONDITIONAL()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_CONDITIONAL"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::BARRING_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_NONE"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::BARRING_TYPE_UNCONDITIONAL()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_UNCONDITIONAL"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::BARRING_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"BARRING_TYPE_UNKNOWN"
		);
	}
	inline JObject BarringInfo_BarringServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.BarringInfo$BarringServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BarringInfo_BarringServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BarringInfo_BarringServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BarringInfo_BarringServiceInfo::getBarringType() const
	{
		return callMethod<jint>(
			"getBarringType",
			"()I"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::getConditionalBarringFactor() const
	{
		return callMethod<jint>(
			"getConditionalBarringFactor",
			"()I"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::getConditionalBarringTimeSeconds() const
	{
		return callMethod<jint>(
			"getConditionalBarringTimeSeconds",
			"()I"
		);
	}
	inline jint BarringInfo_BarringServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BarringInfo_BarringServiceInfo::isBarred() const
	{
		return callMethod<jboolean>(
			"isBarred",
			"()Z"
		);
	}
	inline jboolean BarringInfo_BarringServiceInfo::isConditionallyBarred() const
	{
		return callMethod<jboolean>(
			"isConditionallyBarred",
			"()Z"
		);
	}
	inline void BarringInfo_BarringServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

