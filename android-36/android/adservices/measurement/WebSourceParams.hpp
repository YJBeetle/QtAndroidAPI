#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./WebSourceParams.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline JObject WebSourceParams::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.measurement.WebSourceParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WebSourceParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WebSourceParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri WebSourceParams::getRegistrationUri() const
	{
		return callObjectMethod(
			"getRegistrationUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint WebSourceParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WebSourceParams::isDebugKeyAllowed() const
	{
		return callMethod<jboolean>(
			"isDebugKeyAllowed",
			"()Z"
		);
	}
	inline void WebSourceParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
