#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "../../../JObject.hpp"
#include "./SourceRegistrationRequest.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	inline JObject SourceRegistrationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.measurement.SourceRegistrationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SourceRegistrationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SourceRegistrationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::view::InputEvent SourceRegistrationRequest::getInputEvent() const
	{
		return callObjectMethod(
			"getInputEvent",
			"()Landroid/view/InputEvent;"
		);
	}
	inline JObject SourceRegistrationRequest::getRegistrationUris() const
	{
		return callObjectMethod(
			"getRegistrationUris",
			"()Ljava/util/List;"
		);
	}
	inline jint SourceRegistrationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SourceRegistrationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
