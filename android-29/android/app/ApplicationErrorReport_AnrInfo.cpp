#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_AnrInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_AnrInfo::activity()
	{
		return getObjectField(
			"activity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::cause()
	{
		return getObjectField(
			"cause",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::info()
	{
		return getObjectField(
			"info",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo()
		: JObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"()V"
		) {}
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void ApplicationErrorReport_AnrInfo::dump(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ApplicationErrorReport_AnrInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

