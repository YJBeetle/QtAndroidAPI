#include "../os/Parcel.hpp"
#include "./Criteria.hpp"

namespace android::location
{
	// Fields
	jint Criteria::ACCURACY_COARSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_COARSE"
		);
	}
	jint Criteria::ACCURACY_FINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_FINE"
		);
	}
	jint Criteria::ACCURACY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_HIGH"
		);
	}
	jint Criteria::ACCURACY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_LOW"
		);
	}
	jint Criteria::ACCURACY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_MEDIUM"
		);
	}
	QAndroidJniObject Criteria::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.Criteria",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Criteria::NO_REQUIREMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"NO_REQUIREMENT"
		);
	}
	jint Criteria::POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_HIGH"
		);
	}
	jint Criteria::POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_LOW"
		);
	}
	jint Criteria::POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_MEDIUM"
		);
	}
	
	Criteria::Criteria(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Criteria::Criteria()
	{
		__thiz = QAndroidJniObject(
			"android.location.Criteria",
			"()V"
		);
	}
	Criteria::Criteria(android::location::Criteria &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Criteria",
			"(Landroid/location/Criteria;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint Criteria::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Criteria::getAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jint Criteria::getBearingAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getBearingAccuracy",
			"()I"
		);
	}
	jint Criteria::getHorizontalAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalAccuracy",
			"()I"
		);
	}
	jint Criteria::getPowerRequirement()
	{
		return __thiz.callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jint Criteria::getSpeedAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getSpeedAccuracy",
			"()I"
		);
	}
	jint Criteria::getVerticalAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getVerticalAccuracy",
			"()I"
		);
	}
	jboolean Criteria::isAltitudeRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isAltitudeRequired",
			"()Z"
		);
	}
	jboolean Criteria::isBearingRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isBearingRequired",
			"()Z"
		);
	}
	jboolean Criteria::isCostAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isCostAllowed",
			"()Z"
		);
	}
	jboolean Criteria::isSpeedRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isSpeedRequired",
			"()Z"
		);
	}
	void Criteria::setAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setAltitudeRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAltitudeRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setBearingAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBearingAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setBearingRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBearingRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setCostAllowed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCostAllowed",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setHorizontalAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setPowerRequirement(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPowerRequirement",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedAccuracy",
			"(I)V",
			arg0
		);
	}
	void Criteria::setSpeedRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedRequired",
			"(Z)V",
			arg0
		);
	}
	void Criteria::setVerticalAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalAccuracy",
			"(I)V",
			arg0
		);
	}
	jstring Criteria::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Criteria::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::location

