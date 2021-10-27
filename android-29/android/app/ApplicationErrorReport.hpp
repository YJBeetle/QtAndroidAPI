#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class ApplicationErrorReport_AnrInfo;
}
namespace android::app
{
	class ApplicationErrorReport_BatteryInfo;
}
namespace android::app
{
	class ApplicationErrorReport_CrashInfo;
}
namespace android::app
{
	class ApplicationErrorReport_RunningServiceInfo;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ApplicationErrorReport : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ANR();
		static jint TYPE_BATTERY();
		static jint TYPE_CRASH();
		static jint TYPE_NONE();
		static jint TYPE_RUNNING_SERVICE();
		QAndroidJniObject anrInfo();
		QAndroidJniObject batteryInfo();
		QAndroidJniObject crashInfo();
		jstring installerPackageName();
		jstring packageName();
		jstring processName();
		QAndroidJniObject runningServiceInfo();
		jboolean systemApp();
		jlong time();
		jint type();
		
		ApplicationErrorReport(QAndroidJniObject obj);
		// Constructors
		ApplicationErrorReport();
		
		// Methods
		static QAndroidJniObject getErrorReportReceiver(android::content::Context arg0, jstring arg1, jint arg2);
		static QAndroidJniObject getErrorReportReceiver(android::content::Context arg0, const QString &arg1, jint arg2);
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		void dump(__JniBaseClass arg0, const QString &arg1);
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

