#include "../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	Criteria::Criteria(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint Criteria::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Criteria::getAccuracy()
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jint Criteria::getBearingAccuracy()
	{
		return callMethod<jint>(
			"getBearingAccuracy",
			"()I"
		);
	}
	jint Criteria::getHorizontalAccuracy()
	{
		return callMethod<jint>(
			"getHorizontalAccuracy",
			"()I"
		);
	}
	jint Criteria::getPowerRequirement()
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jint Criteria::getSpeedAccuracy()
	{
		return callMethod<jint>(
			"getSpeedAccuracy",
			"()I"
		);
	}
	jint Criteria::getVerticalAccuracy()
	{
		return callMethod<jint>(
			"getVerticalAccuracy",
			"()I"
		);
	}
	jboolean Criteria::isAltitudeRequired()
	{
		return callMethod<jboolean>(
			"isAltitudeRequired",
			"()Z"
		);
	}
	jboolean Criteria::isBearingRequired()
	{
		return callMethod<jboolean>(
			"isBearingRequired",
			"()Z"
		);
	}
	jboolean Criteria::isCostAllowed()
	{
		return callMethod<jboolean>(
			"isCostAllowed",
			"()Z"
		);
	}
	jboolean Criteria::isSpeedRequired()
	{
		return callMethod<jboolean>(
			"isSpeedRequired",
			"()Z"
		);
	}
	void Criteria::setAccuracy(jint arg0)
	{
		callMethod<void>(
			"setAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setAltitudeRequired(jboolean arg0)
	{
		callMethod<void>(
			"setAltitudeRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setBearingAccuracy(jint arg0)
	{
		callMethod<void>(
			"setBearingAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setBearingRequired(jboolean arg0)
	{
		callMethod<void>(
			"setBearingRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setCostAllowed(jboolean arg0)
	{
		callMethod<void>(
			"setCostAllowed",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setHorizontalAccuracy(jint arg0)
	{
		callMethod<void>(
			"setHorizontalAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setPowerRequirement(jint arg0)
	{
		callMethod<void>(
			"setPowerRequirement",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedAccuracy(jint arg0)
	{
		callMethod<void>(
			"setSpeedAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedRequired(jboolean arg0)
	{
		callMethod<void>(
			"setSpeedRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setVerticalAccuracy(jint arg0)
	{
		callMethod<void>(
			"setVerticalAccuracy",
			"(I)V",
			arg0
		);
	}
	jstring Criteria::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Criteria::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

