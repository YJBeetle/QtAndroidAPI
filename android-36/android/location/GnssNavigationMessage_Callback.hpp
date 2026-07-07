#pragma once

#include "./GnssNavigationMessage.def.hpp"
#include "./GnssNavigationMessage_Callback.def.hpp"

namespace android::location
{
	// Fields
	inline jint GnssNavigationMessage_Callback::STATUS_LOCATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	inline jint GnssNavigationMessage_Callback::STATUS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	inline jint GnssNavigationMessage_Callback::STATUS_READY()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_READY"
		);
	}
	
	// Constructors
	inline GnssNavigationMessage_Callback::GnssNavigationMessage_Callback()
		: JObject(
			"android.location.GnssNavigationMessage$Callback",
			"()V"
		) {}
	
	// Methods
	inline void GnssNavigationMessage_Callback::onGnssNavigationMessageReceived(android::location::GnssNavigationMessage arg0) const
	{
		callMethod<void>(
			"onGnssNavigationMessageReceived",
			"(Landroid/location/GnssNavigationMessage;)V",
			arg0.object()
		);
	}
	inline void GnssNavigationMessage_Callback::onStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
