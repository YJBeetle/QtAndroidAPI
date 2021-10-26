#pragma once

#ifndef ANDROID_OS_STRICTMODE
#define ANDROID_OS_STRICTMODE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class StrictMode_ThreadPolicy;
}
namespace __jni_impl::android::os
{
	class StrictMode_VmPolicy;
}

namespace __jni_impl::android::os
{
	class StrictMode : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void setThreadPolicy(__jni_impl::android::os::StrictMode_ThreadPolicy arg0);
		static QAndroidJniObject getThreadPolicy();
		static QAndroidJniObject allowThreadDiskWrites();
		static QAndroidJniObject allowThreadDiskReads();
		static void setVmPolicy(__jni_impl::android::os::StrictMode_VmPolicy arg0);
		static QAndroidJniObject getVmPolicy();
		static void enableDefaults();
		static void noteSlowCall(jstring arg0);
		static void noteSlowCall(const QString &arg0);
	};
} // namespace __jni_impl::android::os

#include "StrictMode_ThreadPolicy.hpp"
#include "StrictMode_VmPolicy.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void StrictMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode",
			"(V)V");
	}
	
	// Methods
	void StrictMode::setThreadPolicy(__jni_impl::android::os::StrictMode_ThreadPolicy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"setThreadPolicy",
			"(Landroid/os/StrictMode$ThreadPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StrictMode::getThreadPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"getThreadPolicy",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode::allowThreadDiskWrites()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskWrites",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	QAndroidJniObject StrictMode::allowThreadDiskReads()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"allowThreadDiskReads",
			"()Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	void StrictMode::setVmPolicy(__jni_impl::android::os::StrictMode_VmPolicy arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"setVmPolicy",
			"(Landroid/os/StrictMode$VmPolicy;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StrictMode::getVmPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.StrictMode",
			"getVmPolicy",
			"()Landroid/os/StrictMode$VmPolicy;"
		);
	}
	void StrictMode::enableDefaults()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"enableDefaults",
			"()V"
		);
	}
	void StrictMode::noteSlowCall(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"noteSlowCall",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StrictMode::noteSlowCall(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.StrictMode",
			"noteSlowCall",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class StrictMode : public __jni_impl::android::os::StrictMode
	{
	public:
		StrictMode(QAndroidJniObject obj) { __thiz = obj; }
		StrictMode()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_STRICTMODE

