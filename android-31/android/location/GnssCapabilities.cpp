#include "../os/Parcel.hpp"
#include "./GnssCapabilities.hpp"

namespace android::location
{
	// Fields
	JObject GnssCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssCapabilities::GnssCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssCapabilities::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssCapabilities::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean GnssCapabilities::hasAntennaInfo()
	{
		return callMethod<jboolean>(
			"hasAntennaInfo",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasGnssAntennaInfo()
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasMeasurements()
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasNavigationMessages()
	{
		return callMethod<jboolean>(
			"hasNavigationMessages",
			"()Z"
		);
	}
	jint GnssCapabilities::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring GnssCapabilities::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

