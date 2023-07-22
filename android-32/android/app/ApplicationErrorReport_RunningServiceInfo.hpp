#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.def.hpp"

namespace android::app
{
	// Fields
	inline jlong ApplicationErrorReport_RunningServiceInfo::durationMillis()
	{
		return getField<jlong>(
			"durationMillis"
		);
	}
	inline JString ApplicationErrorReport_RunningServiceInfo::serviceDetails()
	{
		return getObjectField(
			"serviceDetails",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo()
		: JObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"()V"
		) {}
	inline ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ApplicationErrorReport_RunningServiceInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ApplicationErrorReport_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
