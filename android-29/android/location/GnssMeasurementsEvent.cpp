#include "../../JArray.hpp"
#include "./GnssClock.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./GnssMeasurementsEvent.hpp"

namespace android::location
{
	// Fields
	JObject GnssMeasurementsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurementsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssMeasurementsEvent::GnssMeasurementsEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssMeasurementsEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::location::GnssClock GnssMeasurementsEvent::getClock() const
	{
		return callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	JObject GnssMeasurementsEvent::getMeasurements() const
	{
		return callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
	JString GnssMeasurementsEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssMeasurementsEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

