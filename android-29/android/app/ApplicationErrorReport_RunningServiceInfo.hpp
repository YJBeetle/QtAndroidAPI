#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ApplicationErrorReport_RunningServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong durationMillis();
		jstring serviceDetails();
		
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
	jlong ApplicationErrorReport_RunningServiceInfo::durationMillis()
	{
		return __thiz.getField<jlong>(
			"durationMillis"
		);
	}
	jstring ApplicationErrorReport_RunningServiceInfo::serviceDetails()
	{
		return __thiz.getObjectField(
			"serviceDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ApplicationErrorReport_RunningServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"()V"
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ApplicationErrorReport_RunningServiceInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ApplicationErrorReport_RunningServiceInfo : public __jni_impl::android::app::ApplicationErrorReport_RunningServiceInfo
	{
	public:
		ApplicationErrorReport_RunningServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationErrorReport_RunningServiceInfo()
		{
			__constructor();
		}
		ApplicationErrorReport_RunningServiceInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

