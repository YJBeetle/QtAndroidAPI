#include "../os/Parcel.hpp"
#include "./LocationRequest.hpp"

namespace android::location
{
	// Fields
	__JniBaseClass LocationRequest::CREATOR()
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
	
	// QAndroidJniObject forward
	LocationRequest::LocationRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint LocationRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocationRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong LocationRequest::getDurationMillis()
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	jlong LocationRequest::getIntervalMillis()
	{
		return callMethod<jlong>(
			"getIntervalMillis",
			"()J"
		);
	}
	jlong LocationRequest::getMaxUpdateDelayMillis()
	{
		return callMethod<jlong>(
			"getMaxUpdateDelayMillis",
			"()J"
		);
	}
	jint LocationRequest::getMaxUpdates()
	{
		return callMethod<jint>(
			"getMaxUpdates",
			"()I"
		);
	}
	jfloat LocationRequest::getMinUpdateDistanceMeters()
	{
		return callMethod<jfloat>(
			"getMinUpdateDistanceMeters",
			"()F"
		);
	}
	jlong LocationRequest::getMinUpdateIntervalMillis()
	{
		return callMethod<jlong>(
			"getMinUpdateIntervalMillis",
			"()J"
		);
	}
	jint LocationRequest::getQuality()
	{
		return callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jint LocationRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocationRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocationRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

