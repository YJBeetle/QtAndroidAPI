#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./PublishConfig.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject PublishConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.PublishConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PublishConfig::PUBLISH_TYPE_SOLICITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_SOLICITED"
		);
	}
	inline jint PublishConfig::PUBLISH_TYPE_UNSOLICITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_UNSOLICITED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PublishConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PublishConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PublishConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PublishConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PublishConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
