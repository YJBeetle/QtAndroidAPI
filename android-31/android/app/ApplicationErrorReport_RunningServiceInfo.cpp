#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.hpp"

namespace android::app
{
	// Fields
	jlong ApplicationErrorReport_RunningServiceInfo::durationMillis()
	{
		return getField<jlong>(
			"durationMillis"
		);
	}
	JString ApplicationErrorReport_RunningServiceInfo::serviceDetails()
	{
		return getObjectField(
			"serviceDetails",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo()
		: JObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"()V"
		) {}
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void ApplicationErrorReport_RunningServiceInfo::dump(JObject arg0, JString arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

