#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./MissingForegroundServiceTypeException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject MissingForegroundServiceTypeException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.MissingForegroundServiceTypeException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline MissingForegroundServiceTypeException::MissingForegroundServiceTypeException(JString arg0)
		: android::app::ForegroundServiceTypeException(
			"android.app.MissingForegroundServiceTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint MissingForegroundServiceTypeException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void MissingForegroundServiceTypeException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./ServiceStartNotAllowedException.hpp"
#include "./ForegroundServiceTypeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
