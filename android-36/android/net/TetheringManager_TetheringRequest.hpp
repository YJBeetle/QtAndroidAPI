#pragma once

#include "./wifi/SoftApConfiguration.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TetheringManager_TetheringRequest.def.hpp"

namespace android::net
{
	// Fields
	inline JObject TetheringManager_TetheringRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.TetheringManager$TetheringRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TetheringManager_TetheringRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TetheringManager_TetheringRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::wifi::SoftApConfiguration TetheringManager_TetheringRequest::getSoftApConfiguration() const
	{
		return callObjectMethod(
			"getSoftApConfiguration",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	inline jint TetheringManager_TetheringRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TetheringManager_TetheringRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TetheringManager_TetheringRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
