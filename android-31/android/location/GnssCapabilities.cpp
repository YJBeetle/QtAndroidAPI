#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	jint GnssCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean GnssCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean GnssCapabilities::hasAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasAntennaInfo",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasGnssAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasMeasurements() const
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"()Z"
		);
	}
	jboolean GnssCapabilities::hasNavigationMessages() const
	{
		return callMethod<jboolean>(
			"hasNavigationMessages",
			"()Z"
		);
	}
	jint GnssCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString GnssCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

