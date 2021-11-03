#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LocationRequest.hpp"

namespace android::location
{
	// Fields
	JObject LocationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.location.LocationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong LocationRequest::PASSIVE_INTERVAL()
	{
		return getStaticField<jlong>(
			"android.location.LocationRequest",
			"PASSIVE_INTERVAL"
		);
	}
	jint LocationRequest::QUALITY_BALANCED_POWER_ACCURACY()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_BALANCED_POWER_ACCURACY"
		);
	}
	jint LocationRequest::QUALITY_HIGH_ACCURACY()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_HIGH_ACCURACY"
		);
	}
	jint LocationRequest::QUALITY_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.location.LocationRequest",
			"QUALITY_LOW_POWER"
		);
	}
	
	// QJniObject forward
	LocationRequest::LocationRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LocationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong LocationRequest::getDurationMillis() const
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	jlong LocationRequest::getIntervalMillis() const
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	jlong LocationRequest::getMaxUpdateDelayMillis() const
	{
		return callMethod<jlong>(
			"getMaxUpdateDelayMillis",
			"()J"
		);
	}
	jint LocationRequest::getMaxUpdates() const
	{
		return callMethod<jint>(
			"getMaxUpdates",
			"()I"
		);
	}
	jfloat LocationRequest::getMinUpdateDistanceMeters() const
	{
		return callMethod<jfloat>(
			"getMinUpdateDistanceMeters",
			"()F"
		);
	}
	jlong LocationRequest::getMinUpdateIntervalMillis() const
	{
		return callMethod<jlong>(
			"getMinUpdateIntervalMillis",
			"()J"
		);
	}
	jint LocationRequest::getQuality() const
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint LocationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString LocationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LocationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

