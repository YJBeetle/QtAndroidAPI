#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthTdscdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthTdscdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthTdscdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthTdscdma::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthTdscdma::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthTdscdma::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthTdscdma::getRscp() const
	{
		return callMethod<jint>(
			"getRscp",
			"()I"
		);
	}
	inline jint CellSignalStrengthTdscdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthTdscdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
