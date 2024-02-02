#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./WebTriggerParams.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline JObject WebTriggerParams::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.measurement.WebTriggerParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WebTriggerParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WebTriggerParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri WebTriggerParams::getRegistrationUri() const
	{
		return callObjectMethod(
			"getRegistrationUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint WebTriggerParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WebTriggerParams::isDebugKeyAllowed() const
	{
		return callMethod<jboolean>(
			"isDebugKeyAllowed",
			"()Z"
		);
	}
	inline void WebTriggerParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
