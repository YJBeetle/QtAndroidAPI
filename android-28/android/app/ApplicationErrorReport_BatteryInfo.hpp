#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_BatteryInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JString ApplicationErrorReport_BatteryInfo::checkinDetails()
	{
		return getObjectField(
			"checkinDetails",
			"Ljava/lang/String;"
		);
	}
	inline jlong ApplicationErrorReport_BatteryInfo::durationMicros()
	{
		return getField<jlong>(
			"durationMicros"
		);
	}
	inline JString ApplicationErrorReport_BatteryInfo::usageDetails()
	{
		return getObjectField(
			"usageDetails",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationErrorReport_BatteryInfo::usagePercent()
	{
		return getField<jint>(
			"usagePercent"
		);
	}
	
	// Constructors
	inline ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo()
		: JObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"()V"
		) {}
	inline ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ApplicationErrorReport_BatteryInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ApplicationErrorReport_BatteryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
