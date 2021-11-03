#include "./ApplicationErrorReport_AnrInfo.hpp"
#include "./ApplicationErrorReport_BatteryInfo.hpp"
#include "./ApplicationErrorReport_CrashInfo.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport.hpp"

namespace android::app
{
	// Fields
	JObject ApplicationErrorReport::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationErrorReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationErrorReport::TYPE_ANR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_ANR"
		);
	}
	jint ApplicationErrorReport::TYPE_BATTERY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_BATTERY"
		);
	}
	jint ApplicationErrorReport::TYPE_CRASH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_CRASH"
		);
	}
	jint ApplicationErrorReport::TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_NONE"
		);
	}
	jint ApplicationErrorReport::TYPE_RUNNING_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_RUNNING_SERVICE"
		);
	}
	android::app::ApplicationErrorReport_AnrInfo ApplicationErrorReport::anrInfo()
	{
		return getObjectField(
			"anrInfo",
			"Landroid/app/ApplicationErrorReport$AnrInfo;"
		);
	}
	android::app::ApplicationErrorReport_BatteryInfo ApplicationErrorReport::batteryInfo()
	{
		return getObjectField(
			"batteryInfo",
			"Landroid/app/ApplicationErrorReport$BatteryInfo;"
		);
	}
	android::app::ApplicationErrorReport_CrashInfo ApplicationErrorReport::crashInfo()
	{
		return getObjectField(
			"crashInfo",
			"Landroid/app/ApplicationErrorReport$CrashInfo;"
		);
	}
	JString ApplicationErrorReport::installerPackageName()
	{
		return getObjectField(
			"installerPackageName",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	android::app::ApplicationErrorReport_RunningServiceInfo ApplicationErrorReport::runningServiceInfo()
	{
		return getObjectField(
			"runningServiceInfo",
			"Landroid/app/ApplicationErrorReport$RunningServiceInfo;"
		);
	}
	jboolean ApplicationErrorReport::systemApp()
	{
		return getField<jboolean>(
			"systemApp"
		);
	}
	jlong ApplicationErrorReport::time()
	{
		return getField<jlong>(
			"time"
		);
	}
	jint ApplicationErrorReport::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QJniObject forward
	ApplicationErrorReport::ApplicationErrorReport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApplicationErrorReport::ApplicationErrorReport()
		: JObject(
			"android.app.ApplicationErrorReport",
			"()V"
		) {}
	
	// Methods
	android::content::ComponentName ApplicationErrorReport::getErrorReportReceiver(android::content::Context arg0, JString arg1, jint arg2)
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
	jint ApplicationErrorReport::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ApplicationErrorReport::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ApplicationErrorReport::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ApplicationErrorReport::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

