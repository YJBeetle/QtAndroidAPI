#pragma once

#include "../os/Parcel.def.hpp"
#include "./BarringInfo_BarringServiceInfo.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BarringInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint BarringInfo::BARRING_SERVICE_TYPE_CS_FALLBACK()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_FALLBACK"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_CS_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_SERVICE"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_CS_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_CS_VOICE"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_EMERGENCY"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_MMTEL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MMTEL_VIDEO"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_MMTEL_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MMTEL_VOICE"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_MO_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MO_DATA"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_MO_SIGNALLING()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_MO_SIGNALLING"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_PS_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_PS_SERVICE"
		);
	}
	inline jint BarringInfo::BARRING_SERVICE_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.BarringInfo",
			"BARRING_SERVICE_TYPE_SMS"
		);
	}
	inline JObject BarringInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.BarringInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BarringInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BarringInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::BarringInfo_BarringServiceInfo BarringInfo::getBarringServiceInfo(jint arg0) const
	{
		return callObjectMethod(
			"getBarringServiceInfo",
			"(I)Landroid/telephony/BarringInfo$BarringServiceInfo;",
			arg0
		);
	}
	inline jint BarringInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BarringInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BarringInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

