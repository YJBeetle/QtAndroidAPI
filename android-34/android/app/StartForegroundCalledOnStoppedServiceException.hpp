#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./StartForegroundCalledOnStoppedServiceException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject StartForegroundCalledOnStoppedServiceException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.StartForegroundCalledOnStoppedServiceException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline StartForegroundCalledOnStoppedServiceException::StartForegroundCalledOnStoppedServiceException(JString arg0)
		: java::lang::IllegalStateException(
			"android.app.StartForegroundCalledOnStoppedServiceException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint StartForegroundCalledOnStoppedServiceException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void StartForegroundCalledOnStoppedServiceException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
