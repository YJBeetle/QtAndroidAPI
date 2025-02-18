#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./InvalidForegroundServiceTypeException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject InvalidForegroundServiceTypeException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.InvalidForegroundServiceTypeException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline InvalidForegroundServiceTypeException::InvalidForegroundServiceTypeException(JString arg0)
		: android::app::ForegroundServiceTypeException(
			"android.app.InvalidForegroundServiceTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint InvalidForegroundServiceTypeException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void InvalidForegroundServiceTypeException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
