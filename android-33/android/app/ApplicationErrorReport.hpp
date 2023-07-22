#pragma once

#include "./ApplicationErrorReport_AnrInfo.def.hpp"
#include "./ApplicationErrorReport_BatteryInfo.def.hpp"
#include "./ApplicationErrorReport_CrashInfo.def.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ApplicationErrorReport::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationErrorReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ApplicationErrorReport::TYPE_ANR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_ANR"
		);
	}
	inline jint ApplicationErrorReport::TYPE_BATTERY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_BATTERY"
		);
	}
	inline jint ApplicationErrorReport::TYPE_CRASH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_CRASH"
		);
	}
	inline jint ApplicationErrorReport::TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_NONE"
		);
	}
	inline jint ApplicationErrorReport::TYPE_RUNNING_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_RUNNING_SERVICE"
		);
	}
	inline android::app::ApplicationErrorReport_AnrInfo ApplicationErrorReport::anrInfo()
	{
		return getObjectField(
			"anrInfo",
			"Landroid/app/ApplicationErrorReport$AnrInfo;"
		);
	}
	inline android::app::ApplicationErrorReport_BatteryInfo ApplicationErrorReport::batteryInfo()
	{
		return getObjectField(
			"batteryInfo",
			"Landroid/app/ApplicationErrorReport$BatteryInfo;"
		);
	}
	inline android::app::ApplicationErrorReport_CrashInfo ApplicationErrorReport::crashInfo()
	{
		return getObjectField(
			"crashInfo",
			"Landroid/app/ApplicationErrorReport$CrashInfo;"
		);
	}
	inline JString ApplicationErrorReport::installerPackageName()
	{
		return getObjectField(
			"installerPackageName",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationErrorReport::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationErrorReport::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	inline android::app::ApplicationErrorReport_RunningServiceInfo ApplicationErrorReport::runningServiceInfo()
	{
		return getObjectField(
			"runningServiceInfo",
			"Landroid/app/ApplicationErrorReport$RunningServiceInfo;"
		);
	}
	inline jboolean ApplicationErrorReport::systemApp()
	{
		return getField<jboolean>(
			"systemApp"
		);
	}
	inline jlong ApplicationErrorReport::time()
	{
		return getField<jlong>(
			"time"
		);
	}
	inline jint ApplicationErrorReport::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// Constructors
	inline ApplicationErrorReport::ApplicationErrorReport()
		: JObject(
			"android.app.ApplicationErrorReport",
			"()V"
		) {}
	
	// Methods
	inline android::content::ComponentName ApplicationErrorReport::getErrorReportReceiver(android::content::Context arg0, JString arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.app.ApplicationErrorReport",
			"getErrorReportReceiver",
			"(Landroid/content/Context;Ljava/lang/String;I)Landroid/content/ComponentName;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint ApplicationErrorReport::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ApplicationErrorReport::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ApplicationErrorReport::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ApplicationErrorReport::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
