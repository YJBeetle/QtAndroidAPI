#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentity.def.hpp"
#include "./CellSignalStrength.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CellInfo::CONNECTION_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_NONE"
		);
	}
	inline jint CellInfo::CONNECTION_PRIMARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_PRIMARY_SERVING"
		);
	}
	inline jint CellInfo::CONNECTION_SECONDARY_SERVING()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_SECONDARY_SERVING"
		);
	}
	inline jint CellInfo::CONNECTION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_UNKNOWN"
		);
	}
	inline JObject CellInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CellInfo::UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.CellInfo",
			"UNAVAILABLE"
		);
	}
	inline jlong CellInfo::UNAVAILABLE_LONG()
	{
		return getStaticField<jlong>(
			"android.telephony.CellInfo",
			"UNAVAILABLE_LONG"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellInfo::getCellConnectionStatus() const
	{
		return callMethod<jint>(
			"getCellConnectionStatus",
			"()I"
		);
	}
	inline android::telephony::CellIdentity CellInfo::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	inline android::telephony::CellSignalStrength CellInfo::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	inline jlong CellInfo::getTimeStamp() const
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
	inline jlong CellInfo::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline jint CellInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean CellInfo::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	inline JString CellInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

