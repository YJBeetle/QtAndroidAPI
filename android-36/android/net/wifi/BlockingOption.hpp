#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./BlockingOption.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject BlockingOption::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.BlockingOption",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BlockingOption::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BlockingOption::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BlockingOption::getBlockingTimeSeconds() const
	{
		return callMethod<jint>(
			"getBlockingTimeSeconds",
			"()I"
		);
	}
	inline jint BlockingOption::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BlockingOption::isBlockingBssidOnly() const
	{
		return callMethod<jboolean>(
			"isBlockingBssidOnly",
			"()Z"
		);
	}
	inline JString BlockingOption::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BlockingOption::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
