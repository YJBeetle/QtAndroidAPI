#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_AnrInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JString ApplicationErrorReport_AnrInfo::activity()
	{
		return getObjectField(
			"activity",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationErrorReport_AnrInfo::cause()
	{
		return getObjectField(
			"cause",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationErrorReport_AnrInfo::info()
	{
		return getObjectField(
			"info",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo()
		: JObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"()V"
		) {}
	inline ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ApplicationErrorReport_AnrInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ApplicationErrorReport_AnrInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

