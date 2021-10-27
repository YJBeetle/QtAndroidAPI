#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class ApplicationErrorReport_AnrInfo;
}
namespace __jni_impl::android::app
{
	class ApplicationErrorReport_BatteryInfo;
}
namespace __jni_impl::android::app
{
	class ApplicationErrorReport_CrashInfo;
}
namespace __jni_impl::android::app
{
	class ApplicationErrorReport_RunningServiceInfo;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getErrorReportReceiver(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2);
		static QAndroidJniObject getErrorReportReceiver(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2);
		jint describeContents();
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "./ApplicationErrorReport_AnrInfo.hpp"
#include "./ApplicationErrorReport_BatteryInfo.hpp"
#include "./ApplicationErrorReport_CrashInfo.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ApplicationErrorReport::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ApplicationErrorReport",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationErrorReport::TYPE_ANR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_ANR"
		);
	}
	jint ApplicationErrorReport::TYPE_BATTERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_BATTERY"
		);
	}
	jint ApplicationErrorReport::TYPE_CRASH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_CRASH"
		);
	}
	jint ApplicationErrorReport::TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_NONE"
		);
	}
	jint ApplicationErrorReport::TYPE_RUNNING_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ApplicationErrorReport",
			"TYPE_RUNNING_SERVICE"
		);
	}
	QAndroidJniObject ApplicationErrorReport::anrInfo()
	{
		return __thiz.getObjectField(
			"anrInfo",
			"Landroid/app/ApplicationErrorReport$AnrInfo;"
		);
	}
	QAndroidJniObject ApplicationErrorReport::batteryInfo()
	{
		return __thiz.getObjectField(
			"batteryInfo",
			"Landroid/app/ApplicationErrorReport$BatteryInfo;"
		);
	}
	QAndroidJniObject ApplicationErrorReport::crashInfo()
	{
		return __thiz.getObjectField(
			"crashInfo",
			"Landroid/app/ApplicationErrorReport$CrashInfo;"
		);
	}
	jstring ApplicationErrorReport::installerPackageName()
	{
		return __thiz.getObjectField(
			"installerPackageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ApplicationErrorReport::runningServiceInfo()
	{
		return __thiz.getObjectField(
			"runningServiceInfo",
			"Landroid/app/ApplicationErrorReport$RunningServiceInfo;"
		);
	}
	jboolean ApplicationErrorReport::systemApp()
	{
		return __thiz.getField<jboolean>(
			"systemApp"
		);
	}
	jlong ApplicationErrorReport::time()
	{
		return __thiz.getField<jlong>(
			"time"
		);
	}
	jint ApplicationErrorReport::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	
	// Constructors
	void ApplicationErrorReport::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ApplicationErrorReport::getErrorReportReceiver(__jni_impl::android::content::Context arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ApplicationErrorReport",
			"getErrorReportReceiver",
			"(Landroid/content/Context;Ljava/lang/String;I)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ApplicationErrorReport::getErrorReportReceiver(__jni_impl::android::content::Context arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.ApplicationErrorReport",
			"getErrorReportReceiver",
			"(Landroid/content/Context;Ljava/lang/String;I)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint ApplicationErrorReport::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ApplicationErrorReport::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ApplicationErrorReport::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ApplicationErrorReport::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ApplicationErrorReport : public __jni_impl::android::app::ApplicationErrorReport
	{
	public:
		ApplicationErrorReport(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationErrorReport()
		{
			__constructor();
		}
	};
} // namespace android::app

