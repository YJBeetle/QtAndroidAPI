#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ApplicationErrorReport_AnrInfo : public __JniBaseClass
	{
	public:
		// Fields
		jstring activity();
		jstring cause();
		jstring info();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring ApplicationErrorReport_AnrInfo::activity()
	{
		return __thiz.getObjectField(
			"activity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::cause()
	{
		return __thiz.getObjectField(
			"cause",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::info()
	{
		return __thiz.getObjectField(
			"info",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ApplicationErrorReport_AnrInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"()V"
		);
	}
	void ApplicationErrorReport_AnrInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ApplicationErrorReport_AnrInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_AnrInfo::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ApplicationErrorReport_AnrInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ApplicationErrorReport_AnrInfo : public __jni_impl::android::app::ApplicationErrorReport_AnrInfo
	{
	public:
		ApplicationErrorReport_AnrInfo(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationErrorReport_AnrInfo()
		{
			__constructor();
		}
		ApplicationErrorReport_AnrInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

