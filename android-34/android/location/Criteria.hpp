#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Criteria.def.hpp"

namespace android::location
{
	// Fields
	inline jint Criteria::ACCURACY_COARSE()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_COARSE"
		);
	}
	inline jint Criteria::ACCURACY_FINE()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_FINE"
		);
	}
	inline jint Criteria::ACCURACY_HIGH()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_HIGH"
		);
	}
	inline jint Criteria::ACCURACY_LOW()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_LOW"
		);
	}
	inline jint Criteria::ACCURACY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_MEDIUM"
		);
	}
	inline JObject Criteria::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Criteria",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Criteria::NO_REQUIREMENT()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"NO_REQUIREMENT"
		);
	}
	inline jint Criteria::POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_HIGH"
		);
	}
	inline jint Criteria::POWER_LOW()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_LOW"
		);
	}
	inline jint Criteria::POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_MEDIUM"
		);
	}
	
	// Constructors
	inline Criteria::Criteria()
		: JObject(
			"android.location.Criteria",
			"()V"
		) {}
	inline Criteria::Criteria(android::location::Criteria &arg0)
		: JObject(
			"android.location.Criteria",
			"(Landroid/location/Criteria;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Criteria::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Criteria::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	inline jint Criteria::getBearingAccuracy() const
	{
		return callMethod<jint>(
			"getBearingAccuracy",
			"()I"
		);
	}
	inline jint Criteria::getHorizontalAccuracy() const
	{
		return callMethod<jint>(
			"getHorizontalAccuracy",
			"()I"
		);
	}
	inline jint Criteria::getPowerRequirement() const
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	inline jint Criteria::getSpeedAccuracy() const
	{
		return callMethod<jint>(
			"getSpeedAccuracy",
			"()I"
		);
	}
	inline jint Criteria::getVerticalAccuracy() const
	{
		return callMethod<jint>(
			"getVerticalAccuracy",
			"()I"
		);
	}
	inline jboolean Criteria::isAltitudeRequired() const
	{
		return callMethod<jboolean>(
			"isAltitudeRequired",
			"()Z"
		);
	}
	inline jboolean Criteria::isBearingRequired() const
	{
		return callMethod<jboolean>(
			"isBearingRequired",
			"()Z"
		);
	}
	inline jboolean Criteria::isCostAllowed() const
	{
		return callMethod<jboolean>(
			"isCostAllowed",
			"()Z"
		);
	}
	inline jboolean Criteria::isSpeedRequired() const
	{
		return callMethod<jboolean>(
			"isSpeedRequired",
			"()Z"
		);
	}
	inline void Criteria::setAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setAccuracy",
			"(I)V",
			arg0
		);
	}
	inline void Criteria::setAltitudeRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setAltitudeRequired",
			"(Z)V",
			arg0
		);
	}
	inline void Criteria::setBearingAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setBearingAccuracy",
			"(I)V",
			arg0
		);
	}
	inline void Criteria::setBearingRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setBearingRequired",
			"(Z)V",
			arg0
		);
	}
	inline void Criteria::setCostAllowed(jboolean arg0) const
	{
		callMethod<void>(
			"setCostAllowed",
			"(Z)V",
			arg0
		);
	}
	inline void Criteria::setHorizontalAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalAccuracy",
			"(I)V",
			arg0
		);
	}
	inline void Criteria::setPowerRequirement(jint arg0) const
	{
		callMethod<void>(
			"setPowerRequirement",
			"(I)V",
			arg0
		);
	}
	inline void Criteria::setSpeedAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setSpeedAccuracy",
			"(I)V",
			arg0
		);
	}
	inline void Criteria::setSpeedRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setSpeedRequired",
			"(Z)V",
			arg0
		);
	}
	inline void Criteria::setVerticalAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setVerticalAccuracy",
			"(I)V",
			arg0
		);
	}
	inline JString Criteria::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Criteria::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
