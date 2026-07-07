#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "../../../JObject.hpp"
#include "./WebSourceRegistrationRequest.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline JObject WebSourceRegistrationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.measurement.WebSourceRegistrationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WebSourceRegistrationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WebSourceRegistrationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri WebSourceRegistrationRequest::getAppDestination() const
	{
		return callObjectMethod(
			"getAppDestination",
			"()Landroid/net/Uri;"
		);
	}
	inline android::view::InputEvent WebSourceRegistrationRequest::getInputEvent() const
	{
		return callObjectMethod(
			"getInputEvent",
			"()Landroid/view/InputEvent;"
		);
	}
	inline JObject WebSourceRegistrationRequest::getSourceParams() const
	{
		return callObjectMethod(
			"getSourceParams",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri WebSourceRegistrationRequest::getTopOriginUri() const
	{
		return callObjectMethod(
			"getTopOriginUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::net::Uri WebSourceRegistrationRequest::getVerifiedDestination() const
	{
		return callObjectMethod(
			"getVerifiedDestination",
			"()Landroid/net/Uri;"
		);
	}
	inline android::net::Uri WebSourceRegistrationRequest::getWebDestination() const
	{
		return callObjectMethod(
			"getWebDestination",
			"()Landroid/net/Uri;"
		);
	}
	inline jint WebSourceRegistrationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WebSourceRegistrationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
