#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssMeasurementRequest.hpp"

namespace android::location
{
	// Fields
	JObject GnssMeasurementRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurementRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GnssMeasurementRequest::GnssMeasurementRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssMeasurementRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssMeasurementRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	JString GnssMeasurementRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

