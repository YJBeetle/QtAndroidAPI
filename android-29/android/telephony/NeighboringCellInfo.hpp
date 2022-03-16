#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./NeighboringCellInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject NeighboringCellInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NeighboringCellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NeighboringCellInfo::UNKNOWN_CID()
	{
		return getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_CID"
		);
	}
	inline jint NeighboringCellInfo::UNKNOWN_RSSI()
	{
		return getStaticField<jint>(
			"android.telephony.NeighboringCellInfo",
			"UNKNOWN_RSSI"
		);
	}
	
	// Constructors
	inline NeighboringCellInfo::NeighboringCellInfo()
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"()V"
		) {}
	inline NeighboringCellInfo::NeighboringCellInfo(android::os::Parcel arg0)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline NeighboringCellInfo::NeighboringCellInfo(jint arg0, jint arg1)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(II)V",
			arg0,
			arg1
		) {}
	inline NeighboringCellInfo::NeighboringCellInfo(jint arg0, JString arg1, jint arg2)
		: JObject(
			"android.telephony.NeighboringCellInfo",
			"(ILjava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jint NeighboringCellInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint NeighboringCellInfo::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	inline jint NeighboringCellInfo::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	inline jint NeighboringCellInfo::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline jint NeighboringCellInfo::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	inline jint NeighboringCellInfo::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline void NeighboringCellInfo::setCid(jint arg0) const
	{
		callMethod<void>(
			"setCid",
			"(I)V",
			arg0
		);
	}
	inline void NeighboringCellInfo::setRssi(jint arg0) const
	{
		callMethod<void>(
			"setRssi",
			"(I)V",
			arg0
		);
	}
	inline JString NeighboringCellInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NeighboringCellInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

