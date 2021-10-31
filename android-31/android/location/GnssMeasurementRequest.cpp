#include "../os/Parcel.hpp"
#include "./GnssMeasurementRequest.hpp"

namespace android::location
{
	// Fields
	__JniBaseClass GnssMeasurementRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurementRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GnssMeasurementRequest::GnssMeasurementRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssMeasurementRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssMeasurementRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GnssMeasurementRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean GnssMeasurementRequest::isFullTracking()
	{
		return callMethod<jboolean>(
			"isFullTracking",
			"()Z"
		);
	}
	jstring GnssMeasurementRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssMeasurementRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

