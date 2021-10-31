#include "../../os/Parcel.hpp"
#include "./ProviderProperties.hpp"

namespace android::location::provider
{
	// Fields
	jint ProviderProperties::ACCURACY_COARSE()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"ACCURACY_COARSE"
		);
	}
	jint ProviderProperties::ACCURACY_FINE()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"ACCURACY_FINE"
		);
	}
	__JniBaseClass ProviderProperties::CREATOR()
	{
		return getStaticObjectField(
			"android.location.provider.ProviderProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ProviderProperties::POWER_USAGE_HIGH()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_HIGH"
		);
	}
	jint ProviderProperties::POWER_USAGE_LOW()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_LOW"
		);
	}
	jint ProviderProperties::POWER_USAGE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_MEDIUM"
		);
	}
	
	// QAndroidJniObject forward
	ProviderProperties::ProviderProperties(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ProviderProperties::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProviderProperties::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ProviderProperties::getAccuracy()
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jint ProviderProperties::getPowerUsage()
	{
		return callMethod<jint>(
			"getPowerUsage",
			"()I"
		);
	}
	jboolean ProviderProperties::hasAltitudeSupport()
	{
		return callMethod<jboolean>(
			"hasAltitudeSupport",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasBearingSupport()
	{
		return callMethod<jboolean>(
			"hasBearingSupport",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasCellRequirement()
	{
		return callMethod<jboolean>(
			"hasCellRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasMonetaryCost()
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasNetworkRequirement()
	{
		return callMethod<jboolean>(
			"hasNetworkRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasSatelliteRequirement()
	{
		return callMethod<jboolean>(
			"hasSatelliteRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasSpeedSupport()
	{
		return callMethod<jboolean>(
			"hasSpeedSupport",
			"()Z"
		);
	}
	jint ProviderProperties::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ProviderProperties::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ProviderProperties::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location::provider

