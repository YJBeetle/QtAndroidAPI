#include "./GnssClock.hpp"
#include "../os/Parcel.hpp"
#include "./GnssMeasurementsEvent.hpp"

namespace android::location
{
	// Fields
	QAndroidJniObject GnssMeasurementsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssMeasurementsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	GnssMeasurementsEvent::GnssMeasurementsEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint GnssMeasurementsEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject GnssMeasurementsEvent::getClock()
	{
		return __thiz.callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	QAndroidJniObject GnssMeasurementsEvent::getMeasurements()
	{
		return __thiz.callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
	jstring GnssMeasurementsEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssMeasurementsEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::location

