#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./WebTriggerRegistrationRequest.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline JObject WebTriggerRegistrationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.measurement.WebTriggerRegistrationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WebTriggerRegistrationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WebTriggerRegistrationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri WebTriggerRegistrationRequest::getDestination() const
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject WebTriggerRegistrationRequest::getTriggerParams() const
	{
		return callObjectMethod(
			"getTriggerParams",
			"()Ljava/util/List;"
		);
	}
	inline jint WebTriggerRegistrationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WebTriggerRegistrationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
