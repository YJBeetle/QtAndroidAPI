#include "./GnssClock.hpp"
#include "../os/Parcel.hpp"
#include "./GnssMeasurementsEvent.hpp"

namespace android::location
{
	// Fields
	__JniBaseClass GnssMeasurementsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssMeasurementsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssMeasurementsEvent::GnssMeasurementsEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssMeasurementsEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::location::GnssClock GnssMeasurementsEvent::getClock()
	{
		return callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	__JniBaseClass GnssMeasurementsEvent::getMeasurements()
	{
		return callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
	jstring GnssMeasurementsEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssMeasurementsEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

