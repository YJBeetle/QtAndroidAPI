#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./BackgroundServiceStartNotAllowedException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject BackgroundServiceStartNotAllowedException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.BackgroundServiceStartNotAllowedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline BackgroundServiceStartNotAllowedException::BackgroundServiceStartNotAllowedException(JString arg0)
		: android::app::ServiceStartNotAllowedException(
			"android.app.BackgroundServiceStartNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint BackgroundServiceStartNotAllowedException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void BackgroundServiceStartNotAllowedException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
