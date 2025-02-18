#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RouteDiscoveryPreference.def.hpp"

namespace android::media
{
	// Fields
	inline JObject RouteDiscoveryPreference::CREATOR()
	{
		return getStaticObjectField(
			"android.media.RouteDiscoveryPreference",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RouteDiscoveryPreference::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RouteDiscoveryPreference::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject RouteDiscoveryPreference::getPreferredFeatures() const
	{
		return callObjectMethod(
			"getPreferredFeatures",
			"()Ljava/util/List;"
		);
	}
	inline jint RouteDiscoveryPreference::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean RouteDiscoveryPreference::shouldPerformActiveScan() const
	{
		return callMethod<jboolean>(
			"shouldPerformActiveScan",
			"()Z"
		);
	}
	inline JString RouteDiscoveryPreference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RouteDiscoveryPreference::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
