#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthLte.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthLte::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthLte::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthLte::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthLte::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getCqi() const
	{
		return callMethod<jint>(
			"getCqi",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getRsrp() const
	{
		return callMethod<jint>(
			"getRsrp",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getRsrq() const
	{
		return callMethod<jint>(
			"getRsrq",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getRssnr() const
	{
		return callMethod<jint>(
			"getRssnr",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::getTimingAdvance() const
	{
		return callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	inline jint CellSignalStrengthLte::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthLte::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthLte::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

