#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CallEndpointException.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject CallEndpointException::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallEndpointException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CallEndpointException::ERROR_ANOTHER_REQUEST()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpointException",
			"ERROR_ANOTHER_REQUEST"
		);
	}
	inline jint CallEndpointException::ERROR_ENDPOINT_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpointException",
			"ERROR_ENDPOINT_DOES_NOT_EXIST"
		);
	}
	inline jint CallEndpointException::ERROR_REQUEST_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpointException",
			"ERROR_REQUEST_TIME_OUT"
		);
	}
	inline jint CallEndpointException::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpointException",
			"ERROR_UNSPECIFIED"
		);
	}
	
	// Constructors
	inline CallEndpointException::CallEndpointException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.telecom.CallEndpointException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint CallEndpointException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint CallEndpointException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	inline void CallEndpointException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
