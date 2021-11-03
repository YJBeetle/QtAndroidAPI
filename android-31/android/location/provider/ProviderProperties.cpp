#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JObject ProviderProperties::CREATOR()
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
	
	// QJniObject forward
	ProviderProperties::ProviderProperties(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ProviderProperties::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProviderProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ProviderProperties::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jint ProviderProperties::getPowerUsage() const
	{
		return callMethod<jint>(
			"getPowerUsage",
			"()I"
		);
	}
	jboolean ProviderProperties::hasAltitudeSupport() const
	{
		return callMethod<jboolean>(
			"hasAltitudeSupport",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasBearingSupport() const
	{
		return callMethod<jboolean>(
			"hasBearingSupport",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasCellRequirement() const
	{
		return callMethod<jboolean>(
			"hasCellRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasMonetaryCost() const
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasNetworkRequirement() const
	{
		return callMethod<jboolean>(
			"hasNetworkRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasSatelliteRequirement() const
	{
		return callMethod<jboolean>(
			"hasSatelliteRequirement",
			"()Z"
		);
	}
	jboolean ProviderProperties::hasSpeedSupport() const
	{
		return callMethod<jboolean>(
			"hasSpeedSupport",
			"()Z"
		);
	}
	jint ProviderProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ProviderProperties::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ProviderProperties::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location::provider

