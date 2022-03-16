#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./Criteria.hpp"

namespace android::location
{
	// Fields
	jint Criteria::ACCURACY_COARSE()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_COARSE"
		);
	}
	jint Criteria::ACCURACY_FINE()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_FINE"
		);
	}
	jint Criteria::ACCURACY_HIGH()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_HIGH"
		);
	}
	jint Criteria::ACCURACY_LOW()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_LOW"
		);
	}
	jint Criteria::ACCURACY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_MEDIUM"
		);
	}
	JObject Criteria::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Criteria",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Criteria::NO_REQUIREMENT()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"NO_REQUIREMENT"
		);
	}
	jint Criteria::POWER_HIGH()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_HIGH"
		);
	}
	jint Criteria::POWER_LOW()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_LOW"
		);
	}
	jint Criteria::POWER_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.Criteria",
			"POWER_MEDIUM"
		);
	}
	
	// Constructors
	Criteria::Criteria()
		: JObject(
			"android.location.Criteria",
			"()V"
		) {}
	Criteria::Criteria(android::location::Criteria &arg0)
		: JObject(
			"android.location.Criteria",
			"(Landroid/location/Criteria;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Criteria::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Criteria::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jint Criteria::getBearingAccuracy() const
	{
		return callMethod<jint>(
			"getBearingAccuracy",
			"()I"
		);
	}
	jint Criteria::getHorizontalAccuracy() const
	{
		return callMethod<jint>(
			"getHorizontalAccuracy",
			"()I"
		);
	}
	jint Criteria::getPowerRequirement() const
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jint Criteria::getSpeedAccuracy() const
	{
		return callMethod<jint>(
			"getSpeedAccuracy",
			"()I"
		);
	}
	jint Criteria::getVerticalAccuracy() const
	{
		return callMethod<jint>(
			"getVerticalAccuracy",
			"()I"
		);
	}
	jboolean Criteria::isAltitudeRequired() const
	{
		return callMethod<jboolean>(
			"isAltitudeRequired",
			"()Z"
		);
	}
	jboolean Criteria::isBearingRequired() const
	{
		return callMethod<jboolean>(
			"isBearingRequired",
			"()Z"
		);
	}
	jboolean Criteria::isCostAllowed() const
	{
		return callMethod<jboolean>(
			"isCostAllowed",
			"()Z"
		);
	}
	jboolean Criteria::isSpeedRequired() const
	{
		return callMethod<jboolean>(
			"isSpeedRequired",
			"()Z"
		);
	}
	void Criteria::setAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setAltitudeRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setAltitudeRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setBearingAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setBearingAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setBearingRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setBearingRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setCostAllowed(jboolean arg0) const
	{
		callMethod<void>(
			"setCostAllowed",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setHorizontalAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setPowerRequirement(jint arg0) const
	{
		callMethod<void>(
			"setPowerRequirement",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setSpeedAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setSpeedRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setVerticalAccuracy(jint arg0) const
	{
		callMethod<void>(
			"setVerticalAccuracy",
			"(I)V",
			arg0
		);
	}
	JString Criteria::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Criteria::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

