#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_AnrInfo.hpp"

namespace android::app
{
	// Fields
	JString ApplicationErrorReport_AnrInfo::activity()
	{
		return getObjectField(
			"activity",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_AnrInfo::cause()
	{
		return getObjectField(
			"cause",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_AnrInfo::info()
	{
		return getObjectField(
			"info",
			"Ljava/lang/String;"
		);
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
	void ApplicationErrorReport_AnrInfo::dump(JObject arg0, JString arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
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

