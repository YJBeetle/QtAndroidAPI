#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthGsm.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthGsm::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthGsm::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthGsm::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthGsm::getBitErrorRate() const
	{
		return callMethod<jint>(
			"getBitErrorRate",
			"()I"
		);
	}
	inline jint CellSignalStrengthGsm::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthGsm::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthGsm::getTimingAdvance() const
	{
		return callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	inline jint CellSignalStrengthGsm::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthGsm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthGsm::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./CellSignalStrength.hpp"

