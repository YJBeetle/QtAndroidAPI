#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ProviderProperties.def.hpp"

namespace android::location::provider
{
	// Fields
	inline jint ProviderProperties::ACCURACY_COARSE()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"ACCURACY_COARSE"
		);
	}
	inline jint ProviderProperties::ACCURACY_FINE()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"ACCURACY_FINE"
		);
	}
	inline JObject ProviderProperties::CREATOR()
	{
		return getStaticObjectField(
			"android.location.provider.ProviderProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ProviderProperties::POWER_USAGE_HIGH()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_HIGH"
		);
	}
	inline jint ProviderProperties::POWER_USAGE_LOW()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_LOW"
		);
	}
	inline jint ProviderProperties::POWER_USAGE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.location.provider.ProviderProperties",
			"POWER_USAGE_MEDIUM"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ProviderProperties::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ProviderProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ProviderProperties::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	inline jint ProviderProperties::getPowerUsage() const
	{
		return callMethod<jint>(
			"getPowerUsage",
			"()I"
		);
	}
	inline jboolean ProviderProperties::hasAltitudeSupport() const
	{
		return callMethod<jboolean>(
			"hasAltitudeSupport",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasBearingSupport() const
	{
		return callMethod<jboolean>(
			"hasBearingSupport",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasCellRequirement() const
	{
		return callMethod<jboolean>(
			"hasCellRequirement",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasMonetaryCost() const
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasNetworkRequirement() const
	{
		return callMethod<jboolean>(
			"hasNetworkRequirement",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasSatelliteRequirement() const
	{
		return callMethod<jboolean>(
			"hasSatelliteRequirement",
			"()Z"
		);
	}
	inline jboolean ProviderProperties::hasSpeedSupport() const
	{
		return callMethod<jboolean>(
			"hasSpeedSupport",
			"()Z"
		);
	}
	inline jint ProviderProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ProviderProperties::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ProviderProperties::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location::provider;
#endif
